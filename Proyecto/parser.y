%defines 
%{
	#pragma warning(disable: 4996)
	extern int yylex();
	//extern void yyerror(char *texto);

%}
%token  LITERAL INCLUDE DEFINE
%token LEFT_BRACKET RIGHT_BRACKET COMMA LEFT_PARENTHESIS RIGHT_PARENTHESIS RIGHT_SBRACKET LEFT_SBRACKET SEMICOLON COLON EXCLAMATION PRIME INTERROGATION UP_ARROW DOT
%token BIT_AND BIT_OR
%token COMMENT 
%token PLUS MINUS DIV MOD MUL 
%token  EQU LESS GREATER 
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF INTEGER
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%%


primary_expression
	: IDENTIFIER {printf("Entro 1\n");}
	| CONSTANT {printf("Entro 1\n");}
	| COMMENT {printf("Entro 1\n");}
	| LEFT_PARENTHESIS expression RIGHT_PARENTHESIS {printf("Entro 1\n");}
	| INTEGER {printf("Entro 1\n");}
	;

postfix_expression
	: primary_expression {printf("Entro 1\n");}
	| postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET {printf("Entro 1\n");}
	| postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("Entro 1\n");}
	| postfix_expression LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS {printf("Entro 1\n");}
	| postfix_expression DOT IDENTIFIER {printf("Entro 1\n");}
	| postfix_expression PTR_OP IDENTIFIER {printf("Entro 1\n");}
	| postfix_expression INC_OP {printf("Entro 1\n");}
	| postfix_expression DEC_OP {printf("Entro 1\n");}
	;



argument_expression_list
	: assignment_expression {printf("Entro 1\n");}
	| argument_expression_list COMMA assignment_expression {printf("Entro 1\n");}
	;

unary_expression
	: postfix_expression {printf("Entro 1\n");}
	| INC_OP unary_expression {printf("Entro 1\n");}
	| DEC_OP unary_expression {printf("Entro 1\n");}
	| unary_operator cast_expression {printf("Entro 1\n");}
	| SIZEOF unary_expression {printf("Entro 1\n");}
	| SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS {printf("Entro 1\n");}
	;

unary_operator
	: BIT_AND {printf("Entro 1\n");} 
	| MUL {printf("Entro 1\n");}
	| PLUS {printf("Entro 1\n");}
	| MINUS {printf("Entro 1\n");}
	| PRIME {printf("Entro 1\n");}
	| EXCLAMATION {printf("Entro 1\n");}
	;

cast_expression
	: unary_expression {printf("Entro 1\n");}
	| LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression {printf("Entro 1\n");}
	;

multiplicative_expression
	: cast_expression {printf("Entro 1\n");}
	| multiplicative_expression MUL cast_expression {printf("Entro 1\n");}
	| multiplicative_expression DIV cast_expression {printf("Entro 1\n");}
	| multiplicative_expression MOD cast_expression {printf("Entro 1\n");}
	;

additive_expression
	: multiplicative_expression {printf("Entro 1\n");}
	| additive_expression PLUS multiplicative_expression {printf("Entro 1\n");}
	| additive_expression MINUS multiplicative_expression {printf("Entro 1\n");}
	;

shift_expression
	: additive_expression {printf("Entro 1\n");}
	| shift_expression LEFT_OP additive_expression {printf("Entro 1\n");}
	| shift_expression RIGHT_OP additive_expression {printf("Entro 1\n");}
	;

relational_expression
	: shift_expression {printf("Entro 1\n");}
	| relational_expression LESS shift_expression {printf("Entro 1\n");}
	| relational_expression GREATER shift_expression {printf("Entro 1\n");}
	| relational_expression LE_OP shift_expression {printf("Entro 1\n");}
	| relational_expression GE_OP shift_expression {printf("Entro 1\n");}
	;

equality_expression
	: relational_expression {printf("Entro 1\n");}
	| equality_expression EQ_OP relational_expression {printf("Entro 1\n");}
	| equality_expression NE_OP relational_expression {printf("Entro 1\n");}
	;

and_expression
	: equality_expression {printf("Entro 1\n");}
	| and_expression BIT_AND equality_expression {printf("Entro 1\n");}
	;

exclusive_or_expression
	: and_expression {printf("Entro 1\n");}
	| exclusive_or_expression UP_ARROW and_expression {printf("Entro 1\n");}
	;

inclusive_or_expression
	: exclusive_or_expression {printf("Entro 1\n");}
	| inclusive_or_expression BIT_OR exclusive_or_expression {printf("Entro 1\n");}
	;

logical_and_expression
	: inclusive_or_expression {printf("Entro 1\n");}
	| logical_and_expression AND_OP inclusive_or_expression {printf("Entro 1\n");}
	;

logical_or_expression
	: logical_and_expression {printf("Entro 1\n");}
	| logical_or_expression OR_OP logical_and_expression {printf("Entro 1\n");}
	;

conditional_expression
	: logical_or_expression {printf("Entro 1\n");}
	| logical_or_expression INTERROGATION expression COLON conditional_expression {printf("Entro 1\n");}
	;

assignment_expression
	: conditional_expression {printf("Entro 1\n");}
	| unary_expression assignment_operator assignment_expression {printf("Entro 1\n");}
	;

assignment_operator
	: EQU {printf("Entro 1\n");}
	| MUL_ASSIGN {printf("Entro 1\n");}
	| DIV_ASSIGN {printf("Entro 1\n");}
	| MOD_ASSIGN {printf("Entro 1\n");}
	| ADD_ASSIGN {printf("Entro 1\n");}
	| SUB_ASSIGN {printf("Entro 1\n");}
	| LEFT_ASSIGN {printf("Entro 1\n");}
	| RIGHT_ASSIGN {printf("Entro 1\n");}
	| AND_ASSIGN {printf("Entro 1\n");}
	| XOR_ASSIGN {printf("Entro 1\n");}
	| OR_ASSIGN {printf("Entro 1\n");}
	;

expression
	: assignment_expression {printf("Entro 1\n");}
	| expression COMMA assignment_expression {printf("Entro 1\n");}
	;

constant_expression
	: conditional_expression {printf("Entro 1\n");}
	;

declaration
	: declaration_specifiers SEMICOLON {printf("Entro 1\n");}
	| declaration_specifiers init_declarator_list SEMICOLON {printf("Entro 1\n");}
	;

declaration_specifiers
	: storage_class_specifier {printf("Entro 1\n");}
	| storage_class_specifier declaration_specifiers {printf("Entro 1\n");}
	| type_specifier {printf("Entro 1\n");}
	| type_specifier declaration_specifiers {printf("Entro 1\n");}
	| type_qualifier {printf("Entro 1\n");}
	| type_qualifier declaration_specifiers {printf("Entro 1\n");}
	;

init_declarator_list
	: init_declarator {printf("Entro 1\n");}
	| init_declarator_list COMMA init_declarator {printf("Entro 1\n");}
	;

init_declarator
	: declarator {printf("Entro 1\n");}
	| declarator EQU initializer {printf("Entro 1\n");}
	;

storage_class_specifier
	: TYPEDEF {printf("Entro 1\n");}
	| EXTERN {printf("Entro 1\n");}
	| STATIC {printf("Entro 1\n");}
	| AUTO {printf("Entro 1\n");}
	| REGISTER {printf("Entro 1\n");}
	;

type_specifier
	: VOID {printf("Entro 1\n");}
	| CHAR {printf("Entro 1\n");}
	| SHORT {printf("Entro 1\n");}
	| INT {printf("Entro 1\n");}
	| LONG {printf("Entro 1\n");}
	| FLOAT {printf("Entro 1\n");}
	| DOUBLE {printf("Entro 1\n");}
	| SIGNED {printf("Entro 1\n");}
	| UNSIGNED {printf("Entro 1\n");}
	| struct_or_union_specifier {printf("Entro 1\n");}
	| enum_specifier {printf("Entro 1\n");}
	| TYPE_NAME {printf("Entro 1\n");}
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET {printf("Entro 1\n");}
	| struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET {printf("Entro 1\n");}
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT {printf("Entro 1\n");}
	| UNION {printf("Entro 1\n");}
	;

struct_declaration_list
	: struct_declaration {printf("Entro 1\n");}
	| struct_declaration_list struct_declaration {printf("Entro 1\n");}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMICOLON {printf("Entro 1\n");}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {printf("Entro 1\n");}
	| type_specifier {printf("Entro 1\n");}
	| type_qualifier specifier_qualifier_list {printf("Entro 1\n");}
	| type_qualifier {printf("Entro 1\n");}
	;

struct_declarator_list
	: struct_declarator {printf("Entro 1\n");}
	| struct_declarator_list COMMA struct_declarator {printf("Entro 1\n");}
	;

struct_declarator
	: declarator{printf("Entro 1\n");}
	| COLON constant_expression {printf("Entro 1\n");}
	| declarator COLON constant_expression {printf("Entro 1\n");}
	;

enum_specifier
	: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET {printf("Entro 1\n");}
	| ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET {printf("Entro 1\n");}
	| ENUM IDENTIFIER {printf("Entro 1\n");}
	;

enumerator_list
	: enumerator {printf("Entro 1\n");}
	| enumerator_list COMMA enumerator {printf("Entro 1\n");}
	;

enumerator
	: IDENTIFIER {printf("Entro 1\n");}
	| IDENTIFIER EQU constant_expression {printf("Entro 1\n");}
	;

type_qualifier
	: CONST {printf("Entro 1\n");}
	| VOLATILE {printf("Entro 1\n");}
	;

declarator
	: pointer direct_declarator {printf("Entro 1\n");}
	| direct_declarator {printf("Entro 1\n");}
	;

direct_declarator
	: IDENTIFIER {printf("Entro 1\n");}
	| LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS {printf("Entro 1\n");}
	| direct_declarator RIGHT_SBRACKET constant_expression LEFT_SBRACKET {printf("Entro 1\n");}
	| direct_declarator RIGHT_SBRACKET LEFT_SBRACKET {printf("Entro 1\n");}
	| direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("Entro 1\n");}
	| direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS {printf("Entro 1\n");}
	| direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("Entro 1\n");}
	;

pointer
	: MUL {printf("Entro 1\n");}
	| MUL type_qualifier_list {printf("Entro 1\n");}
	| MUL pointer {printf("Entro 1\n");}
	| MUL type_qualifier_list pointer {printf("Entro 1\n");}
	;

type_qualifier_list
	: type_qualifier {printf("Entro 1\n");}
	| type_qualifier_list type_qualifier {printf("Entro 1\n");}
	;


parameter_type_list
	: parameter_list {printf("Entro 1\n");}
	| parameter_list COMMA ELLIPSIS {printf("Entro 1\n");}
	;

parameter_list
	: parameter_declaration {printf("Entro 1\n");}
	| parameter_list COMMA parameter_declaration {printf("Entro 1\n");}
	;

parameter_declaration
	: declaration_specifiers declarator {printf("Entro 1\n");}
	| declaration_specifiers abstract_declarator {printf("Entro 1\n");}
	| declaration_specifiers {printf("Entro 1\n");}
	;

identifier_list
	: IDENTIFIER {printf("Entro 1\n");}
	| identifier_list COMMA IDENTIFIER {printf("Entro 1\n");}
	;

type_name
	: specifier_qualifier_list {printf("Entro 1\n");}
	| specifier_qualifier_list abstract_declarator {printf("Entro 1\n");}
	;

abstract_declarator
	: pointer {printf("Entro 1\n");}
	| direct_abstract_declarator {printf("Entro 1\n");}
	| pointer direct_abstract_declarator {printf("Entro 1\n");}
	;

direct_abstract_declarator
	: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS {printf("Entro 1\n");}
	| RIGHT_SBRACKET LEFT_SBRACKET {printf("Entro 1\n");}
	| RIGHT_SBRACKET constant_expression LEFT_SBRACKET {printf("Entro 1\n");}
	| direct_abstract_declarator RIGHT_SBRACKET LEFT_SBRACKET {printf("Entro 1\n");}
	| direct_abstract_declarator RIGHT_SBRACKET constant_expression LEFT_SBRACKET {printf("Entro 1\n");}
	| LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("Entro 1\n");}
	| LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("Entro 1\n");}
	| direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("Entro 1\n");}
	| direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("Entro 1\n");}
	;

initializer
	: assignment_expression {printf("Entro 1\n");}
	| LEFT_BRACKET initializer_list RIGHT_BRACKET {printf("Entro 1\n");}
	| LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET {printf("Entro 1\n");}
	;

initializer_list
	: initializer {printf("Entro 1\n");}
	| initializer_list COMMA initializer {printf("Entro 1\n");}
	;

statement
	: labeled_statement {printf("Entro 1\n");}
	| compound_statement {printf("Entro 1\n");}
	| expression_statement {printf("Entro 1\n");}
	| selection_statement {printf("Entro 1\n");}
	| iteration_statement {printf("Entro 1\n");}
	| jump_statement {printf("Entro 1\n");}
	;

labeled_statement
	: IDENTIFIER COLON statement {printf("Entro 1\n");}
	| CASE constant_expression COLON statement {printf("Entro 1\n");}
	| DEFAULT COLON statement {printf("Entro 1\n");}
	;

compound_statement
	: LEFT_BRACKET RIGHT_BRACKET {printf("Entro 1\n");}
	| LEFT_BRACKET statement_list RIGHT_BRACKET {printf("Entro 1\n");}
	| LEFT_BRACKET declaration_list RIGHT_BRACKET {printf("Entro 1\n");}
	| LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET {printf("Entro 1\n");}
	;

declaration_list
	: declaration {printf("Entro 1\n");}
	| declaration_list declaration {printf("Entro 1\n");}
	;

statement_list
	: statement {printf("Entro 1\n");}
	| statement_list statement {printf("Entro 1\n");}
	;

expression_statement
	: SEMICOLON {printf("Entro 1\n");}
	| expression SEMICOLON {printf("Entro 1\n");}
	;

selection_statement
	: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("Entro 1\n");}
	| IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement {printf("Entro 1\n");}
	| SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("Entro 1\n");}
	;

iteration_statement
	: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("Entro 1\n");}
	| DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON {printf("Entro 1\n");}
	| FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement {printf("Entro 1\n");}
	| FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement {printf("Entro 1\n");}
	;

jump_statement
	: GOTO IDENTIFIER SEMICOLON {printf("Entro 1\n");}
	| CONTINUE SEMICOLON {printf("Entro 1\n");}
	| BREAK SEMICOLON {printf("Entro 1\n");}
	| RETURN SEMICOLON {printf("Entro 1\n");}
	| RETURN expression SEMICOLON {printf("Entro 1\n");}
	;

translation_unit
	: external_declaration {printf("Entre a external_declaration\n");} 
	| translation_unit external_declaration  {printf("Entre a ciclo translation_unit\n");}
	| /* empty */{printf("Archivo Vacío\n");}

	;

external_declaration
	: function_definition{printf("Entro 1\n");}
	| declaration {printf("Entro 1\n");}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {printf("Entro 1\n");}
	| declaration_specifiers declarator compound_statement {printf("Entro 1\n");}
	| declarator declaration_list compound_statement {printf("Entro 1\n");}
	| declarator compound_statement {printf("Entro 1\n");}
	;

%%

#include<stdio.h>
extern linea;
/*extern void yyerror(char *texto){
 	if(strcmp(texto,"syntax error"))
  		printf(" Syntax Error in Line : %d : %s\n",linea,texto);
      
};*/