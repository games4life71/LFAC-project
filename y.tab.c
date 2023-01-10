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
#line 1 "my_lang.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include "functions.h" //header file with the functions used in the parser

extern FILE* yyin;
extern char* yytext;
extern int yylineno;


        //maybe  a struct for a node in the AST tree ?? 
        //c code structs to be used in the parser

  struct funct_param{
    char type[50];
    char name[50];
  };


int current_function_arguments = 0;

#line 97 "y.tab.c"

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
    CLASS = 258,                   /* CLASS  */
    ASSIGN = 259,                  /* ASSIGN  */
    ID = 260,                      /* ID  */
    TYPE = 261,                    /* TYPE  */
    COMPOSITE = 262,               /* COMPOSITE  */
    ARRAY = 263,                   /* ARRAY  */
    CONSTANT = 264,                /* CONSTANT  */
    COMPOSITE_ARRAY = 265,         /* COMPOSITE_ARRAY  */
    INTEGER = 266,                 /* INTEGER  */
    FLOAT = 267,                   /* FLOAT  */
    BOOL = 268,                    /* BOOL  */
    STRING = 269,                  /* STRING  */
    OP_MATH1 = 270,                /* OP_MATH1  */
    OP_MATH2 = 271,                /* OP_MATH2  */
    OP_LOGIC = 272,                /* OP_LOGIC  */
    INC = 273,                     /* INC  */
    DEC = 274,                     /* DEC  */
    PRINT = 275,                   /* PRINT  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    FOR = 278,                     /* FOR  */
    WHILE = 279,                   /* WHILE  */
    SWITCH = 280,                  /* SWITCH  */
    CASE = 281,                    /* CASE  */
    BREAK = 282,                   /* BREAK  */
    NUM = 283,                     /* NUM  */
    SPACE = 284,                   /* SPACE  */
    MINUS = 285,                   /* MINUS  */
    MAIN_START = 286,              /* MAIN_START  */
    MAIN_END = 287,                /* MAIN_END  */
    UNIVERSAL_START = 288,         /* UNIVERSAL_START  */
    UNIVERSAL_END = 289,           /* UNIVERSAL_END  */
    FUNCTIONS_START = 290,         /* FUNCTIONS_START  */
    FUNCTIONS_END = 291,           /* FUNCTIONS_END  */
    USERDEF_START = 292,           /* USERDEF_START  */
    USERDEF_END = 293,             /* USERDEF_END  */
    RETURN = 294,                  /* RETURN  */
    STRUCT_START = 295,            /* STRUCT_START  */
    STRUCT_END = 296,              /* STRUCT_END  */
    CLASS_START = 297,             /* CLASS_START  */
    CLASS_END = 298,               /* CLASS_END  */
    DEFAULT = 299,                 /* DEFAULT  */
    PLUS = 300                     /* PLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CLASS 258
#define ASSIGN 259
#define ID 260
#define TYPE 261
#define COMPOSITE 262
#define ARRAY 263
#define CONSTANT 264
#define COMPOSITE_ARRAY 265
#define INTEGER 266
#define FLOAT 267
#define BOOL 268
#define STRING 269
#define OP_MATH1 270
#define OP_MATH2 271
#define OP_LOGIC 272
#define INC 273
#define DEC 274
#define PRINT 275
#define IF 276
#define ELSE 277
#define FOR 278
#define WHILE 279
#define SWITCH 280
#define CASE 281
#define BREAK 282
#define NUM 283
#define SPACE 284
#define MINUS 285
#define MAIN_START 286
#define MAIN_END 287
#define UNIVERSAL_START 288
#define UNIVERSAL_END 289
#define FUNCTIONS_START 290
#define FUNCTIONS_END 291
#define USERDEF_START 292
#define USERDEF_END 293
#define RETURN 294
#define STRUCT_START 295
#define STRUCT_END 296
#define CLASS_START 297
#define CLASS_END 298
#define DEFAULT 299
#define PLUS 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "my_lang.y"
  
    int intval;
    char * strval;  
    struct lvalue*  lval;
    struct funct_param* arg;
    struct funct_param* arg_list[30];

#line 248 "y.tab.c"

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
  YYSYMBOL_CLASS = 3,                      /* CLASS  */
  YYSYMBOL_ASSIGN = 4,                     /* ASSIGN  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_TYPE = 6,                       /* TYPE  */
  YYSYMBOL_COMPOSITE = 7,                  /* COMPOSITE  */
  YYSYMBOL_ARRAY = 8,                      /* ARRAY  */
  YYSYMBOL_CONSTANT = 9,                   /* CONSTANT  */
  YYSYMBOL_COMPOSITE_ARRAY = 10,           /* COMPOSITE_ARRAY  */
  YYSYMBOL_INTEGER = 11,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_BOOL = 13,                      /* BOOL  */
  YYSYMBOL_STRING = 14,                    /* STRING  */
  YYSYMBOL_OP_MATH1 = 15,                  /* OP_MATH1  */
  YYSYMBOL_OP_MATH2 = 16,                  /* OP_MATH2  */
  YYSYMBOL_OP_LOGIC = 17,                  /* OP_LOGIC  */
  YYSYMBOL_INC = 18,                       /* INC  */
  YYSYMBOL_DEC = 19,                       /* DEC  */
  YYSYMBOL_PRINT = 20,                     /* PRINT  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_SWITCH = 25,                    /* SWITCH  */
  YYSYMBOL_CASE = 26,                      /* CASE  */
  YYSYMBOL_BREAK = 27,                     /* BREAK  */
  YYSYMBOL_NUM = 28,                       /* NUM  */
  YYSYMBOL_SPACE = 29,                     /* SPACE  */
  YYSYMBOL_MINUS = 30,                     /* MINUS  */
  YYSYMBOL_MAIN_START = 31,                /* MAIN_START  */
  YYSYMBOL_MAIN_END = 32,                  /* MAIN_END  */
  YYSYMBOL_UNIVERSAL_START = 33,           /* UNIVERSAL_START  */
  YYSYMBOL_UNIVERSAL_END = 34,             /* UNIVERSAL_END  */
  YYSYMBOL_FUNCTIONS_START = 35,           /* FUNCTIONS_START  */
  YYSYMBOL_FUNCTIONS_END = 36,             /* FUNCTIONS_END  */
  YYSYMBOL_USERDEF_START = 37,             /* USERDEF_START  */
  YYSYMBOL_USERDEF_END = 38,               /* USERDEF_END  */
  YYSYMBOL_RETURN = 39,                    /* RETURN  */
  YYSYMBOL_STRUCT_START = 40,              /* STRUCT_START  */
  YYSYMBOL_STRUCT_END = 41,                /* STRUCT_END  */
  YYSYMBOL_CLASS_START = 42,               /* CLASS_START  */
  YYSYMBOL_CLASS_END = 43,                 /* CLASS_END  */
  YYSYMBOL_DEFAULT = 44,                   /* DEFAULT  */
  YYSYMBOL_PLUS = 45,                      /* PLUS  */
  YYSYMBOL_46_ = 46,                       /* ';'  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* ','  */
  YYSYMBOL_52_ = 52,                       /* "$$$"  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_program = 54,                   /* program  */
  YYSYMBOL_userdef_sec = 55,               /* userdef_sec  */
  YYSYMBOL_userdef = 56,                   /* userdef  */
  YYSYMBOL_struct_def = 57,                /* struct_def  */
  YYSYMBOL_struct_vars = 58,               /* struct_vars  */
  YYSYMBOL_class_def = 59,                 /* class_def  */
  YYSYMBOL_class_info = 60,                /* class_info  */
  YYSYMBOL_userdef_vars = 61,              /* userdef_vars  */
  YYSYMBOL_univ_sec = 62,                  /* univ_sec  */
  YYSYMBOL_univ_vars = 63,                 /* univ_vars  */
  YYSYMBOL_variable = 64,                  /* variable  */
  YYSYMBOL_rvalue = 65,                    /* rvalue  */
  YYSYMBOL_lvalue = 66,                    /* lvalue  */
  YYSYMBOL_func_sec = 67,                  /* func_sec  */
  YYSYMBOL_functions = 68,                 /* functions  */
  YYSYMBOL_function = 69,                  /* function  */
  YYSYMBOL_arguments = 70,                 /* arguments  */
  YYSYMBOL_variable_argument = 71,         /* variable_argument  */
  YYSYMBOL_function_argument = 72,         /* function_argument  */
  YYSYMBOL_function_argument_params = 73,  /* function_argument_params  */
  YYSYMBOL_main_sec = 74,                  /* main_sec  */
  YYSYMBOL_instructions = 75,              /* instructions  */
  YYSYMBOL_instruction = 76,               /* instruction  */
  YYSYMBOL_statement = 77,                 /* statement  */
  YYSYMBOL_declaration = 78,               /* declaration  */
  YYSYMBOL_control_instruction = 79,       /* control_instruction  */
  YYSYMBOL_condition = 80,                 /* condition  */
  YYSYMBOL_math_statem = 81,               /* math_statem  */
  YYSYMBOL_math_val = 82                   /* math_val  */
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      47,    48,     2,     2,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      45,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   106,   106,   108,   108,   111,   112,   113,   114,   115,
     116,   117,   119,   122,   123,   127,   129,   130,   131,   132,
     134,   135,   136,   139,   139,   141,   142,   143,   146,   155,
     171,   183,   184,   194,   204,   212,   223,   225,   230,   231,
     278,   278,   280,   281,   282,   285,   292,   302,   303,   304,
     305,   305,   308,   310,   311,   314,   315,   316,   317,   320,
     322,   323,   324,   327,   328,   329,   330,   331,   332,   332,
     335,   336,   337,   357,   361,   366,   373,   379,   388,   398,
     399,   400,   401,   405,   406,   407,   408,   415,   419,   423,
     427,   431,   435,   439,   443,   449,   453,   458,   462
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
  "\"end of file\"", "error", "\"invalid token\"", "CLASS", "ASSIGN",
  "ID", "TYPE", "COMPOSITE", "ARRAY", "CONSTANT", "COMPOSITE_ARRAY",
  "INTEGER", "FLOAT", "BOOL", "STRING", "OP_MATH1", "OP_MATH2", "OP_LOGIC",
  "INC", "DEC", "PRINT", "IF", "ELSE", "FOR", "WHILE", "SWITCH", "CASE",
  "BREAK", "NUM", "SPACE", "MINUS", "MAIN_START", "MAIN_END",
  "UNIVERSAL_START", "UNIVERSAL_END", "FUNCTIONS_START", "FUNCTIONS_END",
  "USERDEF_START", "USERDEF_END", "RETURN", "STRUCT_START", "STRUCT_END",
  "CLASS_START", "CLASS_END", "DEFAULT", "PLUS", "';'", "'('", "')'",
  "'{'", "'}'", "','", "\"$$$\"", "$accept", "program", "userdef_sec",
  "userdef", "struct_def", "struct_vars", "class_def", "class_info",
  "userdef_vars", "univ_sec", "univ_vars", "variable", "rvalue", "lvalue",
  "func_sec", "functions", "function", "arguments", "variable_argument",
  "function_argument", "function_argument_params", "main_sec",
  "instructions", "instruction", "statement", "declaration",
  "control_instruction", "condition", "math_statem", "math_val", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-99)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,    29,    37,    44,    13,     9,  -124,  -124,    49,    78,
      15,    74,  -124,  -124,    92,   -16,  -124,    28,    94,   230,
    -124,  -124,    85,  -124,  -124,    29,    -1,   124,  -124,  -124,
      29,  -124,   196,  -124,    88,  -124,   211,   221,   224,  -124,
      95,  -124,   243,   245,   140,     0,  -124,    33,  -124,  -124,
    -124,  -124,  -124,    29,  -124,     7,   155,   104,    96,   114,
     174,   201,   226,   125,   135,  -124,  -124,   240,   240,   240,
     240,   152,  -124,  -124,  -124,  -124,  -124,   240,     8,   206,
    -124,   171,   186,   171,   230,  -124,   226,   159,   166,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,   243,   245,   243,   245,
     243,   245,   243,   245,    27,   243,   218,   210,  -124,   138,
    -124,  -124,   230,   229,    69,   258,   100,  -124,   243,  -124,
    -124,   214,   149,  -124,   216,  -124,    16,  -124,   243,   230,
     230,   217,   240,   219,   164,   220,   260,  -124,  -124,  -124,
     229,   250,  -124,   250,    21,    91,    21,   169,   164,   223,
     123,   171,   130,   266,   190,    61,   251,    23,  -124,   228,
     267,  -124,  -124,  -124,   170,   227,   270,   231,   232,  -124,
      67,    21,   273,  -124,   233,  -124,  -124,   134,   240,  -124,
    -124,   167,   235,    21,   144,  -124
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      24,    27,     0,    41,     0,     0,    25,     1,    44,     4,
       0,     0,    23,    26,     0,     0,    42,    11,     0,    38,
      28,    30,     0,    40,    43,     0,     0,     0,     7,     9,
       5,    20,    38,     2,    31,    39,    32,    33,    34,    35,
       0,    95,    36,     0,     0,     0,    13,     0,    16,    18,
       3,     8,    10,     6,    21,     0,     0,     0,     0,     0,
       0,    38,    60,     0,     0,    67,    29,    38,    38,    38,
      38,     0,    12,    14,    15,    17,    19,    38,    50,    75,
      77,    38,     0,    38,    38,    59,    61,     0,     0,    68,
      63,    65,    37,    96,    97,    98,    92,    87,    93,    88,
      89,    91,    90,    94,    50,    70,     0,     0,    73,     0,
      47,    49,    38,     0,     0,     0,     0,    72,    36,    64,
      66,     0,     0,    52,     0,    74,     0,    76,    36,    38,
      38,     0,    38,     0,    38,     0,     0,    48,    51,    83,
      95,    86,    85,    84,    38,     0,    38,    38,    38,     0,
      38,    38,    38,     0,    38,     0,    79,     0,    82,     0,
       0,    55,    54,    57,     0,     0,     0,     0,     0,    53,
       0,    38,     0,    46,     0,    56,    58,    38,    38,    45,
      80,     0,     0,    38,    38,    81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,  -124,   252,  -124,   253,  -124,   255,  -124,
    -124,    52,   -46,   -19,  -124,  -124,    75,   181,   160,  -123,
    -124,  -124,  -118,   -59,   -61,   -58,   -50,   -70,   -60,   187
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    18,    27,    28,    45,    29,    47,    30,     3,
       5,    31,    40,    60,     9,    15,    16,   109,   110,   111,
     164,    33,    61,    62,    63,    64,    65,   114,    42,    43
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    87,    86,   138,    88,     4,     4,    96,    98,   100,
     102,    77,    89,   116,   106,     4,   147,   105,    10,    19,
      23,    11,   106,     1,   118,    87,    55,    56,    88,    35,
     154,    14,   163,   106,     4,     4,    89,     7,   117,     4,
     130,    72,    57,    12,    58,    59,    14,   176,    41,    41,
      41,    41,   128,     6,    78,   107,   108,    13,    41,   141,
     143,    20,   113,   107,   113,    41,   127,   161,    25,   166,
      26,   -69,   145,   175,   107,   121,    74,    46,    48,     8,
      14,   157,    54,   139,   142,   150,   130,   152,    86,    87,
      24,    87,    88,    41,    88,    86,    14,    73,    22,    75,
      89,    49,    89,   -37,   -37,    54,    67,    68,   107,   162,
     140,   140,   177,    41,   107,    17,    87,   130,   181,    88,
      21,   131,    76,    87,   184,    32,    88,    89,    55,    56,
       4,    35,   113,    44,    89,    55,    56,   151,    35,    55,
      56,    66,    35,    82,    57,    71,    58,    59,   133,    55,
      56,    57,    35,    58,    59,    57,    81,    58,    59,    41,
      79,    83,    50,    80,    25,    57,    26,    58,    59,    55,
      56,    90,    35,   156,    55,    56,    92,    35,    84,    35,
     158,    91,    67,    68,   180,    57,   125,    58,    59,   126,
      57,   115,    58,    59,   185,    55,    56,   135,    35,   104,
     126,    55,    56,   -62,    35,   119,    55,    56,   153,    35,
     112,    57,   120,    58,    59,   182,   124,    57,   169,    58,
      59,   170,    57,   123,    58,    59,   -96,   -96,   -62,   160,
     -38,    55,    56,    85,    35,    34,   -97,   -97,    35,   -98,
     -98,    36,    37,    38,    39,    92,   129,    57,    35,    58,
      59,    93,    94,    95,    97,    99,   101,   103,    67,    68,
      69,    70,   132,   134,   136,   149,   144,   130,   146,   148,
     155,   159,   168,   165,   167,   172,   171,   178,   174,    51,
      52,   173,    53,   179,   183,   122,   137
};

static const yytype_uint8 yycheck[] =
{
      19,    62,    61,   126,    62,     6,     6,    67,    68,    69,
      70,     4,    62,    83,     6,     6,   134,    77,     5,     4,
      36,     8,     6,    33,    84,    86,     5,     6,    86,     8,
     148,    47,   155,     6,     6,     6,    86,     0,    84,     6,
      17,    41,    21,    34,    23,    24,    47,   170,    67,    68,
      69,    70,   112,     1,    47,    47,    48,     5,    77,   129,
     130,    46,    81,    47,    83,    84,   112,     6,    40,    46,
      42,    50,   132,     6,    47,    48,    43,    25,    26,    35,
      47,   151,    30,   129,   130,   144,    17,   146,   147,   150,
      15,   152,   150,   112,   152,   154,    47,    45,     6,    47,
     150,    26,   152,    15,    16,    53,    15,    16,    47,    48,
     129,   130,   171,   132,    47,    37,   177,    17,   178,   177,
      46,    52,    47,   184,   183,    31,   184,   177,     5,     6,
       6,     8,   151,    48,   184,     5,     6,    46,     8,     5,
       6,    46,     8,    47,    21,     5,    23,    24,    48,     5,
       6,    21,     8,    23,    24,    21,    52,    23,    24,   178,
       5,    47,    38,     8,    40,    21,    42,    23,    24,     5,
       6,    46,     8,    50,     5,     6,     5,     8,     4,     8,
      50,    46,    15,    16,    50,    21,    48,    23,    24,    51,
      21,     5,    23,    24,    50,     5,     6,    48,     8,    47,
      51,     5,     6,    39,     8,    46,     5,     6,    39,     8,
       4,    21,    46,    23,    24,    48,     6,    21,    48,    23,
      24,    51,    21,     5,    23,    24,    15,    16,    32,    39,
       4,     5,     6,    32,     8,     5,    15,    16,     8,    15,
      16,    11,    12,    13,    14,     5,    17,    21,     8,    23,
      24,    11,    12,    13,    67,    68,    69,    70,    15,    16,
      15,    16,     4,    49,    48,     5,    49,    17,    49,    49,
      47,     5,     5,    22,    46,     5,    49,     4,    46,    27,
      27,    50,    27,    50,    49,   104,   126
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    54,    62,     6,    63,    64,     0,    35,    67,
       5,     8,    34,    64,    47,    68,    69,    37,    55,     4,
      46,    46,     6,    36,    69,    40,    42,    56,    57,    59,
      61,    64,    31,    74,     5,     8,    11,    12,    13,    14,
      65,    66,    81,    82,    48,    58,    64,    60,    64,    69,
      38,    57,    59,    61,    64,     5,     6,    21,    23,    24,
      66,    75,    76,    77,    78,    79,    46,    15,    16,    15,
      16,     5,    41,    64,    43,    64,    69,     4,    47,     5,
       8,    52,    47,    47,     4,    32,    76,    77,    78,    79,
      46,    46,     5,    11,    12,    13,    81,    82,    81,    82,
      81,    82,    81,    82,    47,    81,     6,    47,    48,    70,
      71,    72,     4,    66,    80,     5,    80,    65,    81,    46,
      46,    48,    70,     5,     6,    48,    51,    65,    81,    17,
      17,    52,     4,    48,    49,    48,    48,    71,    72,    65,
      66,    80,    65,    80,    49,    81,    49,    75,    49,     5,
      76,    46,    76,    39,    75,    47,    50,    80,    50,     5,
      39,     6,    48,    72,    73,    22,    46,    46,     5,    48,
      51,    49,     5,    50,    46,     6,    72,    76,     4,    50,
      50,    81,    48,    49,    76,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    57,    58,    58,    59,    60,    60,    60,    60,
      61,    61,    61,    62,    62,    63,    63,    63,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    66,    66,    66,
      67,    67,    68,    68,    68,    69,    69,    70,    70,    70,
      70,    70,    71,    72,    72,    73,    73,    73,    73,    74,
      75,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    79,
      79,    79,    79,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    82,    82,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     0,     1,     2,     1,     2,     1,
       2,     0,     3,     1,     2,     3,     1,     2,     1,     2,
       1,     2,     0,     3,     0,     1,     2,     0,     3,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       3,     0,     1,     2,     0,    13,    12,     1,     3,     1,
       0,     3,     2,     7,     6,     1,     3,     1,     3,     3,
       1,     2,     0,     2,     3,     2,     3,     1,     2,     0,
       3,     3,     3,     3,     4,     2,     4,     2,     4,     7,
      11,    15,     7,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1
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
  case 2: /* program: univ_sec func_sec userdef_sec main_sec  */
#line 106 "my_lang.y"
                                                 {printf("The program is correct \n");}
#line 1454 "y.tab.c"
    break;

  case 3: /* userdef_sec: USERDEF_START userdef USERDEF_END  */
#line 108 "my_lang.y"
                                                {printf("The userdef section is correct \n");}
#line 1460 "y.tab.c"
    break;

  case 5: /* userdef: userdef_vars  */
#line 111 "my_lang.y"
                       {printf("The userdef is correct \n");}
#line 1466 "y.tab.c"
    break;

  case 7: /* userdef: struct_def  */
#line 113 "my_lang.y"
              {printf("The userdef is correct \n");}
#line 1472 "y.tab.c"
    break;

  case 9: /* userdef: class_def  */
#line 115 "my_lang.y"
             {printf("The userdef is correct \n");}
#line 1478 "y.tab.c"
    break;

  case 12: /* struct_def: STRUCT_START struct_vars STRUCT_END  */
#line 119 "my_lang.y"
                                                 {printf("The struct is correct \n");}
#line 1484 "y.tab.c"
    break;

  case 13: /* struct_vars: variable  */
#line 122 "my_lang.y"
                        {printf("The struct variable is correct \n");}
#line 1490 "y.tab.c"
    break;

  case 15: /* class_def: CLASS_START class_info CLASS_END  */
#line 127 "my_lang.y"
                                             {printf("The class is correct \n");}
#line 1496 "y.tab.c"
    break;

  case 16: /* class_info: variable  */
#line 129 "my_lang.y"
                      {printf("The class variable is correct \n");}
#line 1502 "y.tab.c"
    break;

  case 18: /* class_info: function  */
#line 131 "my_lang.y"
             {printf("The class function is correct \n");}
#line 1508 "y.tab.c"
    break;

  case 20: /* userdef_vars: variable  */
#line 134 "my_lang.y"
                         {printf("The userdef variable is correct \n");}
#line 1514 "y.tab.c"
    break;

  case 23: /* univ_sec: UNIVERSAL_START univ_vars UNIVERSAL_END  */
#line 139 "my_lang.y"
                                                  {printf("The universal section is correct \n");}
#line 1520 "y.tab.c"
    break;

  case 25: /* univ_vars: variable  */
#line 141 "my_lang.y"
                      {printf("The universal variable is correct \n");}
#line 1526 "y.tab.c"
    break;

  case 28: /* variable: TYPE ID ';'  */
#line 147 "my_lang.y"
        {
          
        add_var((yyvsp[-1].strval), (yyvsp[-2].strval), "default","global",false,0);
         print_var_table();
         //printf("The var is correct \n");
         

        }
#line 1539 "y.tab.c"
    break;

  case 29: /* variable: TYPE ID ASSIGN rvalue ';'  */
#line 156 "my_lang.y"
        { 
          
          printf("The variable is correct \n");
          //check if the rvalue type is the same as TYPE 
          //if not error
          if(strcmp((yyvsp[-1].lval)->type,(yyvsp[-4].strval))!= 0)
          {
            printf("the rvalue type is %s\n",(yyvsp[-1].lval)->type);
            printf("The rvalue type is not the same as the variable type \n");
            exit(1);
          }

          add_var((yyvsp[-3].strval), (yyvsp[-4].strval), (yyvsp[-1].lval),"global",false,0);  
          print_var_table();
        }
#line 1559 "y.tab.c"
    break;

  case 30: /* variable: TYPE ARRAY ';'  */
#line 172 "my_lang.y"
       {
          char *name = strtok((yyvsp[-1].strval), "[");
          char *size = strtok(NULL, "]");
          int size_int = atoi(size);
          add_var(name, (yyvsp[-2].strval), "","global",true,size_int);
          print_var_table();
        }
#line 1571 "y.tab.c"
    break;

  case 31: /* rvalue: ID  */
#line 183 "my_lang.y"
            {printf("The rvalue is correct \n"); (yyval.lval) = (struct lvalue*)getIDType((yyvsp[0].strval));}
#line 1577 "y.tab.c"
    break;

  case 32: /* rvalue: INTEGER  */
#line 185 "my_lang.y"
        {
          printf("The rvalue is %s correct \n",(yyvsp[0].strval));
          //set type and name for integer

          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "int");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));
        }
#line 1591 "y.tab.c"
    break;

  case 33: /* rvalue: FLOAT  */
#line 195 "my_lang.y"
        {
          printf("The rvalue is correct \n")
          
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "float");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));
          
          ;}
#line 1605 "y.tab.c"
    break;

  case 34: /* rvalue: BOOL  */
#line 204 "my_lang.y"
             {
          printf("The rvalue is correct \n");
          
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "bool");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));
          }
#line 1618 "y.tab.c"
    break;

  case 35: /* rvalue: STRING  */
#line 213 "my_lang.y"
        {
          printf("The rvalue is correct \n");
          
       
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "string");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));   
        }
#line 1632 "y.tab.c"
    break;

  case 36: /* rvalue: math_statem  */
#line 223 "my_lang.y"
                    {printf("The rvalue is correct \n");}
#line 1638 "y.tab.c"
    break;

  case 37: /* lvalue: ID  */
#line 226 "my_lang.y"
          {
          printf("The lvalue is correct \n");
          (yyval.lval) = (struct lvalue*)getIDType((yyvsp[0].strval)); //assign lvalue the value and id of the ID
          
          }
#line 1648 "y.tab.c"
    break;

  case 39: /* lvalue: ARRAY  */
#line 232 "my_lang.y"
          {
           printf("The lvalue is correct \n");
           //check if the variable is declared
           char *name = strtok((yyvsp[0].strval), "[");

           if(!is_declared(name,"global"))
           {
            printf("The variable %s is not declared \n",name);
            exit(1);
           }
           
           else
           {
            //check if the variable is an array
            if(!is_array(name,"global"))
            {
              printf("The variable %s is not an array \n",name);
              exit(1);
            }
            else
            {
              //check if the index is valid
              char * id = strtok((yyvsp[0].strval), "["); 
              char *index = strtok(NULL, "]");
              int index_int = atoi(index);

              int size = get_size(name,"global");
              if(index_int >= size)
              {
                printf("The index %d is out of bounds \n",index_int);
                exit(1);
              }
              //get the array from the table 
              struct array_info *curr_array = get_array(name);
              struct element  curr_elem = curr_array->elements[index_int];
              //return the value of the element
              (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
              strcpy((yyval.lval)->type , curr_elem.type);
              strcpy((yyval.lval)->name , curr_elem.name);
              strcpy((yyval.lval)->value, curr_elem.value);
              
            }
           }
          }
#line 1697 "y.tab.c"
    break;

  case 40: /* func_sec: FUNCTIONS_START functions FUNCTIONS_END  */
#line 278 "my_lang.y"
                                                   {printf("The functions section is correct \n");}
#line 1703 "y.tab.c"
    break;

  case 45: /* function: '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN ID ';' '}'  */
#line 286 "my_lang.y"
{
  //add new function to the table
  //add_func($4, $2, (struct param_info*)$6, "function", current_function_arguments);
  current_function_arguments = 0;
  printf("The function is correct \n"); 
}
#line 1714 "y.tab.c"
    break;

  case 46: /* function: '(' TYPE ')' ID '(' ')' '{' instructions RETURN ID ';' '}'  */
#line 293 "my_lang.y"
{
  //add new function to the table
  // void add_func(char *id, char *return_type, struct param_info* params, char *scope, int param_count)
  add_func((yyvsp[-8].strval), (yyvsp[-10].strval), NULL, "function", 0);
  current_function_arguments = 0;
  printf("The function is correct \n"); 
}
#line 1726 "y.tab.c"
    break;

  case 47: /* arguments: variable_argument  */
#line 302 "my_lang.y"
                              { /*$$[current_function_arguments].type = $1.type; $$[current_function_arguments].name = $1.name; current_function_arguments++; */}
#line 1732 "y.tab.c"
    break;

  case 48: /* arguments: arguments ',' variable_argument  */
#line 303 "my_lang.y"
                                  {/* $$[current_function_arguments].type = $3.type; $$[current_function_arguments].name = $3.name; current_function_arguments++;*/ }
#line 1738 "y.tab.c"
    break;

  case 52: /* variable_argument: TYPE ID  */
#line 308 "my_lang.y"
                            { strcpy((yyval.arg)->type, (yyvsp[-1].strval)); strcpy((yyval.arg)->name, (yyvsp[0].strval)); }
#line 1744 "y.tab.c"
    break;

  case 59: /* main_sec: MAIN_START instructions MAIN_END  */
#line 320 "my_lang.y"
                                            {printf("The main section is correct \n");}
#line 1750 "y.tab.c"
    break;

  case 60: /* instructions: instruction  */
#line 322 "my_lang.y"
                           {printf("The instruction is correct \n");}
#line 1756 "y.tab.c"
    break;

  case 70: /* statement: ID ASSIGN math_statem  */
#line 335 "my_lang.y"
                                {printf("The statement is correct \n");}
#line 1762 "y.tab.c"
    break;

  case 71: /* statement: lvalue ASSIGN math_statem  */
#line 336 "my_lang.y"
                                     {printf("The statement is correct \n");}
#line 1768 "y.tab.c"
    break;

  case 72: /* statement: lvalue ASSIGN rvalue  */
#line 338 "my_lang.y"
           {
            //call a function to update val in the symbol table 
            update_val((yyvsp[-2].lval), (yyvsp[0].lval));
            printf("The statement is correct \n");
            //if the var is declared as a global var
            // if(is_declared_global($1))
            // {
            //   //compute the assignment
            // }
            // else if(is_declared($1))
            // {
            //   //compute the assignment
            // }
            // else
            // {
            //   printf("The variable %s is not declared \n", $1);
            // }

           }
#line 1792 "y.tab.c"
    break;

  case 73: /* statement: ID '(' ')'  */
#line 358 "my_lang.y"
           {
            printf("The statement is correct \n"); //call a function with no arguments
           }
#line 1800 "y.tab.c"
    break;

  case 74: /* statement: ID '(' arguments ')'  */
#line 362 "my_lang.y"
           {
            printf("The statement is correct \n");
           }
#line 1808 "y.tab.c"
    break;

  case 75: /* declaration: TYPE ID  */
#line 367 "my_lang.y"
            {
              //printf("The declaration is correct \n");
              add_var((yyvsp[0].strval), (yyvsp[-1].strval),"default","main",false,0);
              print_var_table();

            }
#line 1819 "y.tab.c"
    break;

  case 76: /* declaration: TYPE ID ASSIGN rvalue  */
#line 374 "my_lang.y"
             {
              printf("The declaration is correct \n");
              add_var((yyvsp[-2].strval), (yyvsp[-3].strval),(yyvsp[0].lval),"main",false,0); //incompatible type for $4
              print_var_table();
             }
#line 1829 "y.tab.c"
    break;

  case 77: /* declaration: TYPE ARRAY  */
#line 380 "my_lang.y"
             {
              printf("The declaration is correct \n");
              char *id = strtok((yyvsp[0].strval), "["); //int a[10]
              char *size = strtok(NULL, "]");
              int arr_size = atoi(size);
              //printf("the size is %s \n", size);
              add_var(id, (yyvsp[-1].strval),"","main",true,arr_size);
             }
#line 1842 "y.tab.c"
    break;

  case 78: /* declaration: TYPE ID ASSIGN math_statem  */
#line 389 "my_lang.y"
             {
              printf("The declaration is correct \n");
              //compute the math statement first ?  
              
               
            }
#line 1853 "y.tab.c"
    break;

  case 79: /* control_instruction: IF "$$$" condition "$$$" '{' instruction '}'  */
#line 398 "my_lang.y"
                                                                  {printf("The if instruction is correct \n");}
#line 1859 "y.tab.c"
    break;

  case 80: /* control_instruction: IF "$$$" condition "$$$" '{' instruction '}' ELSE '{' instruction '}'  */
#line 399 "my_lang.y"
                                                                        {printf("The if-else instruction is correct \n");}
#line 1865 "y.tab.c"
    break;

  case 81: /* control_instruction: FOR '(' ID ASSIGN math_statem ';' condition ';' ID ASSIGN math_statem ')' '{' instruction '}'  */
#line 400 "my_lang.y"
                                                                                              {printf("The for instruction is correct \n");}
#line 1871 "y.tab.c"
    break;

  case 82: /* control_instruction: WHILE '(' condition ')' '{' instruction '}'  */
#line 401 "my_lang.y"
                                            {printf("The while instruction is correct \n");}
#line 1877 "y.tab.c"
    break;

  case 83: /* condition: lvalue OP_LOGIC rvalue  */
#line 405 "my_lang.y"
                                   {printf("The condition is correct \n");}
#line 1883 "y.tab.c"
    break;

  case 84: /* condition: condition OP_LOGIC condition  */
#line 406 "my_lang.y"
                               {printf("The condition is correct \n");}
#line 1889 "y.tab.c"
    break;

  case 85: /* condition: condition OP_LOGIC rvalue  */
#line 407 "my_lang.y"
                            {printf("The condition is correct \n");}
#line 1895 "y.tab.c"
    break;

  case 86: /* condition: lvalue OP_LOGIC condition  */
#line 408 "my_lang.y"
                            {printf("The condition is correct \n");}
#line 1901 "y.tab.c"
    break;

  case 87: /* math_statem: math_statem OP_MATH1 math_val  */
#line 416 "my_lang.y"
            {
             printf("The math statement is correct \n");
            }
#line 1909 "y.tab.c"
    break;

  case 88: /* math_statem: math_statem OP_MATH2 math_val  */
#line 420 "my_lang.y"
            {
            printf("The math statement is correct \n");
            }
#line 1917 "y.tab.c"
    break;

  case 89: /* math_statem: math_val OP_MATH1 math_statem  */
#line 424 "my_lang.y"
            {
             printf("The math statement is correct \n");
            }
#line 1925 "y.tab.c"
    break;

  case 90: /* math_statem: math_val OP_MATH2 math_statem  */
#line 428 "my_lang.y"
            {
              printf("The math statement is correct \n");
            }
#line 1933 "y.tab.c"
    break;

  case 91: /* math_statem: math_val OP_MATH1 math_val  */
#line 432 "my_lang.y"
            {
              printf("The math statement is correct \n");
            }
#line 1941 "y.tab.c"
    break;

  case 92: /* math_statem: math_statem OP_MATH1 math_statem  */
#line 436 "my_lang.y"
            {
              printf("The math statement is correct \n");
            }
#line 1949 "y.tab.c"
    break;

  case 93: /* math_statem: math_statem OP_MATH2 math_statem  */
#line 440 "my_lang.y"
            {
              printf("The math statement is correct \n");
            }
#line 1957 "y.tab.c"
    break;

  case 94: /* math_statem: math_val OP_MATH2 math_val  */
#line 444 "my_lang.y"
            {
              printf("The math statement is correct \n");
            }
#line 1965 "y.tab.c"
    break;

  case 95: /* math_val: lvalue  */
#line 450 "my_lang.y"
          {
            printf("The math value is correct \n");
          }
#line 1973 "y.tab.c"
    break;

  case 96: /* math_val: INTEGER  */
#line 454 "my_lang.y"
          {
            printf("The math value is correct \n");
            
          }
#line 1982 "y.tab.c"
    break;

  case 97: /* math_val: FLOAT  */
#line 459 "my_lang.y"
          {
            printf("The math value is correct \n");
          }
#line 1990 "y.tab.c"
    break;

  case 98: /* math_val: BOOL  */
#line 463 "my_lang.y"
          {
            printf("The math value is correct \n");
          }
#line 1998 "y.tab.c"
    break;


#line 2002 "y.tab.c"

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

#line 472 "my_lang.y"

// c code part 
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}
//can declare c functions here 


int main(int argc, char** argv){
yyin=fopen(argv[1],"r"); // if we want to parse a file instead of the standard input 
yyparse();
} 

