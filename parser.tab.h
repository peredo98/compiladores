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
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     IF = 262,
     ELSE = 263,
     WHILE = 264,
     FOR = 265,
     VOID = 266,
     RETURN = 267,
     OPAR = 268,
     OPREL = 269,
     NOTOP = 270,
     INCR = 271,
     LPAREN = 272,
     RPAREN = 273,
     LBRACK = 274,
     RBRACK = 275,
     LBRACE = 276,
     RBRACE = 277,
     SEMI = 278,
     COMMA = 279,
     ASSIGN = 280,
     ID = 281,
     LETRA = 282,
     DIGITO = 283,
     REAL = 284,
     STRING = 285
   };
#endif
/* Tokens.  */
#define BOOL 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define IF 262
#define ELSE 263
#define WHILE 264
#define FOR 265
#define VOID 266
#define RETURN 267
#define OPAR 268
#define OPREL 269
#define NOTOP 270
#define INCR 271
#define LPAREN 272
#define RPAREN 273
#define LBRACK 274
#define RBRACK 275
#define LBRACE 276
#define RBRACE 277
#define SEMI 278
#define COMMA 279
#define ASSIGN 280
#define ID 281
#define LETRA 282
#define DIGITO 283
#define REAL 284
#define STRING 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

