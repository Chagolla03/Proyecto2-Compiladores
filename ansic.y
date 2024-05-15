//nuevo agregado
%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *s);
extern int yylex();
extern FILE* yyin;
%}


%union {
    struct {
		int ival;
		double dval;
		int valtype;
	};
	char *name;
	char *sval;
	char cval;
}
%token <name> IDENTIFIER CONSTANT <sval> STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

//nuevo agregado
%nonassoc NOELSE
%nonassoc ELSE

%start translation_unit
%%

primary_expression
	: IDENTIFIER			{printf("primary_expression: IDENTIFIER\n");}
	| CONSTANT				{printf("primary_expression: CONSTANT\n");}
	| STRING_LITERAL		{printf("primary_expression: STRING_LITERAL\n");}
	| '(' expression ')'	{printf("primary_expression: '(' expression ')'\n");}
	;

postfix_expression
	: primary_expression										{printf("postfix_expression: primary_expression\n");}
	| postfix_expression '[' expression ']'						{printf("postfix_expression: postfix_expression '[' expression ']'	\n");}
	| postfix_expression '(' ')'								{printf("postfix_expression: postfix_expression '(' ')'\n");}
	| postfix_expression '(' argument_expression_list ')'		{printf("postfix_expression: postfix_expression '(' argument_expression_list ')'\n");}
	| postfix_expression '.' IDENTIFIER							{printf("postfix_expression: postfix_expression '.' IDENTIFIER\n");}
	| postfix_expression PTR_OP IDENTIFIER						{printf("postfix_expression: postfix_expression PTR_OP IDENTIFIER\n");}
	| postfix_expression INC_OP									{printf("postfix_expression: postfix_expression INC_OP	\n");}
	| postfix_expression DEC_OP									{printf("postfix_expression: postfix_expression DEC_OP\n");}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'						{printf("declaration: declaration_specifiers ';'\n");}
	| declaration_specifiers init_declarator_list ';'	{printf("declaration: declaration_specifiers init_declarator_list ';'\n");}
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER										{printf("direct_declarator: IDENTIFIER\n");}
	| '(' declarator ')'								{printf("direct_declarator: '(' declarator ')'\n");}
	| direct_declarator '[' constant_expression ']'		{printf("direct_declarator: direct_declarator '[' constant_expression ']'\n");}
	| direct_declarator '[' ']'							{printf("direct_declarator: direct_declarator '[' ']'\n");}
	| direct_declarator '(' parameter_type_list ')'		{printf("direct_declarator: direct_declarator '(' parameter_type_list ')'\n");}
	| direct_declarator '(' identifier_list ')'			{printf("direct_declarator: direct_declarator '(' identifier_list ')'\n");}
	| direct_declarator '(' ')'							{printf("direct_declarator: direct_declarator '(' ')'\n");}
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

//nuevo agregado 
selection_statement
	: IF '(' expression ')' statement %prec NOELSE		{printf("selection_statement: IF '(' expression ')' statement\n");}
	| IF '(' expression ')' statement ELSE statement	{printf("selection_statement: IF '(' expression ')' statement ELSE statement\n");}
	| SWITCH '(' expression ')' statement				{printf("selection_statement: SWITCH '(' expression ')' statement\n");}
	;

iteration_statement
	: WHILE '(' expression ')' statement											{printf("iteration_statement: WHILE '(' expression ')' statement\n");}
	| DO statement WHILE '(' expression ')' ';'										{printf("iteration_statement: DO statement WHILE '(' expression ')' ';'\n");}
	| FOR '(' expression_statement expression_statement ')' statement				{printf("iteration_statement: FOR '(' expression_statement expression_statement ')' statement\n");}
	| FOR '(' expression_statement expression_statement expression ')' statement	{printf("iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement\n");}
	;

jump_statement
	: GOTO IDENTIFIER ';'		{printf("jump_statement: GOTO IDENTIFIER ';'\n");}
	| CONTINUE ';'				{printf("jump_statement: CONTINUE ';'\n");}
	| BREAK ';'					{printf("jump_statement: BREAK ';'\n");}
	| RETURN ';'				{printf("jump_statement: RETURN ';'\n");}
	| RETURN expression ';'		{printf("jump_statement: RETURN expression ';'\n");}
	;

translation_unit
	: external_declaration						{printf("translation_unit: external_declaration\n");}
	| translation_unit external_declaration		{printf("translation_unit: translation_unit external_declaration\n");}
	;

external_declaration
	: function_definition      {printf("external_declaration: function_definition\n");}
	| declaration			   {printf("external_declaration: declaration\n");}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement     {printf("function_definition: declaration_specifiers declarator declaration_list compound_statement\n");}
	| declaration_specifiers declarator compound_statement						{printf("function_definition: declaration_specifiers declarator compound_statement\n");}
	| declarator declaration_list compound_statement							{printf("function_definition: declarator declaration_list compound_statement\n");}
	| declarator compound_statement												{printf("function_definition: declarator compound_statement\n");}
	;

%%
#include <stdio.h>

extern char yytext[];
extern int column;
extern int lineno;

void yyerror(const char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", lineno, "^", column, s);
}

int main (int argc, char *argv[]){
	int c;
	if(argc<2){
        printf("Analizador sintactico de ANSI C 1985\n");
		printf("Uso %s archivo\n", argv[0]);
		exit(0);
	}
	yyin = fopen(argv[1], "rt");
	yyparse();
    printf("Analisis sintactico exitoso!\n");
	return 0;
}