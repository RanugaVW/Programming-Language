/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NEQ = 258,                     /* NEQ  */
    END = 259,                     /* END  */
    VAR = 260,                     /* VAR  */
    IDENTIFIER = 261,              /* IDENTIFIER  */
    IF = 262,                      /* IF  */
    READ = 263,                    /* READ  */
    ELSE = 264,                    /* ELSE  */
    THEN = 265,                    /* THEN  */
    TRUETOK = 266,                 /* TRUETOK  */
    MOD = 267,                     /* MOD  */
    GT = 268,                      /* GT  */
    EQ = 269,                      /* EQ  */
    WHILE = 270,                   /* WHILE  */
    OUTPUT = 271,                  /* OUTPUT  */
    GTE = 272,                     /* GTE  */
    NOT = 273,                     /* NOT  */
    DO = 274,                      /* DO  */
    BEGINX = 275,                  /* BEGINX  */
    BOOLEAN = 276,                 /* BOOLEAN  */
    INTEGER_NUM = 277,             /* INTEGER_NUM  */
    AND = 278,                     /* AND  */
    INTEGER = 279,                 /* INTEGER  */
    EXP = 280,                     /* EXP  */
    LTE = 281,                     /* LTE  */
    FALSETOK = 282,                /* FALSETOK  */
    OR = 283,                      /* OR  */
    LT = 284,                      /* LT  */
    EOFTOK = 285,                  /* EOFTOK  */
    ASSIGNMENT = 286,              /* ASSIGNMENT  */
    PROGRAM = 287                  /* PROGRAM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NEQ 258
#define END 259
#define VAR 260
#define IDENTIFIER 261
#define IF 262
#define READ 263
#define ELSE 264
#define THEN 265
#define TRUETOK 266
#define MOD 267
#define GT 268
#define EQ 269
#define WHILE 270
#define OUTPUT 271
#define GTE 272
#define NOT 273
#define DO 274
#define BEGINX 275
#define BOOLEAN 276
#define INTEGER_NUM 277
#define AND 278
#define INTEGER 279
#define EXP 280
#define LTE 281
#define FALSETOK 282
#define OR 283
#define LT 284
#define EOFTOK 285
#define ASSIGNMENT 286
#define PROGRAM 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "code.y"

   TOKEN_INFO info;
   DLIST dlist;

#line 136 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
