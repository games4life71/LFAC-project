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
extern FILE* funct_table_file;
extern FILE* var_table_file;

extern char* yytext;
extern int yylineno;


        //maybe  a struct for a node in the AST tree ?? 
        //c code structs to be used in the parser

int current_function_arguments = 0;
//current scope 
char curr_scope[10] = "global";

#line 96 "y.tab.c"

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
    TYPEOF = 300,                  /* TYPEOF  */
    CONST = 301,                   /* CONST  */
    PLUS = 302                     /* PLUS  */
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
#define TYPEOF 300
#define CONST 301
#define PLUS 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "my_lang.y"
  
    int intval;
    char * strval;  
    struct lvalue*  lval;
    struct param_info* arg;
    struct param_info* arg_list[30];
    struct node* node_ptr;

#line 252 "y.tab.c"

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
  YYSYMBOL_TYPEOF = 45,                    /* TYPEOF  */
  YYSYMBOL_CONST = 46,                     /* CONST  */
  YYSYMBOL_PLUS = 47,                      /* PLUS  */
  YYSYMBOL_48_ = 48,                       /* ';'  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* ','  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_program = 55,                   /* program  */
  YYSYMBOL_userdef_sec = 56,               /* userdef_sec  */
  YYSYMBOL_userdef = 57,                   /* userdef  */
  YYSYMBOL_struct_def = 58,                /* struct_def  */
  YYSYMBOL_59_1 = 59,                      /* $@1  */
  YYSYMBOL_struct_vars = 60,               /* struct_vars  */
  YYSYMBOL_class_def = 61,                 /* class_def  */
  YYSYMBOL_62_2 = 62,                      /* $@2  */
  YYSYMBOL_class_info = 63,                /* class_info  */
  YYSYMBOL_userdef_vars = 64,              /* userdef_vars  */
  YYSYMBOL_univ_sec = 65,                  /* univ_sec  */
  YYSYMBOL_univ_vars = 66,                 /* univ_vars  */
  YYSYMBOL_variable = 67,                  /* variable  */
  YYSYMBOL_rvalue = 68,                    /* rvalue  */
  YYSYMBOL_lvalue = 69,                    /* lvalue  */
  YYSYMBOL_func_sec = 70,                  /* func_sec  */
  YYSYMBOL_functions = 71,                 /* functions  */
  YYSYMBOL_function = 72,                  /* function  */
  YYSYMBOL_arguments = 73,                 /* arguments  */
  YYSYMBOL_variable_argument = 74,         /* variable_argument  */
  YYSYMBOL_function_argument = 75,         /* function_argument  */
  YYSYMBOL_function_argument_params = 76,  /* function_argument_params  */
  YYSYMBOL_main_sec = 77,                  /* main_sec  */
  YYSYMBOL_78_3 = 78,                      /* $@3  */
  YYSYMBOL_instructions = 79,              /* instructions  */
  YYSYMBOL_instruction = 80,               /* instruction  */
  YYSYMBOL_print = 81,                     /* print  */
  YYSYMBOL_typeof = 82,                    /* typeof  */
  YYSYMBOL_statement = 83,                 /* statement  */
  YYSYMBOL_declaration = 84,               /* declaration  */
  YYSYMBOL_control_instruction = 85,       /* control_instruction  */
  YYSYMBOL_for_increment = 86,             /* for_increment  */
  YYSYMBOL_condition = 87,                 /* condition  */
  YYSYMBOL_math_statem = 88,               /* math_statem  */
  YYSYMBOL_math_val = 89                   /* math_val  */
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
#define YYLAST   352

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      49,    50,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   109,   109,   111,   111,   114,   115,   116,   117,   118,
     119,   120,   122,   122,   132,   133,   137,   137,   147,   148,
     149,   150,   152,   153,   154,   157,   157,   159,   160,   161,
     164,   173,   189,   201,   209,   221,   232,   241,   253,   267,
     284,   331,   331,   333,   334,   335,   338,   346,   353,   362,
     370,   384,   399,   413,   414,   414,   417,   425,   426,   429,
     430,   431,   432,   435,   435,   437,   438,   439,   442,   443,
     444,   445,   446,   447,   448,   449,   449,   453,   458,   465,
     490,   527,   554,   581,   585,   590,   610,   619,   634,   646,
     650,   655,   661,   665,   671,   674,   677,   683,   701,   705,
     709,   719,   731,   740,   751,   760,   771,   780,   790,   803,
     821,   829,   836
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
  "CLASS_START", "CLASS_END", "DEFAULT", "TYPEOF", "CONST", "PLUS", "';'",
  "'('", "')'", "'{'", "'}'", "','", "$accept", "program", "userdef_sec",
  "userdef", "struct_def", "$@1", "struct_vars", "class_def", "$@2",
  "class_info", "userdef_vars", "univ_sec", "univ_vars", "variable",
  "rvalue", "lvalue", "func_sec", "functions", "function", "arguments",
  "variable_argument", "function_argument", "function_argument_params",
  "main_sec", "$@3", "instructions", "instruction", "print", "typeof",
  "statement", "declaration", "control_instruction", "for_increment",
  "condition", "math_statem", "math_val", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-145)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-113)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -22,    15,    27,    -7,    17,    70,  -145,  -145,    38,    64,
      10,    55,  -145,  -145,    14,   -17,  -145,    69,    95,   203,
    -145,  -145,    58,   128,  -145,  -145,   137,   146,    94,  -145,
    -145,    15,  -145,  -145,  -145,  -145,  -145,    76,   175,   194,
    -145,   118,   197,   248,   258,   163,   131,  -145,  -145,  -145,
    -145,  -145,    15,  -145,   246,  -145,   309,   309,   309,   309,
     144,   134,    15,    -5,   150,   135,   169,   171,   179,   186,
     189,   182,   152,   216,   272,  -145,   147,   178,   195,  -145,
    -145,  -145,  -145,  -145,   248,   258,   248,   258,   248,   258,
     248,   258,     2,   202,    47,  -145,     7,  -145,  -145,    18,
     241,  -145,   289,   139,   281,   139,   225,   250,   203,  -145,
    -145,  -145,   272,   210,   220,  -145,  -145,  -145,  -145,   271,
     273,   237,    96,  -145,  -145,   -16,  -145,  -145,  -145,  -145,
    -145,  -145,   105,   203,   239,   240,   282,    77,   294,   300,
      85,   256,   304,  -145,  -145,  -145,  -145,   259,   246,   264,
      12,   275,  -145,  -145,  -145,   276,   277,   203,   203,   265,
     203,   315,   278,  -145,   203,   321,   226,   246,  -145,  -145,
     279,  -145,  -145,  -145,   268,   310,  -145,   310,   246,   280,
     203,   246,  -145,   283,   325,   236,  -145,    25,   139,   285,
     107,    20,   286,   299,   313,    89,   139,  -145,  -145,  -145,
    -145,   122,   284,   290,   291,   292,   332,   100,  -145,    23,
    -145,   288,   293,   246,   188,   296,   332,  -145,  -145,  -145,
    -145,   173,   203,  -145,  -145,   297,   301,  -145,  -145,   246,
     298,   177,   246,  -145,   181,  -145
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      26,    29,     0,    42,     0,     0,    27,     1,    45,     4,
       0,     0,    25,    28,     0,     0,    43,    11,     0,     0,
      30,    32,     0,     0,    41,    44,     0,     0,     0,     7,
       9,     5,    22,    63,     2,    39,    40,    34,    35,    36,
      37,     0,    33,    38,     0,     0,     0,    12,    16,     3,
       8,    10,     6,    23,    67,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    74,     0,     0,     0,    73,
     110,   111,   112,   109,   106,   101,   107,   102,   103,   105,
     104,   108,    54,     0,     0,    14,     0,    18,    20,    54,
      85,    88,     0,     0,     0,     0,     0,     0,     0,    81,
      82,    64,    66,     0,     0,    75,    69,    68,    71,     0,
       0,     0,     0,    51,    53,     0,    13,    15,    17,    19,
      21,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    70,    72,    56,     0,    67,     0,
       0,     0,    47,    84,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,    67,    52,    55,
       0,    77,    78,    97,    33,   100,    99,    98,    76,     0,
       0,    76,    86,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,    89,     0,     0,    93,    59,    58,
      61,     0,     0,    39,     0,     0,     0,     0,    57,     0,
      49,     0,     0,    76,     0,     0,     0,    60,    62,    48,
      50,     0,     0,    95,    96,     0,     0,    90,    94,    76,
       0,     0,    76,    92,     0,    91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,  -145,  -145,   314,  -145,  -145,   316,  -145,  -145,
     319,  -145,  -145,    11,   -98,   -19,  -145,  -145,    -6,   242,
     200,  -144,  -145,  -145,  -145,  -133,   -56,  -145,  -145,   -71,
     -69,   -67,   136,  -103,    22,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    18,    28,    29,    62,    94,    30,    63,    96,
      31,     3,     5,    32,    41,    72,     9,    15,    16,   122,
     123,   124,   201,    34,    54,    73,    74,    75,    76,    77,
      78,    79,   215,   137,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,     4,   140,   113,   135,   114,   169,   115,   119,    25,
     143,     1,     6,     4,    19,   166,    13,   112,   119,    24,
      22,     4,    10,   151,   119,    11,   198,     7,     8,   217,
      64,    65,    14,    36,   185,   154,   152,    83,    83,    83,
      83,   113,    53,   114,    14,   115,    67,   200,    68,    69,
     128,   120,   121,     4,   175,   177,    14,    98,    20,   173,
     176,   120,   179,    53,    23,   218,   182,   120,   131,   120,
     199,    71,   120,    95,    97,     4,     4,   194,    84,    86,
      88,    90,   189,    42,   136,   195,   136,    14,   126,    42,
     130,  -110,  -110,   207,   158,   204,    85,    87,    89,    91,
       4,    17,   158,    21,    12,   127,   158,   129,    45,    26,
     112,    27,    64,    65,    42,    36,   113,   158,   114,   113,
     115,   114,   187,   115,   228,   190,    33,   159,    67,   112,
      68,    69,    49,    46,    26,   162,    27,   206,   174,   174,
     100,    42,    47,   101,    35,    42,   149,    36,   216,   150,
     113,    48,   114,    71,   115,   153,   108,   221,   150,   197,
     113,    42,   114,   113,   115,   114,    55,   115,    60,   136,
     109,   110,   208,   231,    42,   209,   234,   136,    64,    65,
      61,    36,    64,    65,    93,    36,    64,    65,   107,    36,
    -111,  -111,   222,    92,    67,   116,    68,    69,    67,    99,
      68,    69,    67,    42,    68,    69,   223,   224,    35,  -112,
    -112,    36,  -109,  -109,    37,    38,    39,    40,   102,    71,
     103,    64,    65,    71,    36,   227,   117,    71,   104,   233,
     141,    64,    65,   235,    36,   105,    66,    67,   106,    68,
      69,    64,    65,   118,    36,   133,    66,    67,   111,    68,
      69,    64,    65,   125,    36,   142,    66,    67,   144,    68,
      69,    70,    71,    56,    57,   184,    66,    67,   145,    68,
      69,    70,    71,    58,    59,   193,   146,    64,    65,   147,
      36,    70,    71,  -109,  -109,   157,   138,   139,   148,   155,
     156,    70,    71,    67,    35,    68,    69,    36,   160,   157,
      37,    38,    39,   134,   203,   161,   163,    36,   164,   165,
      37,    38,    39,    40,    35,   167,   178,    36,    71,   180,
      80,    81,    82,   170,   171,   172,   183,   158,   188,   181,
     192,   186,   191,   196,   202,   205,   210,   214,   211,   212,
     219,   132,    50,   213,    51,   220,   225,    52,   229,   232,
     168,   230,   226
};

static const yytype_uint8 yycheck[] =
{
      19,     6,   105,    74,   102,    74,   150,    74,     6,    15,
     108,    33,     1,     6,     4,   148,     5,    73,     6,    36,
       6,     6,     5,    39,     6,     8,     6,     0,    35,     6,
       5,     6,    49,     8,   167,   133,    52,    56,    57,    58,
      59,   112,    31,   112,    49,   112,    21,   191,    23,    24,
      43,    49,    50,     6,   157,   158,    49,    63,    48,   157,
     158,    49,   160,    52,    50,   209,   164,    49,    50,    49,
      50,    46,    49,    62,    63,     6,     6,    52,    56,    57,
      58,    59,   180,   102,   103,   188,   105,    49,    41,   108,
      96,    15,    16,   196,    17,   193,    56,    57,    58,    59,
       6,    37,    17,    48,    34,    94,    17,    96,    50,    40,
     166,    42,     5,     6,   133,     8,   187,    17,   187,   190,
     187,   190,   178,   190,   222,   181,    31,    50,    21,   185,
      23,    24,    38,     5,    40,    50,    42,    48,   157,   158,
       5,   160,     5,     8,     5,   164,    50,     8,    48,    53,
     221,     5,   221,    46,   221,    50,     4,   213,    53,    52,
     231,   180,   231,   234,   231,   234,    48,   234,     5,   188,
      18,    19,    50,   229,   193,    53,   232,   196,     5,     6,
      49,     8,     5,     6,    50,     8,     5,     6,     6,     8,
      15,    16,     4,    49,    21,    48,    23,    24,    21,    49,
      23,    24,    21,   222,    23,    24,    18,    19,     5,    15,
      16,     8,    15,    16,    11,    12,    13,    14,    49,    46,
      49,     5,     6,    46,     8,    52,    48,    46,    49,    52,
       5,     5,     6,    52,     8,    49,    20,    21,    49,    23,
      24,     5,     6,    48,     8,     4,    20,    21,    32,    23,
      24,     5,     6,    51,     8,     5,    20,    21,    48,    23,
      24,    45,    46,    15,    16,    39,    20,    21,    48,    23,
      24,    45,    46,    15,    16,    39,     5,     5,     6,     6,
       8,    45,    46,    15,    16,    17,     5,     6,    51,    50,
      50,    45,    46,    21,     5,    23,    24,     8,     4,    17,
      11,    12,    13,    14,     5,     5,    50,     8,     4,    50,
      11,    12,    13,    14,     5,    51,    51,     8,    46,     4,
      11,    12,    13,    48,    48,    48,     5,    17,    48,    51,
       5,    52,    49,    48,    48,    22,    52,     5,    48,    48,
      52,    99,    28,    51,    28,    52,    50,    28,    51,    51,
     150,    50,   216
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    55,    65,     6,    66,    67,     0,    35,    70,
       5,     8,    34,    67,    49,    71,    72,    37,    56,     4,
      48,    48,     6,    50,    36,    72,    40,    42,    57,    58,
      61,    64,    67,    31,    77,     5,     8,    11,    12,    13,
      14,    68,    69,    88,    89,    50,     5,     5,     5,    38,
      58,    61,    64,    67,    78,    48,    15,    16,    15,    16,
       5,    49,    59,    62,     5,     6,    20,    21,    23,    24,
      45,    46,    69,    79,    80,    81,    82,    83,    84,    85,
      11,    12,    13,    69,    88,    89,    88,    89,    88,    89,
      88,    89,    49,    50,    60,    67,    63,    67,    72,    49,
       5,     8,    49,    49,    49,    49,    49,     6,     4,    18,
      19,    32,    80,    83,    84,    85,    48,    48,    48,     6,
      49,    50,    73,    74,    75,    51,    41,    67,    43,    67,
      72,    50,    73,     4,    14,    68,    69,    87,     5,     6,
      87,     5,     5,    68,    48,    48,     5,     6,    51,    50,
      53,    39,    52,    50,    68,    50,    50,    17,    17,    50,
       4,     5,    50,    50,     4,    50,    79,    51,    74,    75,
      48,    48,    48,    68,    69,    87,    68,    87,    51,    68,
       4,    51,    68,     5,    39,    79,    52,    80,    48,    68,
      80,    49,     5,    39,    52,    87,    48,    52,     6,    50,
      75,    76,    48,     5,    68,    22,    48,    87,    50,    53,
      52,    48,    48,    51,     5,    86,    48,     6,    75,    52,
      52,    80,     4,    18,    19,    50,    86,    52,    68,    51,
      50,    80,    51,    52,    80,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    59,    58,    60,    60,    62,    61,    63,    63,
      63,    63,    64,    64,    64,    65,    65,    66,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    72,    72,    72,    72,
      72,    73,    73,    73,    73,    73,    74,    75,    75,    76,
      76,    76,    76,    78,    77,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    82,
      83,    83,    83,    83,    83,    84,    84,    84,    84,    85,
      85,    85,    85,    85,    86,    86,    86,    87,    87,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     0,     1,     2,     1,     2,     1,
       2,     0,     0,     5,     1,     2,     0,     5,     1,     2,
       1,     2,     1,     2,     0,     3,     0,     1,     2,     0,
       3,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     1,     2,     0,     9,     7,    13,    12,
      13,     1,     3,     1,     0,     3,     2,     7,     6,     1,
       3,     1,     3,     0,     4,     1,     2,     0,     2,     2,
       3,     2,     3,     1,     1,     2,     0,     5,     5,     4,
       3,     2,     2,     3,     4,     2,     5,     4,     2,     7,
      11,    14,    13,     7,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1
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
#line 109 "my_lang.y"
                                                 {printf("The program is correct \n"); print_func_table();}
#line 1503 "y.tab.c"
    break;

  case 3: /* userdef_sec: USERDEF_START userdef USERDEF_END  */
#line 111 "my_lang.y"
                                                {printf("The userdef section is correct \n");}
#line 1509 "y.tab.c"
    break;

  case 5: /* userdef: userdef_vars  */
#line 114 "my_lang.y"
                       {printf("The userdef is correct \n");}
#line 1515 "y.tab.c"
    break;

  case 7: /* userdef: struct_def  */
#line 116 "my_lang.y"
              {printf("The userdef is correct \n");}
#line 1521 "y.tab.c"
    break;

  case 9: /* userdef: class_def  */
#line 118 "my_lang.y"
             {printf("The userdef is correct \n");}
#line 1527 "y.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 122 "my_lang.y"
                             {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1533 "y.tab.c"
    break;

  case 13: /* struct_def: STRUCT_START ID $@1 struct_vars STRUCT_END  */
#line 123 "my_lang.y"
{
  
printf("The struct is correct with the name %s \n",(yyvsp[-3].strval));
//add it to the var table
add_var((yyvsp[-3].strval), "struct", "default","global",false,0);
//print_var_table();
}
#line 1545 "y.tab.c"
    break;

  case 14: /* struct_vars: variable  */
#line 132 "my_lang.y"
                        {printf("The struct variable is correct \n");}
#line 1551 "y.tab.c"
    break;

  case 16: /* $@2: %empty  */
#line 137 "my_lang.y"
                           {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1557 "y.tab.c"
    break;

  case 17: /* class_def: CLASS_START ID $@2 class_info CLASS_END  */
#line 138 "my_lang.y"
{
  printf("The class is correct \n");
  //add it to the var table
  add_var((yyvsp[-3].strval), "class", "default","global",false,0);  
  //print_var_table();
}
#line 1568 "y.tab.c"
    break;

  case 18: /* class_info: variable  */
#line 147 "my_lang.y"
                      {printf("The class variable is correct \n");}
#line 1574 "y.tab.c"
    break;

  case 20: /* class_info: function  */
#line 149 "my_lang.y"
             {printf("The class function is correct \n");}
#line 1580 "y.tab.c"
    break;

  case 22: /* userdef_vars: variable  */
#line 152 "my_lang.y"
                         {printf("The userdef variable is correct \n");}
#line 1586 "y.tab.c"
    break;

  case 25: /* univ_sec: UNIVERSAL_START univ_vars UNIVERSAL_END  */
#line 157 "my_lang.y"
                                                  {printf("The universal section is correct \n");}
#line 1592 "y.tab.c"
    break;

  case 27: /* univ_vars: variable  */
#line 159 "my_lang.y"
                      {printf("The universal variable is correct \n");}
#line 1598 "y.tab.c"
    break;

  case 30: /* variable: TYPE ID ';'  */
#line 165 "my_lang.y"
        {
          
        add_var((yyvsp[-1].strval), (yyvsp[-2].strval), "default",curr_scope,false,0);
         //print_var_table();
         //printf("The var is correct \n");
         

        }
#line 1611 "y.tab.c"
    break;

  case 31: /* variable: TYPE ID ASSIGN rvalue ';'  */
#line 174 "my_lang.y"
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

          add_var((yyvsp[-3].strval), (yyvsp[-4].strval), (yyvsp[-1].lval),curr_scope,false,0);  
          //print_var_table();
        }
#line 1631 "y.tab.c"
    break;

  case 32: /* variable: TYPE ARRAY ';'  */
#line 190 "my_lang.y"
       {
          char *name = strtok((yyvsp[-1].strval), "[");
          char *size = strtok(NULL, "]");
          int size_int = atoi(size);
          add_var(name, (yyvsp[-2].strval), "",curr_scope,true,size_int);
          //print_var_table();
        }
#line 1643 "y.tab.c"
    break;

  case 33: /* rvalue: lvalue  */
#line 202 "my_lang.y"
        {
        
        //printf("The rvalue is correct found rvalue %s \n",$1); 
        (yyval.lval) = (struct lvalue*)getIDType((yyvsp[0].lval),curr_scope);
        //printf("the current scope is %s\n",curr_scope);
        
        }
#line 1655 "y.tab.c"
    break;

  case 34: /* rvalue: INTEGER  */
#line 210 "my_lang.y"
        {
          //printf("The rvalue of int  is %s correct \n",yytext);
          //set type and name for integer

          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "int");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));
          printf("the current scope is %s\n",curr_scope);
          strcpy((yyval.lval)->scope, curr_scope);
        }
#line 1671 "y.tab.c"
    break;

  case 35: /* rvalue: FLOAT  */
#line 222 "my_lang.y"
        {
          //printf("The rvalue of float is %s correct \n",yytext);
          
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "float");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));
          strcpy((yyval.lval)->scope, curr_scope);
          
          }
#line 1686 "y.tab.c"
    break;

  case 36: /* rvalue: BOOL  */
#line 232 "my_lang.y"
             {
          //printf("The rvalue of bool  is %s correct \n",yytext);
          
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "bool");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));
          strcpy((yyval.lval)->scope, curr_scope);
          }
#line 1700 "y.tab.c"
    break;

  case 37: /* rvalue: STRING  */
#line 242 "my_lang.y"
        {
          //printf("The rvalue of string is %s is correct \n",yytext);
          
       
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "string");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));   
          strcpy((yyval.lval)->scope, curr_scope);
        }
#line 1715 "y.tab.c"
    break;

  case 38: /* rvalue: math_statem  */
#line 254 "my_lang.y"
         {
          printf("The rvalue is correct \n");
          //eval the ast here and return the value
          int value = evalAst((struct node*)(yyvsp[0].node_ptr));
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "int");
          strcpy((yyval.lval)->name , "math");
          sprintf((yyval.lval)->value, "%d", value);
          strcpy((yyval.lval)->scope, curr_scope);
          printf("the scope is %s\n",(yyval.lval)->scope);
        
        }
#line 1732 "y.tab.c"
    break;

  case 39: /* lvalue: ID  */
#line 268 "my_lang.y"
          {
          //printf("The lvalue is correct found id %s \n",$1);
          //print_var_table();
          //printf("tthe type of $1 is %s\n",$1.type);
          
          //print_var_table();
          (yyval.lval) = getIDType((yyvsp[0].strval),curr_scope); //assign lvalue the value and id of the ID
          //printf("the lvalue value is %s\n",$$->value);
          if((yyval.lval) == NULL)
          {
            printf("The variable %s is not declared..\n",(yyvsp[0].strval));
            exit(1);
          }

          
          }
#line 1753 "y.tab.c"
    break;

  case 40: /* lvalue: ARRAY  */
#line 285 "my_lang.y"
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
              // struct element  curr_elem = curr_array->elements[index_int];
              // //return the value of the element
              // $$ = (struct lvalue*)malloc(sizeof(struct lvalue));
              // strcpy($$->type , curr_elem->type);
              // strcpy($$->name , curr_elem->name);
              // strcpy($$->value, curr_elem->value);
              
            }
           }
          }
#line 1802 "y.tab.c"
    break;

  case 41: /* func_sec: FUNCTIONS_START functions FUNCTIONS_END  */
#line 331 "my_lang.y"
                                                   {printf("The functions section is correct \n");}
#line 1808 "y.tab.c"
    break;

  case 46: /* function: '(' ')' ID '(' ')' '{' RETURN ';' '}'  */
#line 339 "my_lang.y"
{
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-6].strval), "", "", "function", 0);
  current_function_arguments = 0;
  printf("The function is correct \n");
}
#line 1819 "y.tab.c"
    break;

  case 47: /* function: '(' ')' ID '(' ')' '{' '}'  */
#line 347 "my_lang.y"
{
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-4].strval), "", "", "function", 0);
  current_function_arguments = 0;
  printf("The function is NOT correct \n");
}
#line 1830 "y.tab.c"
    break;

  case 48: /* function: '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN ID ';' '}'  */
#line 354 "my_lang.y"
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-9].strval), (yyvsp[-11].strval), (struct param_info*)(yyvsp[-7].arg_list), "function", current_function_arguments);
  current_function_arguments = 0;
  printf("The function is correct \n"); 
}
#line 1842 "y.tab.c"
    break;

  case 49: /* function: '(' TYPE ')' ID '(' ')' '{' instructions RETURN ID ';' '}'  */
#line 363 "my_lang.y"
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-8].strval), (yyvsp[-10].strval), "", "function", 0);
  current_function_arguments = 0;
  printf("The function is correct \n"); 
}
#line 1854 "y.tab.c"
    break;

  case 50: /* function: '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN rvalue ';' '}'  */
#line 371 "my_lang.y"
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-9].strval), (yyvsp[-11].strval), (struct param_info*)(yyvsp[-7].arg_list), "function", current_function_arguments);
  current_function_arguments = 0;
  printf("The function is correct \n"); 
}
#line 1866 "y.tab.c"
    break;

  case 51: /* arguments: variable_argument  */
#line 385 "my_lang.y"
{ 
  (yyval.arg_list)[current_function_arguments] = (struct param_info*)malloc(sizeof(struct param_info));
  // strcpy($$[current_function_arguments]->type,$1->type);
  // strcpy($$[current_function_arguments]->id, $1->id);
  // char temp[32];
  // strcpy(temp, $1->id);
  (yyval.arg_list)[current_function_arguments] = (yyvsp[0].arg);
  // printf("----------------------------temp = %s\n", temp); 
  current_function_arguments++;

  printf("----------------------------Acum afisam a\n");
  printf("----------------------------ID IN $1 IS: %s\n", (yyvsp[0].arg)->id);
  printf("----------------------------ID IN VAR_ARGUMENT IS: %s\n", (yyval.arg_list)[current_function_arguments]->id);
}
#line 1885 "y.tab.c"
    break;

  case 52: /* arguments: arguments ',' variable_argument  */
#line 400 "my_lang.y"
{
  (yyval.arg_list)[current_function_arguments] = (struct param_info*)malloc(sizeof(struct param_info));
  // strcpy($$[current_function_arguments]->type, $3->type);
  // strcpy($$[current_function_arguments]->id, $3->id);
  // char temp[32];
  // strcpy(temp, $3->id);
  (yyval.arg_list)[current_function_arguments] = (yyvsp[0].arg);
  // printf("----------------------------temp = %s\n", temp); 
  current_function_arguments++; 
  printf("----------------------------Acum afisam b\n");
  printf("----------------------------ID IN $3 IS: %s\n", (yyvsp[0].arg)->id);
  printf("----------------------------ID IN VAR_ARGUMENT IS: %s\n", (yyval.arg_list)[current_function_arguments]->id);
}
#line 1903 "y.tab.c"
    break;

  case 56: /* variable_argument: TYPE ID  */
#line 418 "my_lang.y"
{
  (yyval.arg) = (struct param_info*)malloc(sizeof(struct param_info));
  strcpy((yyval.arg)->type, (yyvsp[-1].strval)); 
  strcpy((yyval.arg)->id, (yyvsp[0].strval)); 
  
}
#line 1914 "y.tab.c"
    break;

  case 63: /* $@3: %empty  */
#line 435 "my_lang.y"
                      {strcpy(curr_scope,"main");}
#line 1920 "y.tab.c"
    break;

  case 64: /* main_sec: MAIN_START $@3 instructions MAIN_END  */
#line 435 "my_lang.y"
                                                                         {printf("The main section is correct \n");}
#line 1926 "y.tab.c"
    break;

  case 65: /* instructions: instruction  */
#line 437 "my_lang.y"
                           {printf("The instruction is correct \n");}
#line 1932 "y.tab.c"
    break;

  case 77: /* print: PRINT '(' STRING ')' ';'  */
#line 454 "my_lang.y"
{ 
  printf("the strinf is %s \n",(yyvsp[-2].strval));
  printf("[OUTPUT]: %s \n",(yyvsp[-2].strval));
}
#line 1941 "y.tab.c"
    break;

  case 78: /* print: PRINT '(' rvalue ')' ';'  */
#line 459 "my_lang.y"
  {
    printf("[OUTPUT]: %s \n",(yyvsp[-2].lval)->value);
  }
#line 1949 "y.tab.c"
    break;

  case 79: /* typeof: TYPEOF '(' ID ')'  */
#line 466 "my_lang.y"
{
  //check if the variable is declared
  if(!is_declared_global((yyvsp[-1].strval)) && !is_declared((yyvsp[-1].strval),"main") )
  {
    printf("[OUTPUT]: The variable %s is not declared \n",(yyvsp[-1].strval));
    exit(1);
  }
  
  else
  {
    print_var_table();
    //get the type of the variable
    char *type = get_type((yyvsp[-1].strval),"global");
    if (type == NULL)
    {
      printf("global\n");
      type = get_type((yyvsp[-1].strval),"main");
    }
    printf("[OUTPUT]: The type of %s is %s \n",(yyvsp[-1].strval), type);
  }

}
#line 1976 "y.tab.c"
    break;

  case 80: /* statement: lvalue ASSIGN rvalue  */
#line 491 "my_lang.y"
           {
            
            if(is_const((yyvsp[-2].lval)->name,(yyvsp[-2].lval)->scope))
            {
              printf("[ERROR] line: %d the variable %s is const...\n",yylineno,(yyvsp[-2].lval)->name);
              exit(1);
            }

            if(!same_type((yyvsp[-2].lval)->type,(yyvsp[0].lval)->type))
            {
              printf("[ERROR] line: %d not the same type...\n",yylineno);
              exit(1);
            }

            //call a function to update val in the symbol table 
            //printf("the name is %s\n",$1->name);
            
            update_val((yyvsp[-2].lval)->name,(yyvsp[-2].lval)->scope ,(yyvsp[0].lval)->value);
            printf("The statement is correct \n");
            print_var_table();
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
#line 2016 "y.tab.c"
    break;

  case 81: /* statement: lvalue INC  */
#line 528 "my_lang.y"
           {

            if(is_const((yyvsp[-1].lval)->name,(yyvsp[-1].lval)->scope))
            {
              printf("[ERROR] line: %d the variable %s is const...\n",yylineno,(yyvsp[-1].lval)->name);
              exit(1);
            }

            if(!same_type((yyvsp[-1].lval)->type,"int")) 
            {
              printf("[ERROR] not the same type...\n");
              exit(1);
            }
           
            //call a function to update val in the symbol table
            int int_val = atoi((yyvsp[-1].lval)->value);
           // printf("the new val is %d\n",int_val);
            int_val++;
            char *new_val = (char*)malloc(sizeof(char)*10);
            sprintf(new_val,"%d",int_val);
            update_val((yyvsp[-1].lval)->name,(yyvsp[-1].lval)->scope ,new_val); 
            //update_val($1->name,$1->scope ,$1->value+1);
            //printf("The statement is correct \n");
            print_var_table();
           }
#line 2046 "y.tab.c"
    break;

  case 82: /* statement: lvalue DEC  */
#line 555 "my_lang.y"
           {
            if(is_const((yyvsp[-1].lval)->name,(yyvsp[-1].lval)->scope))
            {
              printf("[ERROR] line: %d the variable %s is const...\n",yylineno,(yyvsp[-1].lval)->name);
              exit(1);
            }

           if(!same_type((yyvsp[-1].lval)->type,"int")) 
            {
              printf("[ERROR] not the same type...\n");
              exit(1);
            }
           
            //call a function to update val in the symbol table
            int int_val = atoi((yyvsp[-1].lval)->value);
           // printf("the new val is %d\n",int_val);
            int_val--;
            char *new_val = (char*)malloc(sizeof(char)*10);
            sprintf(new_val,"%d",int_val);
            update_val((yyvsp[-1].lval)->name,(yyvsp[-1].lval)->scope ,new_val); 
            //update_val($1->name,$1->scope ,$1->value+1);
            //printf("The statement is correct \n");
            print_var_table();

           }
#line 2076 "y.tab.c"
    break;

  case 83: /* statement: ID '(' ')'  */
#line 582 "my_lang.y"
           {
            printf("The statement is correct \n"); //call a function with no arguments
           }
#line 2084 "y.tab.c"
    break;

  case 84: /* statement: ID '(' arguments ')'  */
#line 586 "my_lang.y"
           {
            printf("The statement is correct \n");
           }
#line 2092 "y.tab.c"
    break;

  case 85: /* declaration: TYPE ID  */
#line 591 "my_lang.y"
            {  
              //if it's not declared 
              
              if(!is_declared_global((yyvsp[0].strval)) && !is_declared((yyvsp[0].strval),"main"))
              {
                //add it to the symbol table
                add_var((yyvsp[0].strval), (yyvsp[-1].strval),"default",curr_scope,false,0);
                //print_var_table();
                //save_var_table();
              }
              else
              {
                printf("[ERROR] line: %d The variable %s is already declared \n",yylineno,(yyvsp[0].strval));
                exit(1);
              } 
              //printf("The declaration is correct \n");
             
             
            }
#line 2116 "y.tab.c"
    break;

  case 86: /* declaration: CONST TYPE ID ASSIGN rvalue  */
#line 611 "my_lang.y"
            {
              printf("The declaration is correct \n");
                char type[10] = "const ";
                strcat(type,(yyvsp[-3].strval));

              add_var((yyvsp[-2].strval), type,(yyvsp[0].lval)->value,curr_scope,false,0); //incompatible type for $4
              printf("value added\n");
            }
#line 2129 "y.tab.c"
    break;

  case 87: /* declaration: TYPE ID ASSIGN rvalue  */
#line 620 "my_lang.y"
             {
              //if rvalue type is not the same as type 
              if(!same_type((yyvsp[-3].strval),(yyvsp[0].lval)->type))
              {
                printf("[ERROR] line: %d not the same type...\n",yylineno);
                exit(1);
              }

              printf("The declaration is correct \n");
            
              add_var((yyvsp[-2].strval), (yyvsp[-3].strval),(yyvsp[0].lval)->value,curr_scope,false,0); //incompatible type for $4
              printf("value added\n");
              //print_var_table();
             }
#line 2148 "y.tab.c"
    break;

  case 88: /* declaration: TYPE ARRAY  */
#line 635 "my_lang.y"
             {
              printf("The declaration is correct \n");
              char *id = strtok((yyvsp[0].strval), "["); //int a[10]
              char *size = strtok(NULL, "]");
              int arr_size = atoi(size);
              //printf("the size is %s \n", size);
              add_var(id, (yyvsp[-1].strval),"",curr_scope,true,arr_size);
             }
#line 2161 "y.tab.c"
    break;

  case 89: /* control_instruction: IF '(' condition ')' '{' instruction '}'  */
#line 647 "my_lang.y"
{
  printf("The if instruction is correct \n");
}
#line 2169 "y.tab.c"
    break;

  case 90: /* control_instruction: IF '(' condition ')' '{' instruction '}' ELSE '{' instruction '}'  */
#line 651 "my_lang.y"
 {
  printf("The if-else instruction is correct \n");
 }
#line 2177 "y.tab.c"
    break;

  case 91: /* control_instruction: FOR '(' TYPE ID ASSIGN rvalue ';' condition ';' for_increment ')' '{' instruction '}'  */
#line 656 "my_lang.y"
{
  printf("The for instruction is correct \n");
  //check if the value in condition is the same as ID 

}
#line 2187 "y.tab.c"
    break;

  case 92: /* control_instruction: FOR '(' ID ASSIGN rvalue ';' condition ';' for_increment ')' '{' instruction '}'  */
#line 662 "my_lang.y"
{
  printf("The for instruction is correct \n");
}
#line 2195 "y.tab.c"
    break;

  case 93: /* control_instruction: WHILE '(' condition ')' '{' instruction '}'  */
#line 666 "my_lang.y"
{
  printf("The while instruction is correct \n");
}
#line 2203 "y.tab.c"
    break;

  case 94: /* for_increment: ID ASSIGN rvalue  */
#line 672 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2211 "y.tab.c"
    break;

  case 95: /* for_increment: ID INC  */
#line 675 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2219 "y.tab.c"
    break;

  case 96: /* for_increment: ID DEC  */
#line 678 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2227 "y.tab.c"
    break;

  case 97: /* condition: lvalue OP_LOGIC rvalue  */
#line 684 "my_lang.y"
{
  printf("The condition is correct here  \n");
  //check if the types are the same and if they are declared
  if(strcmp(get_type((yyvsp[-2].lval),"global"),get_type((yyvsp[0].lval),"global")) != 0)
  {
    printf("[ERROR] : The types are not the same \n");
    exit(1);
  }
  else if(strcmp(get_type((yyvsp[-2].lval),"main"),get_type((yyvsp[0].lval),"main")) != 0)
  {
    printf("[ERROR] : The types are not the same \n");
    exit(1);
  }
  
  

;}
#line 2249 "y.tab.c"
    break;

  case 98: /* condition: condition OP_LOGIC condition  */
#line 702 "my_lang.y"
 {
  //printf("The condition is correct \n");
 }
#line 2257 "y.tab.c"
    break;

  case 99: /* condition: condition OP_LOGIC rvalue  */
#line 706 "my_lang.y"
 {
    //printf("The condition is correct \n");
 }
#line 2265 "y.tab.c"
    break;

  case 100: /* condition: lvalue OP_LOGIC condition  */
#line 710 "my_lang.y"
  {
    //printf("The condition is correct \n");
  }
#line 2273 "y.tab.c"
    break;

  case 101: /* math_statem: math_statem OP_MATH1 math_val  */
#line 720 "my_lang.y"
            {

             
             //add a node into AST 
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,(yyvsp[-1].strval));
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);

            }
#line 2289 "y.tab.c"
    break;

  case 102: /* math_statem: math_statem OP_MATH2 math_val  */
#line 732 "my_lang.y"
            {
           // printf("The math statement is correct \n");
            struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,(yyvsp[-1].strval));
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2302 "y.tab.c"
    break;

  case 103: /* math_statem: math_val OP_MATH1 math_statem  */
#line 741 "my_lang.y"
            {
               //printf("math state here \n");
             //printf("The math statement is correct \n");
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,(yyvsp[-1].strval));
             printf("The value of $2 is %s \n",'+');
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2317 "y.tab.c"
    break;

  case 104: /* math_statem: math_val OP_MATH2 math_statem  */
#line 752 "my_lang.y"
            {
             //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,(yyvsp[-1].strval));
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2330 "y.tab.c"
    break;

  case 105: /* math_statem: math_val OP_MATH1 math_val  */
#line 761 "my_lang.y"
            {
              printf("the op is %s\n",(yyvsp[-2].node_ptr));
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             
             printf("The value of $1 is %s and type is %d \n",(yyvsp[-2].node_ptr)->value,(yyvsp[-2].node_ptr)->type);
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2345 "y.tab.c"
    break;

  case 106: /* math_statem: math_statem OP_MATH1 math_statem  */
#line 772 "my_lang.y"
            {
              //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,(yyvsp[-1].strval));
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2358 "y.tab.c"
    break;

  case 107: /* math_statem: math_statem OP_MATH2 math_statem  */
#line 781 "my_lang.y"
            { 
              
             // printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,(yyvsp[-1].strval));
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2372 "y.tab.c"
    break;

  case 108: /* math_statem: math_val OP_MATH2 math_val  */
#line 791 "my_lang.y"
            {

              //printf("the op is %s\n",$2);
             // printf("The ma  th statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2387 "y.tab.c"
    break;

  case 109: /* math_val: lvalue  */
#line 804 "my_lang.y"
          {
            
            struct node* root = malloc(sizeof(struct node));
            if(strcmp((yyvsp[0].lval)->type,"int")==0)
            { 
              
              strcpy(root->value,(yyvsp[0].lval)->value);
            }

            else 
            {
              strcpy(root->value,(yyvsp[0].lval)->value);
            }
            
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
          
          }
#line 2409 "y.tab.c"
    break;

  case 110: /* math_val: INTEGER  */
#line 822 "my_lang.y"
          {
            printf("The math value is INT  \n");
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,(yyvsp[0].strval));
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            
          }
#line 2421 "y.tab.c"
    break;

  case 111: /* math_val: FLOAT  */
#line 830 "my_lang.y"
          {
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,"0");
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            //printf("The math value is correct \n");
          }
#line 2432 "y.tab.c"
    break;

  case 112: /* math_val: BOOL  */
#line 837 "my_lang.y"
          {
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,"0");
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            //printf("The math value is correct \n");
          }
#line 2443 "y.tab.c"
    break;


#line 2447 "y.tab.c"

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

#line 849 "my_lang.y"

// c code part 
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}
//can declare c functions here 


int main(int argc, char** argv){
yyin=fopen(argv[1],"r"); // if we want to parse a file instead of the standard input 
var_table_file = fopen("symbol_table.txt","w");
//save the function table as well

yyparse();
save_var_table();
fclose(var_table_file);
} 

