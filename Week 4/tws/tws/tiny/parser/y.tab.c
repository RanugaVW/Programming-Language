/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "code.y"

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <DLists.h>
#include <Tokenizer.h>
#include <Trees.h>

extern TREENODE *root;
typedef struct {
    DNODE mynode;
    TREENODE *nodeptr;
} T_NODE;


#line 87 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 235 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NEQ = 3,                        /* NEQ  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_TO = 5,                         /* TO  */
  YYSYMBOL_VAR = 6,                        /* VAR  */
  YYSYMBOL_IDENTIFIER = 7,                 /* IDENTIFIER  */
  YYSYMBOL_POOL = 8,                       /* POOL  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_READ = 10,                      /* READ  */
  YYSYMBOL_REPEAT = 11,                    /* REPEAT  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_UNTIL = 13,                     /* UNTIL  */
  YYSYMBOL_SWAP = 14,                      /* SWAP  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_THEN = 16,                      /* THEN  */
  YYSYMBOL_DOTDOT = 17,                    /* DOTDOT  */
  YYSYMBOL_OF = 18,                        /* OF  */
  YYSYMBOL_EXITTOK = 19,                   /* EXITTOK  */
  YYSYMBOL_TRUETOK = 20,                   /* TRUETOK  */
  YYSYMBOL_MOD = 21,                       /* MOD  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_EQ = 24,                        /* EQ  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_OUTPUT = 26,                    /* OUTPUT  */
  YYSYMBOL_GTE = 27,                       /* GTE  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_DO = 29,                        /* DO  */
  YYSYMBOL_BEGINX = 30,                    /* BEGINX  */
  YYSYMBOL_BOOLEAN = 31,                   /* BOOLEAN  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_INTEGER_NUM = 33,               /* INTEGER_NUM  */
  YYSYMBOL_INTEGER = 34,                   /* INTEGER  */
  YYSYMBOL_EXP = 35,                       /* EXP  */
  YYSYMBOL_LTE = 36,                       /* LTE  */
  YYSYMBOL_LOOP = 37,                      /* LOOP  */
  YYSYMBOL_FALSETOK = 38,                  /* FALSETOK  */
  YYSYMBOL_OR = 39,                        /* OR  */
  YYSYMBOL_LT = 40,                        /* LT  */
  YYSYMBOL_OTHERWISE = 41,                 /* OTHERWISE  */
  YYSYMBOL_EOFTOK = 42,                    /* EOFTOK  */
  YYSYMBOL_ASSIGNMENT = 43,                /* ASSIGNMENT  */
  YYSYMBOL_PROGRAM = 44,                   /* PROGRAM  */
  YYSYMBOL_DOWNTO = 45,                    /* DOWNTO  */
  YYSYMBOL_46_ = 46,                       /* ':'  */
  YYSYMBOL_47_ = 47,                       /* '.'  */
  YYSYMBOL_48_ = 48,                       /* ';'  */
  YYSYMBOL_49_ = 49,                       /* ','  */
  YYSYMBOL_50_ = 50,                       /* '('  */
  YYSYMBOL_51_ = 51,                       /* ')'  */
  YYSYMBOL_52_ = 52,                       /* '+'  */
  YYSYMBOL_53_ = 53,                       /* '-'  */
  YYSYMBOL_54_ = 54,                       /* '*'  */
  YYSYMBOL_55_ = 55,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_Tiny = 57,                      /* Tiny  */
  YYSYMBOL_Dclns = 58,                     /* Dclns  */
  YYSYMBOL_Dclns_1 = 59,                   /* Dclns_1  */
  YYSYMBOL_Dcln = 60,                      /* Dcln  */
  YYSYMBOL_Dcln_1 = 61,                    /* Dcln_1  */
  YYSYMBOL_Type = 62,                      /* Type  */
  YYSYMBOL_Body = 63,                      /* Body  */
  YYSYMBOL_Body_1 = 64,                    /* Body_1  */
  YYSYMBOL_Statement = 65,                 /* Statement  */
  YYSYMBOL_Statement_1_1_1_1 = 66,         /* Statement_1_1_1_1  */
  YYSYMBOL_Statement_1_1_1 = 67,           /* Statement_1_1_1  */
  YYSYMBOL_Statement_1_1 = 68,             /* Statement_1_1  */
  YYSYMBOL_Statement_1 = 69,               /* Statement_1  */
  YYSYMBOL_Caseclause = 70,                /* Caseclause  */
  YYSYMBOL_Caseclause_1 = 71,              /* Caseclause_1  */
  YYSYMBOL_Caselabel = 72,                 /* Caselabel  */
  YYSYMBOL_OtherwiseClause = 73,           /* OtherwiseClause  */
  YYSYMBOL_Expression = 74,                /* Expression  */
  YYSYMBOL_Expression1 = 75,               /* Expression1  */
  YYSYMBOL_Expression2 = 76,               /* Expression2  */
  YYSYMBOL_Expression3 = 77,               /* Expression3  */
  YYSYMBOL_Expression4 = 78,               /* Expression4  */
  YYSYMBOL_Primary = 79,                   /* Primary  */
  YYSYMBOL_Name = 80                       /* Name  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  147

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      50,    51,    54,    52,    49,    53,    47,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    48,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,   137,   174,   196,   204,   221,   246,   261,
     278,   311,   346,   384,   407,   424,   463,   499,   563,   613,
     663,   741,   819,   855,   891,   924,   974,  1013,  1026,  1047,
    1070,  1087,  1110,  1127,  1153,  1170,  1182,  1199,  1224,  1239,
    1256,  1289,  1346,  1383,  1404,  1416,  1455,  1494,  1533,  1572,
    1611,  1652,  1664,  1690,  1716,  1757,  1769,  1795,  1821,  1860,
    1901,  1913,  1936,  1959,  1997,  2009,  2050,  2083,  2116,  2128,
    2161,  2194,  2227,  2241
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NEQ", "END", "TO",
  "VAR", "IDENTIFIER", "POOL", "IF", "READ", "REPEAT", "ELSE", "UNTIL",
  "SWAP", "FOR", "THEN", "DOTDOT", "OF", "EXITTOK", "TRUETOK", "MOD", "GT",
  "CASE", "EQ", "WHILE", "OUTPUT", "GTE", "NOT", "DO", "BEGINX", "BOOLEAN",
  "AND", "INTEGER_NUM", "INTEGER", "EXP", "LTE", "LOOP", "FALSETOK", "OR",
  "LT", "OTHERWISE", "EOFTOK", "ASSIGNMENT", "PROGRAM", "DOWNTO", "':'",
  "'.'", "';'", "','", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "$accept",
  "Tiny", "Dclns", "Dclns_1", "Dcln", "Dcln_1", "Type", "Body", "Body_1",
  "Statement", "Statement_1_1_1_1", "Statement_1_1_1", "Statement_1_1",
  "Statement_1", "Caseclause", "Caseclause_1", "Caselabel",
  "OtherwiseClause", "Expression", "Expression1", "Expression2",
  "Expression3", "Expression4", "Primary", "Name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-39)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -27,    16,    38,   -39,    -3,   -39,    46,    16,    24,   -39,
      19,   -39,   -24,   115,    16,    16,    25,    16,    55,   115,
      16,   -39,    55,    55,    14,   115,   -39,   -39,     3,   -10,
      26,   -39,   -39,   -39,   -39,   -39,   -39,   -39,    55,   -39,
     -39,   -39,    55,    55,    55,    58,     5,    49,   -39,   -39,
      43,   -39,   -12,   -39,    37,    64,    56,    55,    -6,   -39,
     -39,   115,    16,    55,   -39,   -39,    39,   -39,   -39,   115,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    79,    55,   115,    55,   -13,   115,   -39,
      28,   -39,   115,   -39,   -39,   -39,   -39,    83,   -18,   -18,
     -18,   -18,   -18,    49,   -18,    49,    49,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,    10,    81,   115,   -39,    48,   -39,
      17,    97,   -39,    55,   -39,   -39,   115,    55,    55,    69,
     -39,   -13,   115,    73,   -39,   -39,   -39,    80,    82,   -39,
     -39,   -39,   -39,   115,   115,   -39,   -39
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    73,     0,     1,     4,     5,     0,     3,
       0,     7,     0,    28,     0,     5,     0,     0,     0,    28,
       0,    24,     0,     0,     0,    28,    27,    12,     0,     0,
       0,     6,    11,    10,     8,     9,    66,    70,     0,    69,
      71,    67,     0,     0,     0,     0,    44,    51,    55,    60,
      64,    68,     0,    22,     0,     0,     0,     0,     0,    23,
      13,    28,     0,     0,     2,    63,     0,    61,    62,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,    43,    28,    16,
       0,    31,    28,    14,    26,    15,    72,    18,    47,    50,
      46,    48,    45,    54,    49,    52,    53,    59,    58,    56,
      57,    65,    33,    34,     0,    40,    28,    25,     0,    37,
       0,     0,    19,     0,    35,    32,    28,     0,     0,     0,
      42,    43,    28,     0,    29,    36,    17,     0,     0,    41,
      30,    38,    39,    28,    28,    20,    21
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -39,    98,   -39,   101,   -39,   106,    59,   -16,
      -8,    27,    47,    21,   -39,     0,   -39,   -39,     8,    77,
     -38,   -33,    54,   -39,    -1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     8,     9,    10,    11,    34,    26,    27,    28,
     117,    59,    53,    89,   118,   119,   120,   121,    90,    46,
      47,    48,    49,    50,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       4,    84,    91,    52,    62,    65,    12,    60,    70,    58,
      67,    68,    29,    30,    12,   127,    12,     1,    29,    54,
     115,    75,    16,     3,    29,    17,    45,    71,   116,    72,
      55,    56,    73,    63,    77,    78,    85,   103,     5,   105,
     106,    74,    92,     6,    75,    76,   107,   108,   109,   110,
      66,    61,     7,    97,    13,   128,    32,    77,    78,    33,
      29,    94,     3,   132,    57,    36,   133,    15,    29,    52,
      79,    95,   122,    64,    69,    37,    58,   123,    83,   124,
      86,    80,    87,    38,    29,    88,     3,    29,    39,    36,
      96,    29,   112,    40,   114,   126,   131,    41,   129,    37,
     130,   134,   139,    81,    82,    42,   115,    43,    44,   143,
     136,   144,    39,    31,    14,    29,   141,    40,    35,   125,
      93,    41,     3,   140,    18,    29,    19,   145,   146,    42,
      20,    29,   113,   142,    21,   137,   138,   111,    22,     0,
      23,    24,    29,    29,   135,    13,     0,    98,    99,   100,
     101,   102,    25,   104
};

static const yytype_int16 yycheck[] =
{
       1,    13,     8,    19,    14,    38,     7,     4,     3,    25,
      43,    44,    13,    14,    15,     5,    17,    44,    19,    20,
      33,    39,    46,     7,    25,    49,    18,    22,    41,    24,
      22,    23,    27,    43,    52,    53,    48,    75,     0,    77,
      78,    36,    48,    46,    39,    40,    79,    80,    81,    82,
      42,    48,     6,    69,    30,    45,    31,    52,    53,    34,
      61,    62,     7,    46,    50,    10,    49,    48,    69,    85,
      21,    63,    88,    47,    16,    20,    92,    49,    35,    51,
      43,    32,    18,    28,    85,    29,     7,    88,    33,    10,
      51,    92,    84,    38,    86,    12,    48,    42,    17,    20,
     116,     4,    33,    54,    55,    50,    33,    52,    53,    29,
     126,    29,    33,    15,     8,   116,   132,    38,    17,    92,
      61,    42,     7,   131,     9,   126,    11,   143,   144,    50,
      15,   132,    85,   133,    19,   127,   128,    83,    23,    -1,
      25,    26,   143,   144,   123,    30,    -1,    70,    71,    72,
      73,    74,    37,    76
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    44,    57,     7,    80,     0,    46,     6,    58,    59,
      60,    61,    80,    30,    63,    48,    46,    49,     9,    11,
      15,    19,    23,    25,    26,    37,    63,    64,    65,    80,
      80,    59,    31,    34,    62,    61,    10,    20,    28,    33,
      38,    42,    50,    52,    53,    74,    75,    76,    77,    78,
      79,    80,    65,    68,    80,    74,    74,    50,    65,    67,
       4,    48,    14,    43,    47,    77,    74,    77,    77,    16,
       3,    22,    24,    27,    36,    39,    40,    52,    53,    21,
      32,    54,    55,    35,    13,    48,    43,    18,    29,    69,
      74,     8,    48,    64,    80,    74,    51,    65,    75,    75,
      75,    75,    75,    76,    75,    76,    76,    77,    77,    77,
      77,    78,    74,    68,    74,    33,    41,    66,    70,    71,
      72,    73,    65,    49,    51,    67,    12,     5,    45,    17,
      65,    48,    46,    49,     4,    69,    65,    74,    74,    33,
      66,    65,    71,    29,    29,    65,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    60,    61,    61,
      62,    62,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     2,     0,     0,     3,     1,     3,     3,
       1,     1,     2,     2,     3,     3,     3,     6,     4,     4,
       8,     8,     2,     2,     1,     4,     3,     1,     0,     2,
       3,     2,     3,     3,     3,     2,     3,     1,     3,     3,
       1,     3,     2,     0,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     2,     2,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Tiny: PROGRAM Name ':' Dclns Body Name '.'  */
#line 90 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-6].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-6].info).string,
		                                TREETAG_LINE,(yyvsp[-6].info).line,
		                                TREETAG_COLUMN,(yyvsp[-6].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-5].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-5].dlist)));

		while (DCount(&(yyvsp[-3].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-3].dlist)));

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"program",
		                                TREETAG_LINE,(yyvsp[-6].info).line,
		                                TREETAG_COLUMN,(yyvsp[-6].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		t->mynode = *(DHead(&r));
		root = t->nodeptr;

             }
#line 1436 "y.tab.c"
    break;

  case 3: /* Dclns: VAR Dclns_1  */
#line 138 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1476 "y.tab.c"
    break;

  case 4: /* Dclns: %empty  */
#line 174 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1500 "y.tab.c"
    break;

  case 5: /* Dclns_1: %empty  */
#line 196 "code.y"
             {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
#line 1513 "y.tab.c"
    break;

  case 6: /* Dclns_1: Dcln ';' Dclns_1  */
#line 205 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1532 "y.tab.c"
    break;

  case 7: /* Dcln: Dcln_1  */
#line 222 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dcln",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1559 "y.tab.c"
    break;

  case 8: /* Dcln_1: Name ':' Type  */
#line 247 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1578 "y.tab.c"
    break;

  case 9: /* Dcln_1: Name ',' Dcln_1  */
#line 262 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1597 "y.tab.c"
    break;

  case 10: /* Type: INTEGER  */
#line 279 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"integer",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1634 "y.tab.c"
    break;

  case 11: /* Type: BOOLEAN  */
#line 312 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"boolean",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1671 "y.tab.c"
    break;

  case 12: /* Body: BEGINX Body_1  */
#line 347 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"block",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1711 "y.tab.c"
    break;

  case 13: /* Body_1: Statement END  */
#line 385 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
#line 1738 "y.tab.c"
    break;

  case 14: /* Body_1: Statement ';' Body_1  */
#line 408 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1757 "y.tab.c"
    break;

  case 15: /* Statement: Name ASSIGNMENT Expression  */
#line 425 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"assign",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1800 "y.tab.c"
    break;

  case 16: /* Statement: OUTPUT '(' Statement_1  */
#line 464 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-2].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-2].info).string,
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"output",
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1840 "y.tab.c"
    break;

  case 17: /* Statement: IF Expression THEN Statement ELSE Statement  */
#line 500 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-5].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-5].info).string,
		                                TREETAG_LINE,(yyvsp[-5].info).line,
		                                TREETAG_COLUMN,(yyvsp[-5].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-4].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-4].dlist)));

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"if",
		                                TREETAG_LINE,(yyvsp[-5].info).line,
		                                TREETAG_COLUMN,(yyvsp[-5].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1908 "y.tab.c"
    break;

  case 18: /* Statement: IF Expression THEN Statement  */
#line 564 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"if",
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1962 "y.tab.c"
    break;

  case 19: /* Statement: WHILE Expression DO Statement  */
#line 614 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"while",
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2016 "y.tab.c"
    break;

  case 20: /* Statement: FOR Name ASSIGNMENT Expression TO Expression DO Statement  */
#line 664 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-7].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-7].info).string,
		                                TREETAG_LINE,(yyvsp[-7].info).line,
		                                TREETAG_COLUMN,(yyvsp[-7].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-6].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-6].dlist)));

		if ((yyvsp[-5].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-5].info).string,
		                                TREETAG_LINE,(yyvsp[-5].info).line,
		                                TREETAG_COLUMN,(yyvsp[-5].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-4].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-4].dlist)));

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"for",
		                                TREETAG_LINE,(yyvsp[-7].info).line,
		                                TREETAG_COLUMN,(yyvsp[-7].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2098 "y.tab.c"
    break;

  case 21: /* Statement: FOR Name ASSIGNMENT Expression DOWNTO Expression DO Statement  */
#line 742 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-7].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-7].info).string,
		                                TREETAG_LINE,(yyvsp[-7].info).line,
		                                TREETAG_COLUMN,(yyvsp[-7].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-6].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-6].dlist)));

		if ((yyvsp[-5].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-5].info).string,
		                                TREETAG_LINE,(yyvsp[-5].info).line,
		                                TREETAG_COLUMN,(yyvsp[-5].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-4].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-4].dlist)));

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"fordown",
		                                TREETAG_LINE,(yyvsp[-7].info).line,
		                                TREETAG_COLUMN,(yyvsp[-7].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2180 "y.tab.c"
    break;

  case 22: /* Statement: REPEAT Statement_1_1  */
#line 820 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"repeat",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2220 "y.tab.c"
    break;

  case 23: /* Statement: LOOP Statement_1_1_1  */
#line 856 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"loop",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2260 "y.tab.c"
    break;

  case 24: /* Statement: EXITTOK  */
#line 892 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"exit",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2297 "y.tab.c"
    break;

  case 25: /* Statement: CASE Expression OF Statement_1_1_1_1  */
#line 925 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"case",
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2351 "y.tab.c"
    break;

  case 26: /* Statement: Name SWAP Name  */
#line 975 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"swap",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2394 "y.tab.c"
    break;

  case 27: /* Statement: Body  */
#line 1014 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2410 "y.tab.c"
    break;

  case 28: /* Statement: %empty  */
#line 1026 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<null>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2434 "y.tab.c"
    break;

  case 29: /* Statement_1_1_1_1: OtherwiseClause END  */
#line 1048 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
#line 2461 "y.tab.c"
    break;

  case 30: /* Statement_1_1_1_1: Caseclause ';' Statement_1_1_1_1  */
#line 1071 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2480 "y.tab.c"
    break;

  case 31: /* Statement_1_1_1: Statement POOL  */
#line 1088 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
#line 2507 "y.tab.c"
    break;

  case 32: /* Statement_1_1_1: Statement ';' Statement_1_1_1  */
#line 1111 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2526 "y.tab.c"
    break;

  case 33: /* Statement_1_1: Statement UNTIL Expression  */
#line 1128 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2556 "y.tab.c"
    break;

  case 34: /* Statement_1_1: Statement ';' Statement_1_1  */
#line 1154 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2575 "y.tab.c"
    break;

  case 35: /* Statement_1: Expression ')'  */
#line 1171 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 2591 "y.tab.c"
    break;

  case 36: /* Statement_1: Expression ',' Statement_1  */
#line 1183 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2610 "y.tab.c"
    break;

  case 37: /* Caseclause: Caseclause_1  */
#line 1200 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"case_clause",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2637 "y.tab.c"
    break;

  case 38: /* Caseclause_1: Caselabel ':' Statement  */
#line 1225 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2656 "y.tab.c"
    break;

  case 39: /* Caseclause_1: Caselabel ',' Caseclause_1  */
#line 1240 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2675 "y.tab.c"
    break;

  case 40: /* Caselabel: INTEGER_NUM  */
#line 1257 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<integer>",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2712 "y.tab.c"
    break;

  case 41: /* Caselabel: INTEGER_NUM DOTDOT INTEGER_NUM  */
#line 1290 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-2].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-2].info).string,
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"..",
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2771 "y.tab.c"
    break;

  case 42: /* OtherwiseClause: OTHERWISE Statement  */
#line 1347 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"otherwise",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2811 "y.tab.c"
    break;

  case 43: /* OtherwiseClause: %empty  */
#line 1383 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<null>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2835 "y.tab.c"
    break;

  case 44: /* Expression: Expression1  */
#line 1405 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2851 "y.tab.c"
    break;

  case 45: /* Expression: Expression1 LTE Expression1  */
#line 1417 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<=",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2894 "y.tab.c"
    break;

  case 46: /* Expression: Expression1 EQ Expression1  */
#line 1456 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"=",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2937 "y.tab.c"
    break;

  case 47: /* Expression: Expression1 NEQ Expression1  */
#line 1495 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<>",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2980 "y.tab.c"
    break;

  case 48: /* Expression: Expression1 GTE Expression1  */
#line 1534 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">=",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3023 "y.tab.c"
    break;

  case 49: /* Expression: Expression1 LT Expression1  */
#line 1573 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3066 "y.tab.c"
    break;

  case 50: /* Expression: Expression1 GT Expression1  */
#line 1612 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3109 "y.tab.c"
    break;

  case 51: /* Expression1: Expression2  */
#line 1653 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3125 "y.tab.c"
    break;

  case 52: /* Expression1: Expression1 '+' Expression2  */
#line 1665 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"+",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3155 "y.tab.c"
    break;

  case 53: /* Expression1: Expression1 '-' Expression2  */
#line 1691 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"-",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3185 "y.tab.c"
    break;

  case 54: /* Expression1: Expression1 OR Expression2  */
#line 1717 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"or",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3228 "y.tab.c"
    break;

  case 55: /* Expression2: Expression3  */
#line 1758 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3244 "y.tab.c"
    break;

  case 56: /* Expression2: Expression2 '*' Expression3  */
#line 1770 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"*",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3274 "y.tab.c"
    break;

  case 57: /* Expression2: Expression2 '/' Expression3  */
#line 1796 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"/",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3304 "y.tab.c"
    break;

  case 58: /* Expression2: Expression2 AND Expression3  */
#line 1822 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"and",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3347 "y.tab.c"
    break;

  case 59: /* Expression2: Expression2 MOD Expression3  */
#line 1861 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"mod",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3390 "y.tab.c"
    break;

  case 60: /* Expression3: Expression4  */
#line 1902 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3406 "y.tab.c"
    break;

  case 61: /* Expression3: '+' Expression3  */
#line 1914 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"+",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3433 "y.tab.c"
    break;

  case 62: /* Expression3: '-' Expression3  */
#line 1937 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"-",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3460 "y.tab.c"
    break;

  case 63: /* Expression3: NOT Expression3  */
#line 1960 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"not",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3500 "y.tab.c"
    break;

  case 64: /* Expression4: Primary  */
#line 1998 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3516 "y.tab.c"
    break;

  case 65: /* Expression4: Primary EXP Expression4  */
#line 2010 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"**",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3559 "y.tab.c"
    break;

  case 66: /* Primary: READ  */
#line 2051 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"read",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3596 "y.tab.c"
    break;

  case 67: /* Primary: EOFTOK  */
#line 2084 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"eof",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3633 "y.tab.c"
    break;

  case 68: /* Primary: Name  */
#line 2117 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3649 "y.tab.c"
    break;

  case 69: /* Primary: INTEGER_NUM  */
#line 2129 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<integer>",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3686 "y.tab.c"
    break;

  case 70: /* Primary: TRUETOK  */
#line 2162 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"true",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3723 "y.tab.c"
    break;

  case 71: /* Primary: FALSETOK  */
#line 2195 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"false",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3760 "y.tab.c"
    break;

  case 72: /* Primary: '(' Expression ')'  */
#line 2228 "code.y"
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 3776 "y.tab.c"
    break;

  case 73: /* Name: IDENTIFIER  */
#line 2242 "code.y"
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<identifier>",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3813 "y.tab.c"
    break;


#line 3817 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

