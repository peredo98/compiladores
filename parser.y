

%{
	#include "symtab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	extern FILE *yyin;
	extern FILE *yyout;
	extern int lineno;
	extern int yylex();
	void yyerror();
%}
 
/* token definition */
%token BOOL BOOLVAL INT CHAR FLOAT IF ELSE WHILE FOR VOID STRUCT RETURN
%token OPAR OPREL NOTOP INCR
%token LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE SEMI COMMA ASSIGN
%token ID LETRA DIGITO REAL STRING 
%token PRINT PRINTNL READ
 
%start programa
 
/* expresion priorities and rules */
 
%%
 
programa: statements ;
 
declaraciones: declaraciones declaracion | declaracion;
 
declaracion: tipo nombres SEMI | tipo assigment | tipo variable LPAREN args RPAREN cola ;

args: args COMMA tipo variable | tipo variable | /* empty */ ; 
 
tipo: INT | CHAR | BOOL | FLOAT | VOID ;
 
nombres: variable | nombres COMMA variable;
 
variable: ID |
    ID array
;

array: array LBRACK DIGITO RBRACK | LBRACK DIGITO RBRACK ;
 
statements: statements statement | statement;
 
statement:
	if_statement | for_statement | while_statement | assigment | RETURN SEMI | RETURN expresion SEMI | function_call | declaraciones | struct_ | print | print_ln | read
;

print: PRINT LPAREN STRING RPAREN SEMI;

print_ln: PRINTNL LPAREN STRING RPAREN SEMI;

read: READ LPAREN RPAREN SEMI;
 
if_statement: IF LPAREN expresion RPAREN cola else_if else_ ;
 
else_if: 
	else_if ELSE IF LPAREN expresion RPAREN cola |
	ELSE IF LPAREN expresion RPAREN cola  |
	/* empty */
; 
else_: ELSE cola | /* empty */ ; 
 
for_statement: FOR LPAREN declaracion expresion SEMI expresion RPAREN cola ;
 
while_statement: WHILE LPAREN expresion RPAREN cola ;

function_call: variable LPAREN expresiones RPAREN SEMI ;

struct_: STRUCT ID cola ;
 
cola: statement SEMI | LBRACE statements RBRACE ;

expresiones: expresiones COMMA expresion | expresion | /* empty */ ; 
 
expresion:
    expresion OPAR expresion |
    expresion OPREL expresion |
    expresion INCR |
    NOTOP expresion |
    LPAREN expresion RPAREN |
    variable |
    constant | 
	function_call
;
 
constant: LETRA | DIGITO | REAL | STRING | BOOLVAL ;
 
assigment: variable ASSIGN expresion SEMI | variable INCR SEMI; 
 
%%
 
void yyerror ()
{
  fprintf(stderr, "Syntax error at line %d\n", lineno);
  exit(1);
}
 
int main (int argc, char *argv[]){
 
	// initialize symbol table
	init_hash_table();
 
	// parsing
	int flag;
	yyin = fopen(argv[1], "r");
	flag = yyparse();
	fclose(yyin);
 
	// symbol table dump
	yyout = fopen("symtab_dump.out", "w");
	symtab_dump(yyout);
	fclose(yyout);	
 
	return flag;
}