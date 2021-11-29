%option noyywrap
 
%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "symtab.h"
	#include "parser.tab.h"
	extern FILE *yyin;
	extern FILE *yyout;
 
	int lineno = 1;
	void ret_print(char *token_type);
	void yyerror();
%}
 
%x ML_COMMENT
 
letter 		[a-zA-Z]
digit 		[0-9]
alnum 		{letter}|{digit}
all		[ -~]
 
ID 			{letter}+{alnum}*
DIGITO		"0"|[0-9]{digit}*
REAL		"0"|{digit}*"."{digit}+
LETRA		(\'{all}\')|(\'\\[nftrbv]\')
STRING		\"{all}*\"
 
%%
 
"//".*					{ printf("Eat up comment at line %d\n", lineno); } 
 
"/*"					{ printf("Eat up comment from line %d ", lineno); BEGIN(ML_COMMENT); }
<ML_COMMENT>"*/" 		{ printf("to line %d\n", lineno); BEGIN(INITIAL); }
<ML_COMMENT>[^*\n]+		
<ML_COMMENT>"*"			
<ML_COMMENT>"\n"		{ lineno += 1; }
 
 
"colon"       		{ return CHAR; }
"nezahualcoyotl"	{ return INT; }
"maya"				{ return FLOAT; }
"malinche"			{ return BOOL; }
"chance"			{ return IF; }
"chanceno"			{ return ELSE; }
"yolo"				{ return WHILE; }
"pa"				{ return FOR; }
"rifate"			{ return VOID; }
"traite"			{ return RETURN; }
 
 
"+"|"-"|"*"|"/"								{ return OPAR; }
"++"|"--"									{ return INCR; }
"!"											{ return NOTOP; }
">"|"<"|">="|"<="|"||"|"&&"|"=="|"!="		{ return OPREL; }
 
 
"("				{ return LPAREN; }
")"				{ return RPAREN; }
"]"				{ return LBRACK; }
"["				{ return RBRACK; }
"{"				{ return LBRACE; }
"}"				{ return RBRACE; }
";"				{ return SEMI; }
","				{ return COMMA; }
"="				{ return ASSIGN; }
 
 
{ID} 			{
					// insert identifier into symbol table
					insert(yytext, strlen(yytext), UNDEF, lineno);
					return ID;
				}
{DIGITO} 		{ return DIGITO; }
{REAL} 			{ return REAL; }
{LETRA} 		{ return LETRA; }
{STRING} 		{ return STRING; }
 
 
"\n"			{ lineno += 1; }
[ \t\r\f]+			/* eat up whitespace */
 
.				{ yyerror("Unrecognized character"); }
 
%%