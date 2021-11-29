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
     STRUCT = 267,
     RETURN = 268,
     OPAR = 269,
     OPREL = 270,
     NOTOP = 271,
     INCR = 272,
     LPAREN = 273,
     RPAREN = 274,
     LBRACK = 275,
     RBRACK = 276,
     LBRACE = 277,
     RBRACE = 278,
     SEMI = 279,
     COMMA = 280,
     ASSIGN = 281,
     ID = 282,
     LETRA = 283,
     DIGITO = 284,
     REAL = 285,
     STRING = 286,
     PRINT = 287,
     PRINTNL = 288,
     READ = 289
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
#define STRUCT 267
#define RETURN 268
#define OPAR 269
#define OPREL 270
#define NOTOP 271
#define INCR 272
#define LPAREN 273
#define RPAREN 274
#define LBRACK 275
#define RBRACK 276
#define LBRACE 277
#define RBRACE 278
#define SEMI 279
#define COMMA 280
#define ASSIGN 281
#define ID 282
#define LETRA 283
#define DIGITO 284
#define REAL 285
#define STRING 286
#define PRINT 287
#define PRINTNL 288
#define READ 289




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

