/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BOOL = 258,
     BOOLVAL = 259,
     INT = 260,
     CHAR = 261,
     FLOAT = 262,
     IF = 263,
     ELSE = 264,
     WHILE = 265,
     FOR = 266,
     VOID = 267,
     STRUCT = 268,
     RETURN = 269,
     OPAR = 270,
     OPREL = 271,
     NOTOP = 272,
     INCR = 273,
     LPAREN = 274,
     RPAREN = 275,
     LBRACK = 276,
     RBRACK = 277,
     LBRACE = 278,
     RBRACE = 279,
     SEMI = 280,
     COMMA = 281,
     ASSIGN = 282,
     ID = 283,
     LETRA = 284,
     DIGITO = 285,
     REAL = 286,
     STRING = 287,
     PRINT = 288,
     PRINTNL = 289,
     READ = 290
   };
#endif
/* Tokens.  */
#define BOOL 258
#define BOOLVAL 259
#define INT 260
#define CHAR 261
#define FLOAT 262
#define IF 263
#define ELSE 264
#define WHILE 265
#define FOR 266
#define VOID 267
#define STRUCT 268
#define RETURN 269
#define OPAR 270
#define OPREL 271
#define NOTOP 272
#define INCR 273
#define LPAREN 274
#define RPAREN 275
#define LBRACK 276
#define RBRACK 277
#define LBRACE 278
#define RBRACE 279
#define SEMI 280
#define COMMA 281
#define ASSIGN 282
#define ID 283
#define LETRA 284
#define DIGITO 285
#define REAL 286
#define STRING 287
#define PRINT 288
#define PRINTNL 289
#define READ 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

