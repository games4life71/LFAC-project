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
    MINUS = 258,                   /* MINUS  */
    CLASS = 259,                   /* CLASS  */
    ASSIGN = 260,                  /* ASSIGN  */
    ID = 261,                      /* ID  */
    TYPE = 262,                    /* TYPE  */
    COMPOSITE = 263,               /* COMPOSITE  */
    ARRAY = 264,                   /* ARRAY  */
    CONSTANT = 265,                /* CONSTANT  */
    COMPOSITE_ARRAY = 266,         /* COMPOSITE_ARRAY  */
    INTEGER = 267,                 /* INTEGER  */
    FLOAT = 268,                   /* FLOAT  */
    BOOL = 269,                    /* BOOL  */
    STRING = 270,                  /* STRING  */
    OP_MATH1 = 271,                /* OP_MATH1  */
    OP_MATH2 = 272,                /* OP_MATH2  */
    OP_LOGIC = 273,                /* OP_LOGIC  */
    INC = 274,                     /* INC  */
    DEC = 275,                     /* DEC  */
    PRINT = 276,                   /* PRINT  */
    IF = 277,                      /* IF  */
    ELSE = 278,                    /* ELSE  */
    FOR = 279,                     /* FOR  */
    WHILE = 280,                   /* WHILE  */
    SWITCH = 281,                  /* SWITCH  */
    CASE = 282,                    /* CASE  */
    BREAK = 283,                   /* BREAK  */
    NUM = 284,                     /* NUM  */
    SPACE = 285,                   /* SPACE  */
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
    CONST = 301                    /* CONST  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define MINUS 258
#define CLASS 259
#define ASSIGN 260
#define ID 261
#define TYPE 262
#define COMPOSITE 263
#define ARRAY 264
#define CONSTANT 265
#define COMPOSITE_ARRAY 266
#define INTEGER 267
#define FLOAT 268
#define BOOL 269
#define STRING 270
#define OP_MATH1 271
#define OP_MATH2 272
#define OP_LOGIC 273
#define INC 274
#define DEC 275
#define PRINT 276
#define IF 277
#define ELSE 278
#define FOR 279
#define WHILE 280
#define SWITCH 281
#define CASE 282
#define BREAK 283
#define NUM 284
#define SPACE 285
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

#line 250 "y.tab.c"

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
  YYSYMBOL_MINUS = 3,                      /* MINUS  */
  YYSYMBOL_CLASS = 4,                      /* CLASS  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_ID = 6,                         /* ID  */
  YYSYMBOL_TYPE = 7,                       /* TYPE  */
  YYSYMBOL_COMPOSITE = 8,                  /* COMPOSITE  */
  YYSYMBOL_ARRAY = 9,                      /* ARRAY  */
  YYSYMBOL_CONSTANT = 10,                  /* CONSTANT  */
  YYSYMBOL_COMPOSITE_ARRAY = 11,           /* COMPOSITE_ARRAY  */
  YYSYMBOL_INTEGER = 12,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 13,                     /* FLOAT  */
  YYSYMBOL_BOOL = 14,                      /* BOOL  */
  YYSYMBOL_STRING = 15,                    /* STRING  */
  YYSYMBOL_OP_MATH1 = 16,                  /* OP_MATH1  */
  YYSYMBOL_OP_MATH2 = 17,                  /* OP_MATH2  */
  YYSYMBOL_OP_LOGIC = 18,                  /* OP_LOGIC  */
  YYSYMBOL_INC = 19,                       /* INC  */
  YYSYMBOL_DEC = 20,                       /* DEC  */
  YYSYMBOL_PRINT = 21,                     /* PRINT  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_SWITCH = 26,                    /* SWITCH  */
  YYSYMBOL_CASE = 27,                      /* CASE  */
  YYSYMBOL_BREAK = 28,                     /* BREAK  */
  YYSYMBOL_NUM = 29,                       /* NUM  */
  YYSYMBOL_SPACE = 30,                     /* SPACE  */
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
  YYSYMBOL_47_ = 47,                       /* '+'  */
  YYSYMBOL_48_ = 48,                       /* '*'  */
  YYSYMBOL_49_ = 49,                       /* '/'  */
  YYSYMBOL_50_ = 50,                       /* ';'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '{'  */
  YYSYMBOL_54_ = 54,                       /* '}'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_userdef_sec = 58,               /* userdef_sec  */
  YYSYMBOL_userdef = 59,                   /* userdef  */
  YYSYMBOL_struct_def = 60,                /* struct_def  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_struct_vars = 62,               /* struct_vars  */
  YYSYMBOL_class_def = 63,                 /* class_def  */
  YYSYMBOL_64_2 = 64,                      /* $@2  */
  YYSYMBOL_class_info = 65,                /* class_info  */
  YYSYMBOL_userdef_vars = 66,              /* userdef_vars  */
  YYSYMBOL_univ_sec = 67,                  /* univ_sec  */
  YYSYMBOL_univ_vars = 68,                 /* univ_vars  */
  YYSYMBOL_variable = 69,                  /* variable  */
  YYSYMBOL_rvalue = 70,                    /* rvalue  */
  YYSYMBOL_lvalue = 71,                    /* lvalue  */
  YYSYMBOL_func_sec = 72,                  /* func_sec  */
  YYSYMBOL_functions = 73,                 /* functions  */
  YYSYMBOL_function = 74,                  /* function  */
  YYSYMBOL_75_3 = 75,                      /* $@3  */
  YYSYMBOL_76_4 = 76,                      /* $@4  */
  YYSYMBOL_77_5 = 77,                      /* $@5  */
  YYSYMBOL_arguments = 78,                 /* arguments  */
  YYSYMBOL_variable_argument = 79,         /* variable_argument  */
  YYSYMBOL_function_argument = 80,         /* function_argument  */
  YYSYMBOL_function_argument_params = 81,  /* function_argument_params  */
  YYSYMBOL_main_sec = 82,                  /* main_sec  */
  YYSYMBOL_83_6 = 83,                      /* $@6  */
  YYSYMBOL_instructions = 84,              /* instructions  */
  YYSYMBOL_instruction = 85,               /* instruction  */
  YYSYMBOL_print = 86,                     /* print  */
  YYSYMBOL_typeof = 87,                    /* typeof  */
  YYSYMBOL_statement = 88,                 /* statement  */
  YYSYMBOL_declaration = 89,               /* declaration  */
  YYSYMBOL_control_instruction = 90,       /* control_instruction  */
  YYSYMBOL_for_increment = 91,             /* for_increment  */
  YYSYMBOL_condition = 92,                 /* condition  */
  YYSYMBOL_math_statem = 93,               /* math_statem  */
  YYSYMBOL_math_val = 94                   /* math_val  */
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
typedef yytype_int16 yy_state_t;

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
#define YYLAST   382

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

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
      51,    52,    48,    47,    55,     2,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   108,   108,   110,   110,   113,   114,   115,   116,   117,
     118,   119,   121,   121,   131,   132,   136,   136,   146,   147,
     148,   149,   151,   152,   153,   156,   156,   158,   159,   160,
     163,   172,   188,   200,   208,   220,   231,   240,   252,   266,
     283,   337,   337,   339,   340,   341,   344,   344,   352,   352,
     359,   369,   369,   377,   392,   407,   421,   422,   422,   425,
     433,   434,   437,   438,   439,   440,   443,   443,   445,   446,
     447,   450,   451,   452,   453,   454,   455,   456,   457,   457,
     461,   466,   473,   499,   536,   563,   590,   594,   599,   619,
     628,   643,   655,   659,   664,   670,   674,   680,   683,   686,
     692,   707,   711,   715,   719,   729,   742,   755,   765,   777,
     789,   803,   814,   825,   837,   849,   859,   871,   882,   892,
     904,   916,   934,   942,   949
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
  "\"end of file\"", "error", "\"invalid token\"", "MINUS", "CLASS",
  "ASSIGN", "ID", "TYPE", "COMPOSITE", "ARRAY", "CONSTANT",
  "COMPOSITE_ARRAY", "INTEGER", "FLOAT", "BOOL", "STRING", "OP_MATH1",
  "OP_MATH2", "OP_LOGIC", "INC", "DEC", "PRINT", "IF", "ELSE", "FOR",
  "WHILE", "SWITCH", "CASE", "BREAK", "NUM", "SPACE", "MAIN_START",
  "MAIN_END", "UNIVERSAL_START", "UNIVERSAL_END", "FUNCTIONS_START",
  "FUNCTIONS_END", "USERDEF_START", "USERDEF_END", "RETURN",
  "STRUCT_START", "STRUCT_END", "CLASS_START", "CLASS_END", "DEFAULT",
  "TYPEOF", "CONST", "'+'", "'*'", "'/'", "';'", "'('", "')'", "'{'",
  "'}'", "','", "$accept", "program", "userdef_sec", "userdef",
  "struct_def", "$@1", "struct_vars", "class_def", "$@2", "class_info",
  "userdef_vars", "univ_sec", "univ_vars", "variable", "rvalue", "lvalue",
  "func_sec", "functions", "function", "$@3", "$@4", "$@5", "arguments",
  "variable_argument", "function_argument", "function_argument_params",
  "main_sec", "$@6", "instructions", "instruction", "print", "typeof",
  "statement", "declaration", "control_instruction", "for_increment",
  "condition", "math_statem", "math_val", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-164)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -28,     7,    81,    53,    16,   198,  -164,  -164,    72,    60,
       2,    82,  -164,  -164,     5,    59,  -164,    69,   112,   261,
    -164,  -164,   101,   161,  -164,  -164,   167,   190,    87,  -164,
    -164,     7,  -164,  -164,  -164,  -164,  -164,    67,    94,    97,
    -164,   111,   110,   151,   155,   206,  -164,  -164,  -164,  -164,
    -164,  -164,     7,  -164,   247,  -164,   277,   277,   277,   277,
     277,   277,   277,   277,   188,   189,   191,     7,     4,   192,
     139,   193,   196,   200,   214,   215,   234,     8,   204,   273,
    -164,   205,   207,   212,  -164,  -164,  -164,  -164,  -164,   -25,
     -18,   -25,   -18,  -164,  -164,  -164,  -164,   -25,   -18,   -25,
     -18,  -164,  -164,  -164,  -164,    19,   226,   229,   235,    12,
    -164,    22,  -164,  -164,    10,   283,  -164,   290,   261,   201,
     261,   288,   294,   261,  -164,  -164,  -164,   273,   251,   257,
    -164,  -164,  -164,  -164,   302,   303,   -34,  -164,  -164,   259,
     263,   265,  -164,  -164,  -164,  -164,  -164,  -164,   154,   261,
     284,   285,   299,   133,   -16,   333,   334,   134,   287,   336,
    -164,  -164,  -164,  -164,   291,   289,    19,   292,   305,   293,
    -164,  -164,   296,   298,   261,   261,   261,   297,   261,   344,
     301,  -164,   261,   345,   247,  -164,  -164,   247,   306,  -164,
    -164,  -164,   335,   299,   335,   299,   335,   247,   307,   261,
     247,  -164,   304,   213,   239,   308,    26,   261,   309,    62,
      27,   300,   346,  -164,   337,    46,   261,  -164,  -164,  -164,
    -164,   162,   311,   313,   314,   312,   352,   177,  -164,    38,
     315,   316,   317,   247,   211,   320,   352,  -164,  -164,  -164,
    -164,  -164,    68,   261,  -164,  -164,   321,   323,  -164,  -164,
     247,   324,    96,   247,  -164,   169,  -164
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      26,    29,     0,    42,     0,     0,    27,     1,    45,     4,
       0,     0,    25,    28,     0,     0,    43,    11,     0,     0,
      30,    32,     0,     0,    41,    44,     0,     0,     0,     7,
       9,     5,    22,    66,     2,    39,    40,   122,   123,   124,
      37,     0,   121,    38,     0,     0,    46,    12,    16,     3,
       8,    10,     6,    23,    70,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      77,     0,     0,     0,    76,   122,   123,   124,   121,   116,
     106,   115,   105,   117,   107,   118,   108,   110,   114,   109,
     113,   111,   119,   112,   120,    57,     0,     0,     0,     0,
      14,     0,    18,    20,    57,    88,    91,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    67,    69,     0,     0,
      78,    72,    71,    74,     0,     0,     0,    54,    56,     0,
       0,     0,    13,    15,    17,    19,    21,    86,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
      83,    73,    75,    59,     0,     0,     0,     0,     0,     0,
      87,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,    70,    55,    58,    70,     0,    49,
      80,    81,   104,   100,   103,   102,   101,    79,     0,     0,
      79,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    92,     0,     0,    96,    62,    61,
      64,     0,    39,     0,     0,     0,     0,     0,    60,     0,
       0,     0,     0,    79,     0,     0,     0,    63,    65,    50,
      53,    52,     0,     0,    98,    99,     0,     0,    93,    97,
      79,     0,     0,    79,    95,     0,    94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,  -164,   338,  -164,  -164,   339,  -164,  -164,
     340,  -164,  -164,    15,   -10,   -19,  -164,  -164,    -5,  -164,
    -164,  -164,   262,   216,  -163,  -164,  -164,  -164,    34,   -63,
    -164,  -164,   -78,   -73,   -71,   137,  -116,   264,   272
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    18,    28,    29,    67,   109,    30,    68,   111,
      31,     3,     5,    32,   152,    77,     9,    15,    16,    65,
      66,   106,   136,   137,   138,   221,    34,    54,    78,    79,
      80,    81,    82,    83,    84,   235,   154,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   128,   176,   186,   157,     1,   129,    19,   130,    41,
      25,     4,    22,   123,     4,   127,     6,   134,   165,     4,
      13,   166,    10,    58,    59,    11,   134,   124,   125,     4,
      62,    63,    69,    70,   218,    36,   177,    88,    88,    88,
      88,    88,    88,    88,    88,   237,    53,   220,    72,   128,
      73,    74,    20,   142,   129,    14,   130,    23,   192,   194,
     196,   135,   147,   113,   176,   144,   238,    53,    69,    70,
     135,    36,    76,    14,    69,    70,     4,    36,   135,   219,
     214,     7,   110,   112,    72,   -34,    73,    74,     8,   135,
      72,   215,    73,    74,     4,    24,   226,    17,    42,   153,
     227,   153,    69,    70,    42,    36,   146,   151,    76,    26,
      14,    27,   -35,   160,    76,   -36,   217,   -34,    72,   -34,
      73,    74,   248,    14,   143,    49,   145,    26,   128,    27,
      42,   128,    21,   129,   206,   130,   129,   209,   130,   171,
     127,   127,    76,    33,   -35,   115,   -35,   -36,   116,   -36,
     254,   175,   176,    45,    56,   153,   153,   153,    60,    42,
     -33,    55,   -33,    42,   128,   193,   195,    46,   198,   129,
     242,   130,   201,    47,   128,    69,    70,   128,    36,   129,
      42,   130,   129,   -33,   130,   -33,   180,   252,   153,   208,
     255,    72,    42,    73,    74,   176,    48,   153,    57,    58,
      59,   223,    61,    62,    63,     4,   170,   155,   156,   166,
      69,    70,    64,    36,   228,    76,   243,   229,   203,    69,
      70,   204,    36,   256,    42,    71,    72,   236,    73,    74,
     244,   245,    12,   249,    71,    72,   126,    73,    74,   105,
     107,   122,   108,   114,   117,    69,    70,   118,    36,    75,
      76,   119,   211,    69,    70,   131,    36,   132,    75,    76,
      71,    72,   133,    73,    74,   120,   121,    35,    71,    72,
      36,    73,    74,    37,    38,    39,    40,   139,   212,    69,
      70,   140,    36,    35,    75,    76,    36,   141,   149,    85,
      86,    87,    75,    76,   158,    72,    35,    73,    74,    36,
     159,   161,    37,    38,    39,   150,   222,   162,   163,    36,
     164,   167,    37,    38,    39,    40,   168,   174,   169,    76,
      89,    91,    93,    95,    97,    99,   101,   103,    90,    92,
      94,    96,    98,   100,   102,   104,   172,   173,   178,   181,
     179,   182,   184,   183,   188,   187,   190,   189,   191,   199,
     197,   202,   224,   176,   200,   210,   205,   207,   234,   216,
     225,   230,   213,   231,   232,   233,    50,    51,    52,   239,
     240,   241,   246,   247,   250,   251,   148,   253,     0,     0,
       0,     0,   185
};

static const yytype_int16 yycheck[] =
{
      19,    79,    18,   166,   120,    33,    79,     5,    79,    19,
      15,     7,     7,     5,     7,    78,     1,     7,    52,     7,
       5,    55,     6,    48,    49,     9,     7,    19,    20,     7,
      48,    49,     6,     7,     7,     9,    52,    56,    57,    58,
      59,    60,    61,    62,    63,     7,    31,   210,    22,   127,
      24,    25,    50,    41,   127,    51,   127,    52,   174,   175,
     176,    51,    52,    68,    18,    43,   229,    52,     6,     7,
      51,     9,    46,    51,     6,     7,     7,     9,    51,    52,
      54,     0,    67,    68,    22,    18,    24,    25,    35,    51,
      22,   207,    24,    25,     7,    36,    50,    37,   117,   118,
     216,   120,     6,     7,   123,     9,   111,   117,    46,    40,
      51,    42,    18,   123,    46,    18,    54,    50,    22,    52,
      24,    25,    54,    51,   109,    38,   111,    40,   206,    42,
     149,   209,    50,   206,   197,   206,   209,   200,   209,   149,
     203,   204,    46,    31,    50,     6,    52,    50,     9,    52,
      54,    18,    18,    52,     3,   174,   175,   176,     3,   178,
      50,    50,    52,   182,   242,   175,   176,     6,   178,   242,
     233,   242,   182,     6,   252,     6,     7,   255,     9,   252,
     199,   252,   255,    50,   255,    52,    52,   250,   207,   199,
     253,    22,   211,    24,    25,    18,     6,   216,    47,    48,
      49,   211,    47,    48,    49,     7,    52,     6,     7,    55,
       6,     7,     6,     9,    52,    46,     5,    55,   184,     6,
       7,   187,     9,    54,   243,    21,    22,    50,    24,    25,
      19,    20,    34,   243,    21,    22,    32,    24,    25,    51,
      51,     7,    51,    51,    51,     6,     7,    51,     9,    45,
      46,    51,    39,     6,     7,    50,     9,    50,    45,    46,
      21,    22,    50,    24,    25,    51,    51,     6,    21,    22,
       9,    24,    25,    12,    13,    14,    15,    51,    39,     6,
       7,    52,     9,     6,    45,    46,     9,    52,     5,    12,
      13,    14,    45,    46,     6,    22,     6,    24,    25,     9,
       6,    50,    12,    13,    14,    15,     6,    50,     6,     9,
       7,    52,    12,    13,    14,    15,    53,    18,    53,    46,
      56,    57,    58,    59,    60,    61,    62,    63,    56,    57,
      58,    59,    60,    61,    62,    63,    52,    52,     5,    52,
       6,     5,    53,    52,    39,    53,    50,    54,    50,     5,
      53,     6,     6,    18,    53,    51,    50,    50,     6,    50,
      23,    50,    54,    50,    50,    53,    28,    28,    28,    54,
      54,    54,    52,   236,    53,    52,   114,    53,    -1,    -1,
      -1,    -1,   166
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    57,    67,     7,    68,    69,     0,    35,    72,
       6,     9,    34,    69,    51,    73,    74,    37,    58,     5,
      50,    50,     7,    52,    36,    74,    40,    42,    59,    60,
      63,    66,    69,    31,    82,     6,     9,    12,    13,    14,
      15,    70,    71,    93,    94,    52,     6,     6,     6,    38,
      60,    63,    66,    69,    83,    50,     3,    47,    48,    49,
       3,    47,    48,    49,     6,    75,    76,    61,    64,     6,
       7,    21,    22,    24,    25,    45,    46,    71,    84,    85,
      86,    87,    88,    89,    90,    12,    13,    14,    71,    93,
      94,    93,    94,    93,    94,    93,    94,    93,    94,    93,
      94,    93,    94,    93,    94,    51,    77,    51,    51,    62,
      69,    65,    69,    74,    51,     6,     9,    51,    51,    51,
      51,    51,     7,     5,    19,    20,    32,    85,    88,    89,
      90,    50,    50,    50,     7,    51,    78,    79,    80,    51,
      52,    52,    41,    69,    43,    69,    74,    52,    78,     5,
      15,    70,    70,    71,    92,     6,     7,    92,     6,     6,
      70,    50,    50,     6,     7,    52,    55,    52,    53,    53,
      52,    70,    52,    52,    18,    18,    18,    52,     5,     6,
      52,    52,     5,    52,    53,    79,    80,    53,    39,    54,
      50,    50,    92,    70,    92,    70,    92,    53,    70,     5,
      53,    70,     6,    84,    84,    50,    85,    50,    70,    85,
      51,    39,    39,    54,    54,    92,    50,    54,     7,    52,
      80,    81,     6,    70,     6,    23,    50,    92,    52,    55,
      50,    50,    50,    53,     6,    91,    50,     7,    80,    54,
      54,    54,    85,     5,    19,    20,    52,    91,    54,    70,
      53,    52,    85,    53,    54,    85,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    61,    60,    62,    62,    64,    63,    65,    65,
      65,    65,    66,    66,    66,    67,    67,    68,    68,    68,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    72,    72,    73,    73,    73,    75,    74,    76,    74,
      74,    77,    74,    74,    78,    78,    78,    78,    78,    79,
      80,    80,    81,    81,    81,    81,    83,    82,    84,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    91,    91,    91,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     0,     1,     2,     1,     2,     1,
       2,     0,     0,     5,     1,     2,     0,     5,     1,     2,
       1,     2,     1,     2,     0,     3,     0,     1,     2,     0,
       3,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     1,     2,     0,     0,    10,     0,     8,
      13,     0,    13,    13,     1,     3,     1,     0,     3,     2,
       7,     6,     1,     3,     1,     3,     0,     4,     1,     2,
       0,     2,     2,     3,     2,     3,     1,     1,     2,     0,
       5,     5,     4,     3,     2,     2,     3,     4,     2,     5,
       4,     2,     7,    11,    14,    13,     7,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1
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
#line 108 "my_lang.y"
                                                 {printf("The program is correct \n"); print_func_table();}
#line 1522 "y.tab.c"
    break;

  case 3: /* userdef_sec: USERDEF_START userdef USERDEF_END  */
#line 110 "my_lang.y"
                                                {printf("The userdef section is correct \n");}
#line 1528 "y.tab.c"
    break;

  case 5: /* userdef: userdef_vars  */
#line 113 "my_lang.y"
                       {printf("The userdef is correct \n");}
#line 1534 "y.tab.c"
    break;

  case 7: /* userdef: struct_def  */
#line 115 "my_lang.y"
              {printf("The userdef is correct \n");}
#line 1540 "y.tab.c"
    break;

  case 9: /* userdef: class_def  */
#line 117 "my_lang.y"
             {printf("The userdef is correct \n");}
#line 1546 "y.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 121 "my_lang.y"
                             {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1552 "y.tab.c"
    break;

  case 13: /* struct_def: STRUCT_START ID $@1 struct_vars STRUCT_END  */
#line 122 "my_lang.y"
{
  
printf("The struct is correct with the name %s \n",(yyvsp[-3].strval));
//add it to the var table
add_var((yyvsp[-3].strval), "struct", "default","global",false,0);
//print_var_table();
}
#line 1564 "y.tab.c"
    break;

  case 14: /* struct_vars: variable  */
#line 131 "my_lang.y"
                        {printf("The struct variable is correct \n");}
#line 1570 "y.tab.c"
    break;

  case 16: /* $@2: %empty  */
#line 136 "my_lang.y"
                           {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1576 "y.tab.c"
    break;

  case 17: /* class_def: CLASS_START ID $@2 class_info CLASS_END  */
#line 137 "my_lang.y"
{
  printf("The class is correct \n");
  //add it to the var table
  add_var((yyvsp[-3].strval), "class", "default","global",false,0);  
  //print_var_table();
}
#line 1587 "y.tab.c"
    break;

  case 18: /* class_info: variable  */
#line 146 "my_lang.y"
                      {printf("The class variable is correct \n");}
#line 1593 "y.tab.c"
    break;

  case 20: /* class_info: function  */
#line 148 "my_lang.y"
             {printf("The class function is correct \n");}
#line 1599 "y.tab.c"
    break;

  case 22: /* userdef_vars: variable  */
#line 151 "my_lang.y"
                         {printf("The userdef variable is correct \n");}
#line 1605 "y.tab.c"
    break;

  case 25: /* univ_sec: UNIVERSAL_START univ_vars UNIVERSAL_END  */
#line 156 "my_lang.y"
                                                  {printf("The universal section is correct \n");}
#line 1611 "y.tab.c"
    break;

  case 27: /* univ_vars: variable  */
#line 158 "my_lang.y"
                      {printf("The universal variable is correct \n");}
#line 1617 "y.tab.c"
    break;

  case 30: /* variable: TYPE ID ';'  */
#line 164 "my_lang.y"
        {
          
        add_var((yyvsp[-1].strval), (yyvsp[-2].strval), "default",curr_scope,false,0);
         //print_var_table();
         //printf("The var is correct \n");
         

        }
#line 1630 "y.tab.c"
    break;

  case 31: /* variable: TYPE ID ASSIGN rvalue ';'  */
#line 173 "my_lang.y"
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
#line 1650 "y.tab.c"
    break;

  case 32: /* variable: TYPE ARRAY ';'  */
#line 189 "my_lang.y"
       {
          char *name = strtok((yyvsp[-1].strval), "[");
          char *size = strtok(NULL, "]");
          int size_int = atoi(size);
          add_var(name, (yyvsp[-2].strval), "",curr_scope,true,size_int);
          //print_var_table();
        }
#line 1662 "y.tab.c"
    break;

  case 33: /* rvalue: lvalue  */
#line 201 "my_lang.y"
        {
        
        //printf("The rvalue is correct found rvalue %s \n",$1); 
        (yyval.lval) = (struct lvalue*)getIDType((yyvsp[0].lval),curr_scope);
        //printf("the current scope is %s\n",curr_scope);
        
        }
#line 1674 "y.tab.c"
    break;

  case 34: /* rvalue: INTEGER  */
#line 209 "my_lang.y"
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
#line 1690 "y.tab.c"
    break;

  case 35: /* rvalue: FLOAT  */
#line 221 "my_lang.y"
        {
          //printf("The rvalue of float is %s correct \n",yytext);
          
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "float");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));
          strcpy((yyval.lval)->scope, curr_scope);
          
          }
#line 1705 "y.tab.c"
    break;

  case 36: /* rvalue: BOOL  */
#line 231 "my_lang.y"
             {
          //printf("The rvalue of bool  is %s correct \n",yytext);
          
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "bool");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));
          strcpy((yyval.lval)->scope, curr_scope);
          }
#line 1719 "y.tab.c"
    break;

  case 37: /* rvalue: STRING  */
#line 241 "my_lang.y"
        {
          //printf("The rvalue of string is %s is correct \n",yytext);
          
       
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "string");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));   
          strcpy((yyval.lval)->scope, curr_scope);
        }
#line 1734 "y.tab.c"
    break;

  case 38: /* rvalue: math_statem  */
#line 253 "my_lang.y"
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
#line 1751 "y.tab.c"
    break;

  case 39: /* lvalue: ID  */
#line 267 "my_lang.y"
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
#line 1772 "y.tab.c"
    break;

  case 40: /* lvalue: ARRAY  */
#line 284 "my_lang.y"
          {
            
           //printf("The lvalue is correct \n");
           //check if the variable is declared
           char *name = strtok((yyvsp[0].strval), "[");
           
           if(!is_declared(name,curr_scope))
          {
            printf("The variable %s is not declared \n",name);
            exit(1);
          }
           
           else
           {
            //check if the variable is an array
            if(!is_array(name,curr_scope))
            {
              printf("The variable %s is not an array \n",name);
              exit(1);
            }
            else
            { 
             
              //check if the index is valid
            //   char *copy ;
            //  // strcpy(copy,$1);
            //   printf("the $1 is %s\n",copy);

              
              char *indx;
              indx = strtok(NULL, "]");
              printf("the index is %s\n",indx);
              int index_int = atoi(indx);
              int size = get_size(name,curr_scope);
              if(index_int >= size)
              {
                printf("[ERROR] line : %d The index %d is out of bounds \n",yylineno,index_int);
                exit(1);
              }
              //get the array from the table 
              struct array_info *curr_array = get_array(name);
              struct element * curr_elem = &curr_array->elements[index_int];
              //return the value of the element
               (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
               strcpy((yyval.lval)->type , curr_array->type);
               strcpy((yyval.lval)->name , curr_array->id);
               strcpy((yyval.lval)->value, curr_elem->value);
              
            }
           }
          }
#line 1828 "y.tab.c"
    break;

  case 41: /* func_sec: FUNCTIONS_START functions FUNCTIONS_END  */
#line 337 "my_lang.y"
                                                    {printf("The functions section is correct \n");}
#line 1834 "y.tab.c"
    break;

  case 46: /* $@3: %empty  */
#line 344 "my_lang.y"
                       {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1840 "y.tab.c"
    break;

  case 47: /* function: '(' ')' ID $@3 '(' ')' '{' RETURN ';' '}'  */
#line 345 "my_lang.y"
{
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-7].strval), "", "", "function", 0);
  current_function_arguments = 0;
 // printf("The function is correct \n");
}
#line 1851 "y.tab.c"
    break;

  case 48: /* $@4: %empty  */
#line 352 "my_lang.y"
             {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1857 "y.tab.c"
    break;

  case 49: /* function: '(' ')' ID $@4 '(' ')' '{' '}'  */
#line 353 "my_lang.y"
{
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-5].strval), "", "", "function", 0);
  current_function_arguments = 0;
  //printf("The function is NOT correct \n");
}
#line 1868 "y.tab.c"
    break;

  case 50: /* function: '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN ID ';' '}'  */
#line 360 "my_lang.y"
{
  strcpy(curr_scope,(yyvsp[-9].strval));
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-9].strval), (yyvsp[-11].strval), (struct param_info*)(yyvsp[-7].arg_list), "function", current_function_arguments);
  current_function_arguments = 0;
  //printf("The function is correct \n"); 
}
#line 1881 "y.tab.c"
    break;

  case 51: /* $@5: %empty  */
#line 369 "my_lang.y"
                  {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1887 "y.tab.c"
    break;

  case 52: /* function: '(' TYPE ')' ID $@5 '(' ')' '{' instructions RETURN ID ';' '}'  */
#line 370 "my_lang.y"
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-9].strval), (yyvsp[-11].strval), "", "function", 0);
  current_function_arguments = 0;
  //printf("The function is correct \n"); 
}
#line 1899 "y.tab.c"
    break;

  case 53: /* function: '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN rvalue ';' '}'  */
#line 378 "my_lang.y"
{
  // add new function to the table
  strcpy(curr_scope,(yyvsp[-9].strval));
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-9].strval), (yyvsp[-11].strval), (struct param_info*)(yyvsp[-7].arg_list), "function", current_function_arguments);
  current_function_arguments = 0;
  //printf("The function is correct \n"); 
}
#line 1912 "y.tab.c"
    break;

  case 54: /* arguments: variable_argument  */
#line 393 "my_lang.y"
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
#line 1931 "y.tab.c"
    break;

  case 55: /* arguments: arguments ',' variable_argument  */
#line 408 "my_lang.y"
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
#line 1949 "y.tab.c"
    break;

  case 59: /* variable_argument: TYPE ID  */
#line 426 "my_lang.y"
{
  (yyval.arg) = (struct param_info*)malloc(sizeof(struct param_info));
  strcpy((yyval.arg)->type, (yyvsp[-1].strval)); 
  strcpy((yyval.arg)->id, (yyvsp[0].strval)); 
  
}
#line 1960 "y.tab.c"
    break;

  case 66: /* $@6: %empty  */
#line 443 "my_lang.y"
                      {strcpy(curr_scope,"main");}
#line 1966 "y.tab.c"
    break;

  case 67: /* main_sec: MAIN_START $@6 instructions MAIN_END  */
#line 443 "my_lang.y"
                                                                         {printf("The main section is correct \n");}
#line 1972 "y.tab.c"
    break;

  case 68: /* instructions: instruction  */
#line 445 "my_lang.y"
                           {printf("The instruction is correct \n");}
#line 1978 "y.tab.c"
    break;

  case 80: /* print: PRINT '(' STRING ')' ';'  */
#line 462 "my_lang.y"
{ 
  printf("the strinf is %s \n",(yyvsp[-2].strval));
  printf("[OUTPUT]: %s \n",(yyvsp[-2].strval));
}
#line 1987 "y.tab.c"
    break;

  case 81: /* print: PRINT '(' rvalue ')' ';'  */
#line 467 "my_lang.y"
  {
    printf("[OUTPUT]: %s \n",(yyvsp[-2].lval)->value);
  }
#line 1995 "y.tab.c"
    break;

  case 82: /* typeof: TYPEOF '(' ID ')'  */
#line 474 "my_lang.y"
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
#line 2023 "y.tab.c"
    break;

  case 83: /* statement: lvalue ASSIGN rvalue  */
#line 500 "my_lang.y"
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
#line 2063 "y.tab.c"
    break;

  case 84: /* statement: lvalue INC  */
#line 537 "my_lang.y"
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
#line 2093 "y.tab.c"
    break;

  case 85: /* statement: lvalue DEC  */
#line 564 "my_lang.y"
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
#line 2123 "y.tab.c"
    break;

  case 86: /* statement: ID '(' ')'  */
#line 591 "my_lang.y"
           {
            printf("The statement is correct \n"); //call a function with no arguments
           }
#line 2131 "y.tab.c"
    break;

  case 87: /* statement: ID '(' arguments ')'  */
#line 595 "my_lang.y"
           {
            printf("The statement is correct \n");
           }
#line 2139 "y.tab.c"
    break;

  case 88: /* declaration: TYPE ID  */
#line 600 "my_lang.y"
            {  
              //if it's not declared 
              printf("im here!\n");
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
#line 2163 "y.tab.c"
    break;

  case 89: /* declaration: CONST TYPE ID ASSIGN rvalue  */
#line 620 "my_lang.y"
            {
              printf("The declaration is correct \n");
                char type[10] = "const ";
                strcat(type,(yyvsp[-3].strval));

              add_var((yyvsp[-2].strval), type,(yyvsp[0].lval)->value,curr_scope,false,0); //incompatible type for $4
              printf("value added\n");
            }
#line 2176 "y.tab.c"
    break;

  case 90: /* declaration: TYPE ID ASSIGN rvalue  */
#line 629 "my_lang.y"
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
#line 2195 "y.tab.c"
    break;

  case 91: /* declaration: TYPE ARRAY  */
#line 644 "my_lang.y"
             {
              printf("The declaration is correct \n");
              char *id = strtok((yyvsp[0].strval), "["); //int a[10]
              char *size = strtok(NULL, "]");
              int arr_size = atoi(size);
              //printf("the size is %s \n", size);
              add_var(id, (yyvsp[-1].strval),"",curr_scope,true,arr_size);
             }
#line 2208 "y.tab.c"
    break;

  case 92: /* control_instruction: IF '(' condition ')' '{' instruction '}'  */
#line 656 "my_lang.y"
{
  printf("The if instruction is correct \n");
}
#line 2216 "y.tab.c"
    break;

  case 93: /* control_instruction: IF '(' condition ')' '{' instruction '}' ELSE '{' instruction '}'  */
#line 660 "my_lang.y"
 {
  printf("The if-else instruction is correct \n");
 }
#line 2224 "y.tab.c"
    break;

  case 94: /* control_instruction: FOR '(' TYPE ID ASSIGN rvalue ';' condition ';' for_increment ')' '{' instruction '}'  */
#line 665 "my_lang.y"
{
  printf("The for instruction is correct \n");
  //check if the value in condition is the same as ID 

}
#line 2234 "y.tab.c"
    break;

  case 95: /* control_instruction: FOR '(' ID ASSIGN rvalue ';' condition ';' for_increment ')' '{' instruction '}'  */
#line 671 "my_lang.y"
{
  printf("The for instruction is correct \n");
}
#line 2242 "y.tab.c"
    break;

  case 96: /* control_instruction: WHILE '(' condition ')' '{' instruction '}'  */
#line 675 "my_lang.y"
{
  printf("The while instruction is correct \n");
}
#line 2250 "y.tab.c"
    break;

  case 97: /* for_increment: ID ASSIGN rvalue  */
#line 681 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2258 "y.tab.c"
    break;

  case 98: /* for_increment: ID INC  */
#line 684 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2266 "y.tab.c"
    break;

  case 99: /* for_increment: ID DEC  */
#line 687 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2274 "y.tab.c"
    break;

  case 100: /* condition: lvalue OP_LOGIC rvalue  */
#line 693 "my_lang.y"
{
  //printf("The condition is correct here  \n");
  //check if the types are the same and if they are declared
 
  //printf("The operator  is %s \n",OP_LOGIC);
  //check if the types are the same and if they are declared
 // printf("The condition is correct \n");
  
  if( !same_type((yyvsp[-2].lval)->type,(yyvsp[0].lval)->type)) 
  {
    printf("[ERROR] line: %d not the same type...\n",yylineno);
    exit(1);
  }
;}
#line 2293 "y.tab.c"
    break;

  case 101: /* condition: condition OP_LOGIC condition  */
#line 708 "my_lang.y"
 {
  //printf("The condition is correct \n");
 }
#line 2301 "y.tab.c"
    break;

  case 102: /* condition: condition OP_LOGIC rvalue  */
#line 712 "my_lang.y"
 {
    //printf("The condition is correct \n");
 }
#line 2309 "y.tab.c"
    break;

  case 103: /* condition: lvalue OP_LOGIC condition  */
#line 716 "my_lang.y"
  {
    //printf("The condition is correct \n");
  }
#line 2317 "y.tab.c"
    break;

  case 104: /* condition: rvalue OP_LOGIC condition  */
#line 720 "my_lang.y"
  {
    //printf("The condition is correct \n");
  }
#line 2325 "y.tab.c"
    break;

  case 105: /* math_statem: math_statem '+' math_val  */
#line 730 "my_lang.y"
            {

             
             //add a node into AST 
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);

            }
#line 2341 "y.tab.c"
    break;

  case 106: /* math_statem: math_statem MINUS math_val  */
#line 743 "my_lang.y"
            {
             
             //add a node into AST 
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);

            }
#line 2356 "y.tab.c"
    break;

  case 107: /* math_statem: math_statem '*' math_val  */
#line 756 "my_lang.y"
            {
           // printf("The math statement is correct \n");
            struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2369 "y.tab.c"
    break;

  case 108: /* math_statem: math_statem '/' math_val  */
#line 766 "my_lang.y"
            {
           // printf("The math statement is correct \n");
            struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2382 "y.tab.c"
    break;

  case 109: /* math_statem: math_val '+' math_statem  */
#line 778 "my_lang.y"
            {
               //printf("math state here \n");
             //printf("The math statement is correct \n");
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             printf("The value of $2 is %s \n",'+');
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2397 "y.tab.c"
    break;

  case 110: /* math_statem: math_val MINUS math_statem  */
#line 790 "my_lang.y"
            {  
               //printf("math state here \n");
             //printf("The math statement is correct \n");
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
            // printf("The value of $2 is %s \n",'+');
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2412 "y.tab.c"
    break;

  case 111: /* math_statem: math_val '*' math_statem  */
#line 804 "my_lang.y"
            {
             //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2425 "y.tab.c"
    break;

  case 112: /* math_statem: math_val '/' math_statem  */
#line 815 "my_lang.y"
            {
             //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2438 "y.tab.c"
    break;

  case 113: /* math_statem: math_val '+' math_val  */
#line 826 "my_lang.y"
            { 
             
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             
             printf("The value of $1 is %s and type is %d \n",(yyvsp[-2].node_ptr)->value,(yyvsp[-2].node_ptr)->type);
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2453 "y.tab.c"
    break;

  case 114: /* math_statem: math_val MINUS math_val  */
#line 838 "my_lang.y"
            {
               printf("HERE \n");
               struct node* root = malloc(sizeof(struct node));
               strcpy(root->value,"-");
             
            // printf("The value of $1 is %s and type is %d \n",$1->value,$1->type);
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2468 "y.tab.c"
    break;

  case 115: /* math_statem: math_statem '+' math_statem  */
#line 850 "my_lang.y"
            {
              //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2481 "y.tab.c"
    break;

  case 116: /* math_statem: math_statem MINUS math_statem  */
#line 860 "my_lang.y"
            { 
             
              //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2495 "y.tab.c"
    break;

  case 117: /* math_statem: math_statem '*' math_statem  */
#line 872 "my_lang.y"
            { 
              
             // printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2509 "y.tab.c"
    break;

  case 118: /* math_statem: math_statem '/' math_statem  */
#line 883 "my_lang.y"
            { 
              
             // printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2523 "y.tab.c"
    break;

  case 119: /* math_statem: math_val '*' math_val  */
#line 893 "my_lang.y"
            {

              //printf("the op is %s\n",$2);
             // printf("The ma  th statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2538 "y.tab.c"
    break;

  case 120: /* math_statem: math_val '/' math_val  */
#line 905 "my_lang.y"
            {

              //printf("the op is %s\n",$2);
             // printf("The ma  th statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2553 "y.tab.c"
    break;

  case 121: /* math_val: lvalue  */
#line 917 "my_lang.y"
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
#line 2575 "y.tab.c"
    break;

  case 122: /* math_val: INTEGER  */
#line 935 "my_lang.y"
          {
            printf("The math value is %s INT  \n",(yyvsp[0].strval));
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,(yyvsp[0].strval));
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            
          }
#line 2587 "y.tab.c"
    break;

  case 123: /* math_val: FLOAT  */
#line 943 "my_lang.y"
          {
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,"0");
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            //printf("The math value is correct \n");
          }
#line 2598 "y.tab.c"
    break;

  case 124: /* math_val: BOOL  */
#line 950 "my_lang.y"
          {
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,"0");
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            //printf("The math value is correct \n");
          }
#line 2609 "y.tab.c"
    break;


#line 2613 "y.tab.c"

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

#line 962 "my_lang.y"

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

