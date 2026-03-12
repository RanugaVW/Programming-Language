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
    TO = 260,                      /* TO  */
    VAR = 261,                     /* VAR  */
    IDENTIFIER = 262,              /* IDENTIFIER  */
    POOL = 263,                    /* POOL  */
    IF = 264,                      /* IF  */
    READ = 265,                    /* READ  */
    REPEAT = 266,                  /* REPEAT  */
    ELSE = 267,                    /* ELSE  */
    UNTIL = 268,                   /* UNTIL  */
    SWAP = 269,                    /* SWAP  */
    FOR = 270,                     /* FOR  */
    THEN = 271,                    /* THEN  */
    DOTDOT = 272,                  /* DOTDOT  */
    OF = 273,                      /* OF  */
    EXITTOK = 274,                 /* EXITTOK  */
    TRUETOK = 275,                 /* TRUETOK  */
    MOD = 276,                     /* MOD  */
    GT = 277,                      /* GT  */
    CASE = 278,                    /* CASE  */
    EQ = 279,                      /* EQ  */
    WHILE = 280,                   /* WHILE  */
    OUTPUT = 281,                  /* OUTPUT  */
    GTE = 282,                     /* GTE  */
    NOT = 283,                     /* NOT  */
    DO = 284,                      /* DO  */
    BEGINX = 285,                  /* BEGINX  */
    BOOLEAN = 286,                 /* BOOLEAN  */
    AND = 287,                     /* AND  */
    INTEGER_NUM = 288,             /* INTEGER_NUM  */
    INTEGER = 289,                 /* INTEGER  */
    EXP = 290,                     /* EXP  */
    LTE = 291,                     /* LTE  */
    LOOP = 292,                    /* LOOP  */
    FALSETOK = 293,                /* FALSETOK  */
    OR = 294,                      /* OR  */
    LT = 295,                      /* LT  */
    OTHERWISE = 296,               /* OTHERWISE  */
    EOFTOK = 297,                  /* EOFTOK  */
    ASSIGNMENT = 298,              /* ASSIGNMENT  */
    PROGRAM = 299,                 /* PROGRAM  */
    DOWNTO = 300                   /* DOWNTO  */
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
#define TO 260
#define VAR 261
#define IDENTIFIER 262
#define POOL 263
#define IF 264
#define READ 265
#define REPEAT 266
#define ELSE 267
#define UNTIL 268
#define SWAP 269
#define FOR 270
#define THEN 271
#define DOTDOT 272
#define OF 273
#define EXITTOK 274
#define TRUETOK 275
#define MOD 276
#define GT 277
#define CASE 278
#define EQ 279
#define WHILE 280
#define OUTPUT 281
#define GTE 282
#define NOT 283
#define DO 284
#define BEGINX 285
#define BOOLEAN 286
#define AND 287
#define INTEGER_NUM 288
#define INTEGER 289
#define EXP 290
#define LTE 291
#define LOOP 292
#define FALSETOK 293
#define OR 294
#define LT 295
#define OTHERWISE 296
#define EOFTOK 297
#define ASSIGNMENT 298
#define PROGRAM 299
#define DOWNTO 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "code.y"

   TOKEN_INFO info;
   DLIST dlist;

#line 162 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
