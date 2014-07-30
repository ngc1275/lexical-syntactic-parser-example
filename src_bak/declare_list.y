%{
	#include <stdio.h>
	int yylex();
	int yyparse();
	FILE *yyin;
	FILE *yyout;
	int lines;

	// Se usan en el análisis léxico para almacenar los tokens y sus respectivos valores.
	char *stToken[1024];
	char *stValue[1024];
	int stID ;

	// Se usa en el análisis sintáctico para almacenar los niveles y los símbolos encontrados
	struct s_treeLevel;
	struct s_token {
		char *name;
		int no_terminal;
		int level_ref;
	};
	struct s_treeLevel {
		int level;
		int cant_tokens;
		struct s_token token[128];
	} treeLevel[1024];
	int tLevel = 0;
	int tID = 0;
	int found_errors = 0;
%}

%union {
	int val;
	float f;
	char *text;
};

%token <text> T_STRING
%token <text> T_RET
%token <text> T_NAMESPACE
%token <text> T_NS_SEPARATOR
%token <text> T_ARRAY
%token <text> T_CLASS
%token <text> T_CLASS_C
%token <text> T_TRAIT_C
%token <text> T_FUNC_C
%token <text> T_METHOD_C
%token <text> T_LINE
%token <text> T_FILE
%token <text> T_DIR
%token <text> T_NS_C
%token <text> T_LNUMBER
%token <text> T_DNUMBER
%token <text> T_CONSTANT_ENCAPSED_STRING
%token <text> T_START_HEREDOC
%token <text> T_END_HEREDOC
%token <text> T_ENCAPSED_AND_WHITESPACE
%token <text> T_DTWO_POINTS
%token <text> T_SL
%token <text> T_SR
%token <text> T_LOGICAL_OR
%token <text> T_LOGICAL_XOR
%token <text> T_LOGICAL_AND
%token <text> T_BOOLEAN_OR
%token <text> T_BOOLEAN_AND
%token <text> T_IS_EQUAL
%token <text> T_IS_NOT_EQUAL
%token <text> T_IS_IDENTICAL
%token <text> T_IS_NOT_IDENTICAL
%token <text> T_IS_SMALLER_OR_EQUAL
%token <text> T_IS_GREATER_OR_EQUAL
%token <text> T_STATIC
%token <text> T_DOUBLE_ARROW
%token <text> T_POW
%token T_END

%type <text> static_scalar
%type <text> common_scalar
%type <text> static_class_name_scalar
%type <text> namespace_name
%type <text> static_array_pair_list
%type <text> static_class_constant
%type <text> static_operation
%type <text> class_name
%type <text> non_empty_static_array_pair_list
%type <text> possible_comma

%start declare_list

%%

declare_list:
		T_STRING '=' static_scalar { addT("T_STRING"); addT("="); addNT("static_scalar"); addLevel(); }
	|	T_STRING '=' static_scalar T_END { addT("T_STRING"); addT("="); addNT("static_scalar"); addT("T_END"); return 0; }		
	|	declare_list ',' T_STRING '=' static_scalar { addNT("declare_list"); addT(","); addT("T_STRING"); addT("="); addNT("static_scalar"); addLevel(); }
	|	declare_list ',' T_STRING '=' static_scalar T_END { addNT("declare_list"); addT(","); addT("T_STRING"); addT("="); addNT("static_scalar"); addT("T_END"); return 0; }
	/*Reconocimiento de ERRORES desde aquí*/
	|  	'=' static_scalar { printf("Falta T_STRING antes del '='.\n"); }
	|  	'=' static_scalar T_END { printf("Falta T_STRING antes del '='.\n"); return 0; }
	|	T_STRING '=' { printf("Falta static_scalar después del '='.\n"); }
	|	T_STRING '=' T_END { printf("Falta static_scalar después del '='.\n"); return 0; }
	|	static_scalar '=' static_scalar { printf("Se esperaba T_STRING,y no static_scalar, antes del '='. Formato: T_STRING = static_scalar\n"); }
	|	static_scalar '=' static_scalar T_END { printf("Se esperaba T_STRING,y no static_scalar, antes del '='. Formato: T_STRING = static_scalar\n"); return 0; }
	|	declare_list T_STRING '=' static_scalar { printf("Se esperaba una ',' antes de T_STRING\n"); }
	|	declare_list T_STRING '=' static_scalar T_END { printf("Se esperaba una ',' antes de T_STRING\n"); return 0; }
	|	declare_list ',' T_STRING static_scalar { printf("Se esperaba un '=' después de T_STRING\n"); }
	|	declare_list ',' T_STRING static_scalar T_END { printf("Se esperaba un '=' después de T_STRING\n"); return 0; }
	|	declare_list ',' '=' static_scalar { printf("Falta T_STRING antes del '='. Formato: T_STRING = static_scalar\n"); }
	|	declare_list ',' '=' static_scalar T_END { printf("Falta T_STRING antes del '='. Formato: T_STRING = static_scalar\n"); return 0; }
	|	declare_list ',' T_STRING '=' { printf("Falta static_scalar después del '='. Formato: T_STRING = static_scalar\n"); }
	|	declare_list ',' T_STRING '=' T_END { printf("Falta static_scalar después del '='. Formato: T_STRING = static_scalar\n"); return 0; }
	|	declare_list ',' static_scalar '=' static_scalar { printf("Se esperaba T_STRING, no static_scalar. Formato: T_STRING = static_scalar\n"); }
	|	declare_list ',' static_scalar '=' static_scalar T_END { printf("Se esperaba T_STRING, no static_scalar. Formato: T_STRING = static_scalar\n"); return 0; }
;


static_scalar:
		common_scalar { addNT("common_scalar"); addLevel(); }
	|	static_class_name_scalar { addNT("static_class_name_scalar"); addLevel(); }
	|	namespace_name  { addNT("namespace_name"); addLevel(); }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name { addT("T_NAMESPACE"); addT("T_NS_SEPARATOR"); addNT("namespace_name"); addLevel(); }
	|	T_NS_SEPARATOR namespace_name { addT("T_NS_SEPARATOR"); addNT("namespace_name"); addLevel(); }
	|	T_ARRAY '(' static_array_pair_list ')' { addT("T_ARRAY"); addT("("); addNT("static_array_pair_list"); addT(")"); addLevel(); }
	|	'[' static_array_pair_list ']' { addT("["); addNT("static_array_pair_list"); addT("]"); addLevel(); }
	|	static_class_constant { addNT("static_class_constant"); addLevel(); }
	|	T_CLASS_C { addT("T_CLASS_C"); addLevel(); addLevel(); }
	|	static_operation { addNT("static_operation"); addLevel(); }
	/*Reconocimiento de ERRORES desde aquí*/
	|	T_NAMESPACE T_NS_SEPARATOR { printf("Se esperaba namespace_name después de T_NS_SEPARATOR\n"); }
	|	T_ARRAY { printf("Falta argumento de array. Formato T_ARRAY (...)\n"); }
	|	T_ARRAY '(' static_array_pair_list { printf("No se cerró T_ARRAY correctamente. Falta ')' al final.\n"); }
	|	T_ARRAY static_array_pair_list ')' { printf("No se abrió T_ARRAY correctamente. Falta '(' al inicio.\n"); }
;


common_scalar:
		T_LNUMBER  { addT("T_LNUMBER"); addLevel(); }
	|	T_DNUMBER  { addT("T_DNUMBER"); addLevel(); }
	|	T_CONSTANT_ENCAPSED_STRING { addT("T_CONSTANT_ENCAPSED_STRING"); addLevel(); }
	|	T_LINE  { addT("T_LINE"); addLevel(); }
	|	T_FILE  { addT("T_FILE"); addLevel(); }
	|	T_DIR    { addT("T_DIR"); addLevel(); }
	|	T_TRAIT_C { addT("T_TRAIT_C"); addLevel(); }
	|	T_METHOD_C { addT("T_METHOD_C"); addLevel(); }
	|	T_FUNC_C { addT("T_FUNC_C"); addLevel(); }
	|	T_NS_C { addT("T_NS_C"); addLevel(); }
;
static_class_name_scalar:
	class_name T_DTWO_POINTS { addNT("class_name"); addT("T_DTWO_POINTS"); addLevel(); }
;
namespace_name:
		T_STRING { addT("T_STATIC"); addLevel(); }
	|	namespace_name T_NS_SEPARATOR T_STRING { addNT("namespace_name"); addT("T_NS_SEPARATOR"); addT("T_STRING"); addLevel(); }
	/*Reconocimiento de ERRORES desde aquí*/
	|	namespace_name T_NS_SEPARATOR { printf("Se esperaba T_STRING después de T_NS_SEPARATOR.\n"); }
	|	T_NS_SEPARATOR T_STRING { printf("Se esperaba namespace_name antes de T_NS_SEPARATOR.\n"); }
;
static_array_pair_list:
		/* empty */ { addT(""); addLevel(); }
	|	non_empty_static_array_pair_list possible_comma { addNT("non_empty_static_array_pair_list"); addNT("possible_comma"); addLevel(); }
;
static_class_constant:
		class_name T_DTWO_POINTS T_STRING { addNT("class_name"); addT("T_DTWO_POINTS"); addT("T_STRING"); addLevel(); }
;
static_operation:
		static_scalar '[' static_scalar ']' { addNT("static_scalar"); addT("["); addNT("static_scalar"); addT("]"); addLevel();}
	|	static_scalar '+' static_scalar { addNT("static_scalar"); addT("+"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '-' static_scalar { addNT("static_scalar"); addT("-"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '*' static_scalar { addNT("static_scalar"); addT("*"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_POW static_scalar { addNT("static_scalar"); addT("T_POW"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '/' static_scalar { addNT("static_scalar"); addT("/"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '%' static_scalar { addNT("static_scalar"); addT("%"); addNT("static_scalar"); addLevel(); }
	|	'!' static_scalar { addT("!"); addNT("static_scalar"); addLevel(); }
	|	'~' static_scalar { addT("~"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '|' static_scalar { addNT("static_scalar"); addT("|"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '&' static_scalar { addNT("static_scalar"); addT("&"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '^' static_scalar { addNT("static_scalar"); addT("^"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_SL static_scalar {  addNT("static_scalar"); addT("T_SL"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_SR static_scalar { addNT("static_scalar"); addT("T_SR"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '.' static_scalar { addNT("static_scalar"); addT("."); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_LOGICAL_XOR static_scalar { addNT("static_scalar"); addT("T_LOGICAL_XOR"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_LOGICAL_AND static_scalar { addNT("static_scalar"); addT("T_LOGICAL_AND"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_LOGICAL_OR static_scalar { addNT("static_scalar"); addT("T_LOGICAL_OR"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_BOOLEAN_AND static_scalar { addNT("static_scalar"); addT("T_BOOLEAN_AND"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_BOOLEAN_OR static_scalar { addNT("static_scalar"); addT("T_BOOLEAN_OR"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_IS_IDENTICAL static_scalar { addNT("static_scalar"); addT("T_IS_IDENTICAL"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_IS_NOT_IDENTICAL static_scalar { addNT("static_scalar"); addT("T_IS_NOT_IDENTICAL"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_IS_EQUAL static_scalar { addNT("static_scalar"); addT("T_IS_EQUAL"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_IS_NOT_EQUAL static_scalar { addNT("static_scalar"); addT("T_IS_NOT_EQUAL"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '<' static_scalar { addNT("static_scalar"); addT("<"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '>' static_scalar { addNT("static_scalar"); addT(">"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_IS_SMALLER_OR_EQUAL static_scalar { addNT("static_scalar"); addT("T_IS_SMALLER_OR_EQUAL"); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_IS_GREATER_OR_EQUAL static_scalar { addNT("static_scalar"); addT("T_IS_GREATER_OR_EQUAL"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '?' ':' static_scalar { addNT("static_scalar"); addT("?"); addT(":"); addNT("static_scalar"); addLevel(); }
	|	static_scalar '?' static_scalar ':' static_scalar { addNT("static_scalar"); addT("?"); addNT("static_scalar"); addT(":"); addNT("static_scalar"); addLevel(); }
	|	'+' static_scalar { addT("+"); addNT("static_scalar"); addLevel(); }
	|	'-' static_scalar { addT("-"); addNT("static_scalar"); addLevel(); }
	|	'(' static_scalar ')' { addT("("); addNT("static_scalar"); addT(")"); addLevel(); }
;


class_name:
		T_STATIC { addT("T_STATIC"); addLevel(); }
	|	namespace_name { addNT("namespace_name"); addLevel(); }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name { addT("T_NAMESPACE"); addT("T_NS_SEPARATOR"); addNT("namespace_name"); addLevel(); }
	|	T_NS_SEPARATOR namespace_name { addT("T_NS_SEPARATOR"); addNT("namespace_name"); addLevel(); }
;
non_empty_static_array_pair_list:
		non_empty_static_array_pair_list ',' static_scalar T_DOUBLE_ARROW static_scalar { addNT("non_empty_static_array_pair_list"); addT(","); addNT("static_scalar"); addT("T_DOUBLE_ARROW"); addNT("static_scalar"); addLevel(); }
	|	non_empty_static_array_pair_list ',' static_scalar { addNT("non_empty_static_array_pair_list"); addT(","); addNT("static_scalar"); addLevel(); }
	|	static_scalar T_DOUBLE_ARROW static_scalar {  addNT("static_scalar"); addT("T_DOUBLE_ARROW"); addNT("static_scalar"); addLevel(); }
	|	static_scalar { addNT("static_scalar"); addLevel(); }
	/* Reconocimiento de ERROREs */
	|	static_scalar T_DOUBLE_ARROW { printf("Se esperaba static_scalar después de T_DOUBLE_ARROW.\n"); }
	|	T_DOUBLE_ARROW static_scalar  { printf("Se esperaba static_scalar antes de T_DOUBLE_ARROW.\n"); }
	|	non_empty_static_array_pair_list ',' static_scalar T_DOUBLE_ARROW { printf("Se esperaba static_scalar después de T_DOUBLE_ARROW.\n"); }
	|	non_empty_static_array_pair_list ',' T_DOUBLE_ARROW static_scalar { printf("Se esperaba static_scalar después de T_DOUBLE_ARROW.\n"); }

;
possible_comma:
		/* empty */ { addT(""); addLevel(); }
	|	',' { addT(","); addLevel(); }
;

%%

int yyerror(char *s) {
	printf("\nError: [%s] en línea %d\n\n", s, lines);
	found_errors++;
	return 0;
}

int yywrap() {
	return 1;
}

void addT(char *t) {
	treeLevel[tLevel].token[tID].name = (char*) malloc(strlen(t) + 1);
	strcpy(treeLevel[tLevel].token[tID].name, t);
	//printf("%s(%d) ", treeLevel[tLevel].token[tID].name, tID);

	treeLevel[tLevel].token[tID++].no_terminal = 0;
	treeLevel[tLevel].cant_tokens++;
}

void addNT(char *t) {
	treeLevel[tLevel].token[tID].name = (char*) malloc(strlen(t) + 1);
	strcpy(treeLevel[tLevel].token[tID].name, t);

	treeLevel[tLevel].token[tID++].no_terminal = 1;
	treeLevel[tLevel].cant_tokens++;
}

void addLevel() {
	//treeLevel[tLevel].cant_tokens = tID;
	//printf("\n<cant_token: %d>\n", treeLevel[tLevel].cant_tokens);
	tID = 0;
	tLevel++;
}

/* Funciones más importantes para imprimir árbol sintáctico y la tabla de símbolos */
// Imprime la tabla de símbolos generada en el análisis léxico (archivo declare_list.l, de flex)
void printSymbolTable() {
	int i;
	for(i=0; i<stID; i++) {
		printf("[%s]: %s\n", stToken[i], stValue[i]);
	}
}

// Arma el árbol. Coloca en la variable "level_ref" de los no terminales el nivel, es decir, el conjunto de símbolos al que hacen referencia para luego reemplazarlos.
int makeTree(int i) {
	int j;
	int found_no_terminals=0;
	for(j=treeLevel[i].cant_tokens-1; j>=0; --j) {
		if(treeLevel[i].token[j].no_terminal == 1) {
			found_no_terminals++;
			treeLevel[i].token[j].level_ref = i-found_no_terminals; //La raíz del arbol es el último nivel agregado a la estructura, por lo que no es 0, así que hay que invertir el orden en que se lee la estructura.
			//printf("Asignado %d a %s(%d)\n", treeLevel[i].token[j].level_ref, treeLevel[i].token[j].name, i);
			found_no_terminals += makeTree(i-found_no_terminals);
		}
	}
	return found_no_terminals;
}

// Imprime cada nivel del árbol, desarrollando desde la raíz hacia abajo (ramas)
int printTreeLevel(int n, int i) {
	int j;
	int printed_no_terminals = 0;
	for(j=0; j<treeLevel[n].cant_tokens; j++) {
		if(treeLevel[n].token[j].no_terminal) {
			printed_no_terminals++;
			if(i>0) {
				if(i == 1) { // Resalta los símbolso que se agregaron en reemplazo del no terminal encontrado.
					printf("\x1b[01;32m");
					printed_no_terminals += printTreeLevel(treeLevel[n].token[j].level_ref, i-1);
					printf("\x1b[00m");
				}
				else {
					printed_no_terminals += printTreeLevel(treeLevel[n].token[j].level_ref, i-1);
				}
			}
			else {
				// Imprime los no terminales entre < >
				printf("<%s> ", treeLevel[n].token[j].name);
			}
		}
		else {
			printf("%s ", treeLevel[n].token[j].name);
		}
	}
	return printed_no_terminals;
}


// Imprime el árbol sintáctico. Empieza por la raíz o primer nivel y va reemplazando los no terminales por el conjunto de símbolos que hacen referencia, los cuales derivan de este.
void printTree() {
	if(found_errors > 0) {
		printf("No se puede imprimir el árbol sintáctico debido a que se encontraron errores.\n");
	}
	else {
		int fnt = makeTree(tLevel);
		int i = 0;
		for(i=0; ; i++) {
			if(printTreeLevel(tLevel, i) == fnt) {
				printf("\n");
				printTreeLevel(tLevel, i+1);
				printf("\n");
				printTreeLevel(tLevel, i+2);
				break;
			}
			printf("\n");
		}
	}
}

// Funciones para imprimir en archivo HTML.
void printSymbolTableToHTML(FILE *htmlFile) {
	int i;
	for(i=0; i<stID; i++) {
		fprintf(htmlFile, "<tr><td>%s</td><td>%s</td></tr>", stToken[i], stValue[i]);
	}
}

int printTreeLevelToHTML(int n, int i, FILE *htmlFile) {
	int j;
	int printed_no_terminals = 0;
	for(j=0; j<treeLevel[n].cant_tokens; j++) {
		if(treeLevel[n].token[j].no_terminal) {
			printed_no_terminals++;
			if(i>0) {
				if(i == 1) { // Resalta los símbolso que se agregaron en reemplazo del no terminal encontrado.
					fprintf(htmlFile, "<i>");
					printed_no_terminals += printTreeLevelToHTML(treeLevel[n].token[j].level_ref, i-1, htmlFile);
					fprintf(htmlFile, "</i>");
				}
				else {
					printed_no_terminals += printTreeLevelToHTML(treeLevel[n].token[j].level_ref, i-1, htmlFile);
				}
			}
			else {
				// Imprime los no terminales entre < >
				fprintf(htmlFile, "<b>&lt;%s&gt;</b> ", treeLevel[n].token[j].name);
			}
		}
		else {
			fprintf(htmlFile, "%s ", treeLevel[n].token[j].name);
		}
	}
	return printed_no_terminals;
}

void printTreeToHTML(FILE *htmlFile) {
	if(found_errors > 0) {
		printf("No se puede imprimir el árbol sintáctico debido a que se encontraron errores.\n");
	}
	else {
		int fnt = makeTree(tLevel);
		int i = 0;
		fprintf(htmlFile, "<ol>");
		for(i=0; ; i++) {
			fprintf(htmlFile, "<li>");
			if(printTreeLevelToHTML(tLevel, i, htmlFile) == fnt) {
				fprintf(htmlFile, "</li><li>");
				printTreeLevelToHTML(tLevel, i+1, htmlFile);
				fprintf(htmlFile, "</li></ol>");
				fprintf(htmlFile, "<h3>Cadena analizada</h3>");
				fprintf(htmlFile, "<p>");
				printTreeLevelToHTML(tLevel, i+2, htmlFile);
				fprintf(htmlFile, "</p>");
				break;
			}
			fprintf(htmlFile, "</li>");
			printf("\n");
		}
	}
}