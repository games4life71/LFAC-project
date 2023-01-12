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
int curr_function_arguments_list_index = 0;
int func_args_main_index = 0;
//current scope 
char curr_scope[10] = "global";

#line 98 "y.tab.c"

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
#line 30 "my_lang.y"
  
    int intval;
    char * strval;  
    struct lvalue*  lval;
    struct lvalue*  list_arg_main[30];
    struct param_info* arg[30];
    struct param_info* arg_list[30];
    struct node* node_ptr;

#line 253 "y.tab.c"

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
  YYSYMBOL_arguments = 75,                 /* arguments  */
  YYSYMBOL_variable_argument = 76,         /* variable_argument  */
  YYSYMBOL_function_argument = 77,         /* function_argument  */
  YYSYMBOL_function_argument_params = 78,  /* function_argument_params  */
  YYSYMBOL_main_sec = 79,                  /* main_sec  */
  YYSYMBOL_80_3 = 80,                      /* $@3  */
  YYSYMBOL_instructions = 81,              /* instructions  */
  YYSYMBOL_instruction = 82,               /* instruction  */
  YYSYMBOL_function_main_use = 83,         /* function_main_use  */
  YYSYMBOL_func_args_main = 84,            /* func_args_main  */
  YYSYMBOL_print = 85,                     /* print  */
  YYSYMBOL_typeof = 86,                    /* typeof  */
  YYSYMBOL_statement = 87,                 /* statement  */
  YYSYMBOL_declaration = 88,               /* declaration  */
  YYSYMBOL_control_instruction = 89,       /* control_instruction  */
  YYSYMBOL_for_increment = 90,             /* for_increment  */
  YYSYMBOL_condition = 91,                 /* condition  */
  YYSYMBOL_math_statem = 92,               /* math_statem  */
  YYSYMBOL_math_val = 93                   /* math_val  */
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
#define YYLAST   397

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  259

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
       0,   112,   112,   114,   114,   117,   118,   119,   120,   121,
     122,   123,   125,   125,   135,   136,   140,   140,   150,   151,
     152,   153,   155,   156,   157,   160,   160,   162,   163,   164,
     167,   176,   192,   204,   212,   224,   235,   244,   256,   270,
     287,   341,   341,   343,   344,   345,   348,   357,   365,   375,
     384,   399,   414,   428,   429,   429,   432,   442,   443,   446,
     447,   448,   449,   452,   452,   454,   455,   456,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   468,   470,
     481,   495,   504,   515,   520,   527,   553,   592,   619,   646,
     650,   655,   675,   684,   699,   711,   715,   720,   728,   732,
     738,   741,   744,   750,   765,   769,   773,   777,   787,   800,
     813,   823,   835,   847,   861,   872,   883,   895,   907,   917,
     929,   940,   950,   962,   974,   992,  1000,  1007
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
  "func_sec", "functions", "function", "arguments", "variable_argument",
  "function_argument", "function_argument_params", "main_sec", "$@3",
  "instructions", "instruction", "function_main_use", "func_args_main",
  "print", "typeof", "statement", "declaration", "control_instruction",
  "for_increment", "condition", "math_statem", "math_val", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-158)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-128)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,    72,    24,    51,    78,     2,  -158,  -158,    44,    71,
      17,    64,  -158,  -158,    42,   -33,  -158,    82,    94,   239,
    -158,  -158,    86,   140,  -158,  -158,   150,   152,   136,  -158,
    -158,    72,  -158,  -158,  -158,  -158,  -158,    11,    43,    79,
    -158,   114,   -27,   101,   104,   160,   117,  -158,  -158,  -158,
    -158,  -158,    72,  -158,   331,  -158,   204,   204,   204,   204,
     204,   204,   204,   204,   124,   133,    72,    -1,   138,   128,
     161,   164,   172,   182,   186,   228,   167,   271,   277,   191,
    -158,   194,   211,   219,  -158,  -158,  -158,  -158,  -158,    96,
     173,    96,   173,  -158,  -158,  -158,  -158,    96,   173,    96,
     173,  -158,  -158,  -158,  -158,    10,   221,     6,  -158,    13,
    -158,  -158,    20,   282,  -158,   253,   239,   249,   239,   275,
     288,   239,  -158,  -158,  -158,   277,   248,   250,   254,  -158,
    -158,  -158,  -158,  -158,   302,   303,   260,    33,  -158,  -158,
     108,  -158,  -158,  -158,  -158,  -158,  -158,  -158,   102,   149,
     239,   263,   266,   310,    80,     3,   314,   325,    59,   268,
     327,  -158,  -158,  -158,  -158,  -158,   281,   331,   283,    23,
     284,  -158,  -158,  -158,   239,  -158,   285,   291,   239,   239,
     239,   289,   239,   338,   294,  -158,   239,   342,   300,   331,
    -158,  -158,   295,  -158,  -158,  -158,   336,   310,   336,   310,
     336,   331,   323,   239,   331,  -158,   324,   368,   305,  -158,
     174,   239,   328,   251,    66,   329,   276,   357,    60,   239,
    -158,  -158,  -158,  -158,   159,   330,   332,   333,   334,   375,
      65,  -158,    69,  -158,   335,   337,   331,   183,   340,   375,
    -158,  -158,  -158,  -158,   184,   239,  -158,  -158,   341,   343,
    -158,  -158,   331,   344,   218,   331,  -158,   225,  -158
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
      37,     0,   124,    38,     0,     0,     0,    12,    16,     3,
       8,    10,     6,    23,    67,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
      74,     0,     0,     0,    73,   125,   126,   127,   124,   119,
     109,   118,   108,   120,   110,   121,   111,   113,   117,   112,
     116,   114,   122,   115,   123,    54,     0,     0,    14,     0,
      18,    20,    54,    91,    94,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    64,    66,     0,     0,     0,    75,
      76,    69,    68,    71,     0,     0,     0,     0,    51,    53,
       0,    13,    15,    17,    19,    21,    79,    81,     0,     0,
       0,     0,     0,     0,   124,     0,     0,     0,     0,     0,
       0,    86,    77,    70,    72,    56,     0,    67,     0,     0,
       0,    47,    90,    80,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,     0,    67,
      52,    55,     0,    82,    83,    84,   107,   103,   106,   105,
     104,    67,     0,     0,    78,    92,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,    95,     0,     0,
      99,    59,    58,    61,     0,     0,    39,     0,     0,     0,
       0,    57,     0,    49,     0,     0,    67,     0,     0,     0,
      60,    62,    48,    50,     0,     0,   101,   102,     0,     0,
      96,   100,    67,     0,     0,    67,    98,     0,    97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,  -158,   358,  -158,  -158,   360,  -158,  -158,
     362,  -158,  -158,    14,    -9,   -19,  -158,  -158,    -4,   273,
     224,  -157,  -158,  -158,  -158,  -136,   -75,   -77,  -158,  -158,
    -158,   -74,   -73,   -71,   157,  -110,   301,   309
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    18,    28,    29,    66,   107,    30,    67,   109,
      31,     3,     5,    32,   153,    76,     9,    15,    16,   137,
     138,   139,   224,    34,    54,    77,    78,    79,   149,    80,
      81,    82,    83,    84,   238,   155,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   126,   125,    24,   127,   128,     4,   129,   158,     4,
      41,    25,   191,     4,  -125,     6,     1,   134,    14,    13,
       4,   180,    19,   -33,     7,   -33,    35,   134,   -33,    36,
     134,   188,    37,    38,    39,    40,    12,    88,    88,    88,
      88,    88,    88,    88,    88,    53,  -126,   141,   126,    22,
      14,   127,   128,   208,   129,   181,   143,   223,  -125,  -125,
    -125,   135,   136,   111,    14,   210,    53,    20,   196,   198,
     200,   135,   146,   221,   135,   241,   240,   180,   180,     4,
     108,   110,  -127,   180,    10,   168,     8,    11,   169,     4,
    -126,  -126,  -126,    42,    23,    14,    42,   154,   179,   154,
     244,   218,    42,   147,    56,   145,   152,    60,    17,   230,
     229,   184,   161,   125,    21,   239,   254,   135,   222,   257,
     135,   142,    26,   144,    27,    33,  -127,  -127,  -127,   213,
     -33,    42,   -33,   125,   113,   125,   126,   114,    45,   127,
     128,   175,   129,     4,    58,    59,    46,   170,    57,    58,
      59,    61,    62,    63,   172,    42,    47,   169,    48,   154,
     154,   154,   171,    42,    55,   193,    64,    42,    65,   125,
     197,   199,   121,   202,    49,   105,    26,   205,    27,   125,
      68,    69,   125,    36,    42,   106,   122,   123,   245,   112,
      68,    69,   154,    36,   212,    70,    71,    42,    72,    73,
     154,   173,   246,   247,   174,    70,    71,   227,    72,    73,
      35,   231,   115,    36,   232,   116,    85,    86,    87,    74,
      75,    62,    63,   117,    68,    69,    42,    36,   217,    74,
      75,    68,    69,   118,    36,   120,   251,   119,   250,    70,
      71,   130,    72,    73,   131,    35,    70,    71,    36,    72,
      73,    37,    38,    39,    40,   156,   157,    68,    69,    35,
      36,   132,    36,    74,    75,    37,    38,    39,   151,   133,
      74,    75,   256,    71,   140,    72,    73,    68,    69,   258,
      36,   159,   226,    68,    69,    36,    36,   150,    37,    38,
      39,    40,    70,    71,   160,    72,    73,    75,   162,    71,
     163,    72,    73,   124,   164,   220,    68,    69,   165,    36,
     166,    68,    69,   167,    36,   176,    74,    75,   177,   182,
     185,    70,    71,    75,    72,    73,    70,    71,   178,    72,
      73,   183,   186,   187,   192,   194,   189,    68,    69,   207,
      36,   195,   201,   203,   216,    74,    75,   204,   206,   209,
      74,    75,    70,    71,   180,    72,    73,    89,    91,    93,
      95,    97,    99,   101,   103,    90,    92,    94,    96,    98,
     100,   102,   104,   211,   215,   214,    74,    75,   219,   225,
     228,   237,   234,   235,   233,   148,    50,   236,    51,   242,
      52,   243,   248,   190,   252,   253,   249,   255
};

static const yytype_int16 yycheck[] =
{
      19,    78,    77,    36,    78,    78,     7,    78,   118,     7,
      19,    15,   169,     7,     3,     1,    33,     7,    51,     5,
       7,    18,     5,    50,     0,    52,     6,     7,    55,     9,
       7,   167,    12,    13,    14,    15,    34,    56,    57,    58,
      59,    60,    61,    62,    63,    31,     3,    41,   125,     7,
      51,   125,   125,   189,   125,    52,    43,   214,    47,    48,
      49,    51,    52,    67,    51,   201,    52,    50,   178,   179,
     180,    51,    52,     7,    51,   232,     7,    18,    18,     7,
      66,    67,     3,    18,     6,    52,    35,     9,    55,     7,
      47,    48,    49,   112,    52,    51,   115,   116,    18,   118,
     236,   211,   121,   112,     3,   109,   115,     3,    37,   219,
      50,    52,   121,   188,    50,    50,   252,    51,    52,   255,
      51,   107,    40,   109,    42,    31,    47,    48,    49,   204,
      50,   150,    52,   208,     6,   210,   213,     9,    52,   213,
     213,   150,   213,     7,    48,    49,     6,    39,    47,    48,
      49,    47,    48,    49,    52,   174,     6,    55,     6,   178,
     179,   180,    54,   182,    50,   174,     6,   186,    51,   244,
     179,   180,     5,   182,    38,    51,    40,   186,    42,   254,
       6,     7,   257,     9,   203,    52,    19,    20,     5,    51,
       6,     7,   211,     9,   203,    21,    22,   216,    24,    25,
     219,    52,    19,    20,    55,    21,    22,   216,    24,    25,
       6,    52,    51,     9,    55,    51,    12,    13,    14,    45,
      46,    48,    49,    51,     6,     7,   245,     9,    54,    45,
      46,     6,     7,    51,     9,     7,   245,    51,    54,    21,
      22,    50,    24,    25,    50,     6,    21,    22,     9,    24,
      25,    12,    13,    14,    15,     6,     7,     6,     7,     6,
       9,    50,     9,    45,    46,    12,    13,    14,    15,    50,
      45,    46,    54,    22,    53,    24,    25,     6,     7,    54,
       9,     6,     6,     6,     7,     9,     9,     5,    12,    13,
      14,    15,    21,    22,     6,    24,    25,    46,    50,    22,
      50,    24,    25,    32,    50,    54,     6,     7,     6,     9,
       7,     6,     7,    53,     9,    52,    45,    46,    52,     5,
      52,    21,    22,    46,    24,    25,    21,    22,    18,    24,
      25,     6,     5,    52,    50,    50,    53,     6,     7,    39,
       9,    50,    53,     5,    39,    45,    46,    53,     6,    54,
      45,    46,    21,    22,    18,    24,    25,    56,    57,    58,
      59,    60,    61,    62,    63,    56,    57,    58,    59,    60,
      61,    62,    63,    50,     6,    51,    45,    46,    50,    50,
      23,     6,    50,    50,    54,   112,    28,    53,    28,    54,
      28,    54,    52,   169,    53,    52,   239,    53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    57,    67,     7,    68,    69,     0,    35,    72,
       6,     9,    34,    69,    51,    73,    74,    37,    58,     5,
      50,    50,     7,    52,    36,    74,    40,    42,    59,    60,
      63,    66,    69,    31,    79,     6,     9,    12,    13,    14,
      15,    70,    71,    92,    93,    52,     6,     6,     6,    38,
      60,    63,    66,    69,    80,    50,     3,    47,    48,    49,
       3,    47,    48,    49,     6,    51,    61,    64,     6,     7,
      21,    22,    24,    25,    45,    46,    71,    81,    82,    83,
      85,    86,    87,    88,    89,    12,    13,    14,    71,    92,
      93,    92,    93,    92,    93,    92,    93,    92,    93,    92,
      93,    92,    93,    92,    93,    51,    52,    62,    69,    65,
      69,    74,    51,     6,     9,    51,    51,    51,    51,    51,
       7,     5,    19,    20,    32,    82,    83,    87,    88,    89,
      50,    50,    50,    50,     7,    51,    52,    75,    76,    77,
      53,    41,    69,    43,    69,    74,    52,    70,    75,    84,
       5,    15,    70,    70,    71,    91,     6,     7,    91,     6,
       6,    70,    50,    50,    50,     6,     7,    53,    52,    55,
      39,    54,    52,    52,    55,    70,    52,    52,    18,    18,
      18,    52,     5,     6,    52,    52,     5,    52,    81,    53,
      76,    77,    50,    70,    50,    50,    91,    70,    91,    70,
      91,    53,    70,     5,    53,    70,     6,    39,    81,    54,
      81,    50,    70,    82,    51,     6,    39,    54,    91,    50,
      54,     7,    52,    77,    78,    50,     6,    70,    23,    50,
      91,    52,    55,    54,    50,    50,    53,     6,    90,    50,
       7,    77,    54,    54,    81,     5,    19,    20,    52,    90,
      54,    70,    53,    52,    81,    53,    54,    81,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    61,    60,    62,    62,    64,    63,    65,    65,
      65,    65,    66,    66,    66,    67,    67,    68,    68,    68,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    72,    72,    73,    73,    73,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    75,    76,    77,    77,    78,
      78,    78,    78,    80,    79,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    87,    87,    87,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      90,    90,    90,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    93
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
       3,     2,     3,     1,     1,     2,     2,     3,     0,     3,
       4,     1,     3,     5,     5,     4,     3,     2,     2,     3,
       4,     2,     5,     4,     2,     7,    11,    14,    13,     7,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1
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
#line 112 "my_lang.y"
                                                 {printf("The program is correct \n"); print_func_table();}
#line 1526 "y.tab.c"
    break;

  case 3: /* userdef_sec: USERDEF_START userdef USERDEF_END  */
#line 114 "my_lang.y"
                                                {printf("The userdef section is correct \n");}
#line 1532 "y.tab.c"
    break;

  case 5: /* userdef: userdef_vars  */
#line 117 "my_lang.y"
                       {printf("The userdef is correct \n");}
#line 1538 "y.tab.c"
    break;

  case 7: /* userdef: struct_def  */
#line 119 "my_lang.y"
              {printf("The userdef is correct \n");}
#line 1544 "y.tab.c"
    break;

  case 9: /* userdef: class_def  */
#line 121 "my_lang.y"
             {printf("The userdef is correct \n");}
#line 1550 "y.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 125 "my_lang.y"
                             {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1556 "y.tab.c"
    break;

  case 13: /* struct_def: STRUCT_START ID $@1 struct_vars STRUCT_END  */
#line 126 "my_lang.y"
{
  
printf("The struct is correct with the name %s \n",(yyvsp[-3].strval));
//add it to the var table
add_var((yyvsp[-3].strval), "struct", "default","global",false,0);
//print_var_table();
}
#line 1568 "y.tab.c"
    break;

  case 14: /* struct_vars: variable  */
#line 135 "my_lang.y"
                        {printf("The struct variable is correct \n");}
#line 1574 "y.tab.c"
    break;

  case 16: /* $@2: %empty  */
#line 140 "my_lang.y"
                           {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1580 "y.tab.c"
    break;

  case 17: /* class_def: CLASS_START ID $@2 class_info CLASS_END  */
#line 141 "my_lang.y"
{
  printf("The class is correct \n");
  //add it to the var table
  add_var((yyvsp[-3].strval), "class", "default","global",false,0);  
  //print_var_table();
}
#line 1591 "y.tab.c"
    break;

  case 18: /* class_info: variable  */
#line 150 "my_lang.y"
                      {printf("The class variable is correct \n");}
#line 1597 "y.tab.c"
    break;

  case 20: /* class_info: function  */
#line 152 "my_lang.y"
             {printf("The class function is correct \n");}
#line 1603 "y.tab.c"
    break;

  case 22: /* userdef_vars: variable  */
#line 155 "my_lang.y"
                         {printf("The userdef variable is correct \n");}
#line 1609 "y.tab.c"
    break;

  case 25: /* univ_sec: UNIVERSAL_START univ_vars UNIVERSAL_END  */
#line 160 "my_lang.y"
                                                  {printf("The universal section is correct \n");}
#line 1615 "y.tab.c"
    break;

  case 27: /* univ_vars: variable  */
#line 162 "my_lang.y"
                      {printf("The universal variable is correct \n");}
#line 1621 "y.tab.c"
    break;

  case 30: /* variable: TYPE ID ';'  */
#line 168 "my_lang.y"
        {
          
        add_var((yyvsp[-1].strval), (yyvsp[-2].strval), "default",curr_scope,false,0);
         //print_var_table();
         //printf("The var is correct \n");
         

        }
#line 1634 "y.tab.c"
    break;

  case 31: /* variable: TYPE ID ASSIGN rvalue ';'  */
#line 177 "my_lang.y"
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
#line 1654 "y.tab.c"
    break;

  case 32: /* variable: TYPE ARRAY ';'  */
#line 193 "my_lang.y"
       {
          char *name = strtok((yyvsp[-1].strval), "[");
          char *size = strtok(NULL, "]");
          int size_int = atoi(size);
          add_var(name, (yyvsp[-2].strval), "",curr_scope,true,size_int);
          //print_var_table();
        }
#line 1666 "y.tab.c"
    break;

  case 33: /* rvalue: lvalue  */
#line 205 "my_lang.y"
        {
        
        //printf("The rvalue is correct found rvalue %s \n",$1); 
        (yyval.lval) = (struct lvalue*)getIDType((yyvsp[0].lval),curr_scope);
        //printf("the current scope is %s\n",curr_scope);
        
        }
#line 1678 "y.tab.c"
    break;

  case 34: /* rvalue: INTEGER  */
#line 213 "my_lang.y"
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
#line 1694 "y.tab.c"
    break;

  case 35: /* rvalue: FLOAT  */
#line 225 "my_lang.y"
        {
          //printf("The rvalue of float is %s correct \n",yytext);
          
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "float");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));
          strcpy((yyval.lval)->scope, curr_scope);
          
          }
#line 1709 "y.tab.c"
    break;

  case 36: /* rvalue: BOOL  */
#line 235 "my_lang.y"
             {
          //printf("The rvalue of bool  is %s correct \n",yytext);
          
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "bool");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));
          strcpy((yyval.lval)->scope, curr_scope);
          }
#line 1723 "y.tab.c"
    break;

  case 37: /* rvalue: STRING  */
#line 245 "my_lang.y"
        {
          //printf("The rvalue of string is %s is correct \n",yytext);
          
       
          (yyval.lval) = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy((yyval.lval)->type , "string");
          strcpy((yyval.lval)->name , (yyvsp[0].strval));
          strcpy((yyval.lval)->value, (yyvsp[0].strval));   
          strcpy((yyval.lval)->scope, curr_scope);
        }
#line 1738 "y.tab.c"
    break;

  case 38: /* rvalue: math_statem  */
#line 257 "my_lang.y"
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
#line 1755 "y.tab.c"
    break;

  case 39: /* lvalue: ID  */
#line 271 "my_lang.y"
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
#line 1776 "y.tab.c"
    break;

  case 40: /* lvalue: ARRAY  */
#line 288 "my_lang.y"
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
#line 1832 "y.tab.c"
    break;

  case 41: /* func_sec: FUNCTIONS_START functions FUNCTIONS_END  */
#line 341 "my_lang.y"
                                                    {printf("The functions section is correct \n");}
#line 1838 "y.tab.c"
    break;

  case 46: /* function: '(' ')' ID '(' ')' '{' RETURN ';' '}'  */
#line 349 "my_lang.y"
{
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-6].strval), "", NULL, "function", 0);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n");
}
#line 1850 "y.tab.c"
    break;

  case 47: /* function: '(' ')' ID '(' ')' '{' '}'  */
#line 358 "my_lang.y"
{
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-4].strval), "", NULL, "function", 0);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is NOT correct \n");
}
#line 1862 "y.tab.c"
    break;

  case 48: /* function: '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN ID ';' '}'  */
#line 366 "my_lang.y"
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-9].strval), (yyvsp[-11].strval), (struct param_info*)(yyvsp[-7].arg_list), "function", current_function_arguments);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n"); 
}
#line 1875 "y.tab.c"
    break;

  case 49: /* function: '(' TYPE ')' ID '(' ')' '{' instructions RETURN ID ';' '}'  */
#line 376 "my_lang.y"
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-8].strval), (yyvsp[-10].strval), NULL, "function", 0);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n"); 
}
#line 1888 "y.tab.c"
    break;

  case 50: /* function: '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN rvalue ';' '}'  */
#line 385 "my_lang.y"
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-9].strval), (yyvsp[-11].strval), (struct param_info*)(yyvsp[-7].arg_list), "function", current_function_arguments);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n"); 
}
#line 1901 "y.tab.c"
    break;

  case 51: /* arguments: variable_argument  */
#line 400 "my_lang.y"
{ 
  (yyval.arg_list)[curr_function_arguments_list_index] = (struct param_info*)malloc(sizeof(struct param_info));
  strcpy((yyval.arg_list)[curr_function_arguments_list_index]->type,(yyvsp[0].arg)[curr_function_arguments_list_index]->type);
  strcpy((yyval.arg_list)[curr_function_arguments_list_index]->id, (yyvsp[0].arg)[curr_function_arguments_list_index]->id);
  // char temp[32];
  // strcpy(temp, $1->id);
  // $$[curr_function_arguments_list_index] = $1;
  // printf("----------------------------temp = %s\n", temp); 
  curr_function_arguments_list_index++;

  // printf("----------------------------Acum afisam a\n");
  // printf("----------------------------ID IN $1 IS: %s\n", $1[curr_function_arguments_list_index-1]->id);
  // printf("----------------------------ID IN VAR_ARGUMENT IS: %s\n", $$[curr_function_arguments_list_index-1]->id);
}
#line 1920 "y.tab.c"
    break;

  case 52: /* arguments: arguments ',' variable_argument  */
#line 415 "my_lang.y"
{
  (yyval.arg_list)[curr_function_arguments_list_index] = (struct param_info*)malloc(sizeof(struct param_info));
  strcpy((yyval.arg_list)[curr_function_arguments_list_index]->type, (yyvsp[0].arg)[curr_function_arguments_list_index]->type);
  strcpy((yyval.arg_list)[curr_function_arguments_list_index]->id, (yyvsp[0].arg)[curr_function_arguments_list_index]->id);
  // char temp[32];
  // strcpy(temp, $3->id);
  // $$[curr_function_arguments_list_index] = $3;
  // printf("----------------------------temp = %s\n", temp); 
  curr_function_arguments_list_index++; 
  // printf("----------------------------Acum afisam b\n");
  // printf("----------------------------ID IN $3 IS: %s\n", $3[curr_function_arguments_list_index-1]->id);
  // printf("----------------------------ID IN VAR_ARGUMENT IS: %s\n", $$[curr_function_arguments_list_index-1]->id);
}
#line 1938 "y.tab.c"
    break;

  case 56: /* variable_argument: TYPE ID  */
#line 433 "my_lang.y"
{
  (yyval.arg)[current_function_arguments] = (struct param_info*)malloc(sizeof(struct param_info));
  strcpy((yyval.arg)[current_function_arguments]->type, (yyvsp[-1].strval)); 
  strcpy((yyval.arg)[current_function_arguments]->id, (yyvsp[0].strval)); 
  current_function_arguments++;
  // printf("---------------variable_argument ->id: %s\n", $$[current_function_arguments-1]->id);
  // printf("---------------variable_argument ->type: %s\n", $$[current_function_arguments-1]->type);
}
#line 1951 "y.tab.c"
    break;

  case 63: /* $@3: %empty  */
#line 452 "my_lang.y"
                      {strcpy(curr_scope,"main");}
#line 1957 "y.tab.c"
    break;

  case 64: /* main_sec: MAIN_START $@3 instructions MAIN_END  */
#line 452 "my_lang.y"
                                                                         {printf("The main section is correct \n");}
#line 1963 "y.tab.c"
    break;

  case 65: /* instructions: instruction  */
#line 454 "my_lang.y"
                           {printf("The instruction is correct \n");}
#line 1969 "y.tab.c"
    break;

  case 79: /* function_main_use: ID '(' ')'  */
#line 471 "my_lang.y"
{ 
  if(find_func((yyvsp[-2].strval), 0, NULL) == 1){
    func_args_main_index = 0;
    printf("The function ussage is correct.\n");
  }
  else{
    printf("[DEBUG]The function %s is not declared.\n", (yyvsp[-2].strval));
    exit(1);
  }
}
#line 1984 "y.tab.c"
    break;

  case 80: /* function_main_use: ID '(' func_args_main ')'  */
#line 482 "my_lang.y"
{
  if(find_func((yyvsp[-3].strval), func_args_main_index, (struct lvalue*)(yyvsp[-1].list_arg_main)) == 1){
    func_args_main_index = 0;
    printf("The function ussage is correct.\n");
  }
  else{
    printf("[DEBUG]The function %s is not declared.\n", (yyvsp[-3].strval));
    exit(1);
  }
}
#line 1999 "y.tab.c"
    break;

  case 81: /* func_args_main: rvalue  */
#line 496 "my_lang.y"
{
  (yyval.list_arg_main)[func_args_main_index] = (struct lvalue*) malloc(sizeof(struct lvalue));
  strcpy((yyval.list_arg_main)[func_args_main_index]->type, (yyvsp[0].lval)->type);
  // printf("-------------------rvalue type: %s\n", $1->type);
  // printf("-------------------$$ type: %s\n", $$[func_args_main_index]->type);
  func_args_main_index++;
  printf("Arguments of the function are correct.\n");
}
#line 2012 "y.tab.c"
    break;

  case 82: /* func_args_main: func_args_main ',' rvalue  */
#line 505 "my_lang.y"
{
  (yyval.list_arg_main)[func_args_main_index] = (struct lvalue*) malloc(sizeof(struct lvalue));
  strcpy((yyval.list_arg_main)[func_args_main_index]->type, (yyvsp[0].lval)->type);
  // printf("-------------------rvalue type: %s\n", $3->type);
  // printf("-------------------$$ type: %s\n", $$[func_args_main_index]->type);
  func_args_main_index++;
  printf("Arguments of the function are correct.\n");
}
#line 2025 "y.tab.c"
    break;

  case 83: /* print: PRINT '(' STRING ')' ';'  */
#line 516 "my_lang.y"
{ 
  printf("the strinf is %s \n",(yyvsp[-2].strval));
  printf("[OUTPUT]: %s \n",(yyvsp[-2].strval));
}
#line 2034 "y.tab.c"
    break;

  case 84: /* print: PRINT '(' rvalue ')' ';'  */
#line 521 "my_lang.y"
  {
    printf("[OUTPUT]: %s \n",(yyvsp[-2].lval)->value);
  }
#line 2042 "y.tab.c"
    break;

  case 85: /* typeof: TYPEOF '(' ID ')'  */
#line 528 "my_lang.y"
{
  //check if the variable is declared
  if(!is_declared_global((yyvsp[-1].strval)) && !is_declared((yyvsp[-1].strval),"main") )
  {
    printf("[OUTPUT]: The variable %s is not declared \n",(yyvsp[-1].strval));
    exit(1);
  }
  
  else
  {
    //print_var_table();
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
#line 2070 "y.tab.c"
    break;

  case 86: /* statement: lvalue ASSIGN rvalue  */
#line 554 "my_lang.y"
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
            //print_var_table();
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
#line 2110 "y.tab.c"
    break;

  case 87: /* statement: lvalue INC  */
#line 593 "my_lang.y"
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
            //print_var_table();
           }
#line 2140 "y.tab.c"
    break;

  case 88: /* statement: lvalue DEC  */
#line 620 "my_lang.y"
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
            //print_var_table();

           }
#line 2170 "y.tab.c"
    break;

  case 89: /* statement: ID '(' ')'  */
#line 647 "my_lang.y"
           {
            printf("The statement is correct \n"); //call a function with no arguments
           }
#line 2178 "y.tab.c"
    break;

  case 90: /* statement: ID '(' arguments ')'  */
#line 651 "my_lang.y"
           {
            printf("The statement is correct \n");
           }
#line 2186 "y.tab.c"
    break;

  case 91: /* declaration: TYPE ID  */
#line 656 "my_lang.y"
            {  
              //if it's not declared 
              //printf("im here!\n");
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
#line 2210 "y.tab.c"
    break;

  case 92: /* declaration: CONST TYPE ID ASSIGN rvalue  */
#line 676 "my_lang.y"
            {
              printf("The declaration is correct \n");
                char type[10] = "const ";
                strcat(type,(yyvsp[-3].strval));

              add_var((yyvsp[-2].strval), type,(yyvsp[0].lval)->value,curr_scope,false,0); //incompatible type for $4
              printf("value added\n");
            }
#line 2223 "y.tab.c"
    break;

  case 93: /* declaration: TYPE ID ASSIGN rvalue  */
#line 685 "my_lang.y"
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
#line 2242 "y.tab.c"
    break;

  case 94: /* declaration: TYPE ARRAY  */
#line 700 "my_lang.y"
             {
              printf("The declaration is correct \n");
              char *id = strtok((yyvsp[0].strval), "["); //int a[10]
              char *size = strtok(NULL, "]");
              int arr_size = atoi(size);
              //printf("the size is %s \n", size);
              add_var(id, (yyvsp[-1].strval),"",curr_scope,true,arr_size);
             }
#line 2255 "y.tab.c"
    break;

  case 95: /* control_instruction: IF '(' condition ')' '{' instructions '}'  */
#line 712 "my_lang.y"
{
  printf("The if instruction is correct \n");
}
#line 2263 "y.tab.c"
    break;

  case 96: /* control_instruction: IF '(' condition ')' '{' instructions '}' ELSE '{' instructions '}'  */
#line 716 "my_lang.y"
 {
  printf("The if-else instruction is correct \n");
 }
#line 2271 "y.tab.c"
    break;

  case 97: /* control_instruction: FOR '(' TYPE ID ASSIGN rvalue ';' condition ';' for_increment ')' '{' instructions '}'  */
#line 721 "my_lang.y"
{

    
  printf("The for instruction is correct \n");
  //check if the value in condition is the same as ID 

}
#line 2283 "y.tab.c"
    break;

  case 98: /* control_instruction: FOR '(' ID ASSIGN rvalue ';' condition ';' for_increment ')' '{' instructions '}'  */
#line 729 "my_lang.y"
{
  printf("The for instruction is correct \n");
}
#line 2291 "y.tab.c"
    break;

  case 99: /* control_instruction: WHILE '(' condition ')' '{' instruction '}'  */
#line 733 "my_lang.y"
{
  printf("The while instruction is correct \n");
}
#line 2299 "y.tab.c"
    break;

  case 100: /* for_increment: ID ASSIGN rvalue  */
#line 739 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2307 "y.tab.c"
    break;

  case 101: /* for_increment: ID INC  */
#line 742 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2315 "y.tab.c"
    break;

  case 102: /* for_increment: ID DEC  */
#line 745 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2323 "y.tab.c"
    break;

  case 103: /* condition: lvalue OP_LOGIC rvalue  */
#line 751 "my_lang.y"
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
#line 2342 "y.tab.c"
    break;

  case 104: /* condition: condition OP_LOGIC condition  */
#line 766 "my_lang.y"
 {
  //printf("The condition is correct \n");
 }
#line 2350 "y.tab.c"
    break;

  case 105: /* condition: condition OP_LOGIC rvalue  */
#line 770 "my_lang.y"
 {
    //printf("The condition is correct \n");
 }
#line 2358 "y.tab.c"
    break;

  case 106: /* condition: lvalue OP_LOGIC condition  */
#line 774 "my_lang.y"
  {
    //printf("The condition is correct \n");
  }
#line 2366 "y.tab.c"
    break;

  case 107: /* condition: rvalue OP_LOGIC condition  */
#line 778 "my_lang.y"
  {
    //printf("The condition is correct \n");
  }
#line 2374 "y.tab.c"
    break;

  case 108: /* math_statem: math_statem '+' math_val  */
#line 788 "my_lang.y"
            {

             
             //add a node into AST 
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);

            }
#line 2390 "y.tab.c"
    break;

  case 109: /* math_statem: math_statem MINUS math_val  */
#line 801 "my_lang.y"
            {
             
             //add a node into AST 
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);

            }
#line 2405 "y.tab.c"
    break;

  case 110: /* math_statem: math_statem '*' math_val  */
#line 814 "my_lang.y"
            {
           // printf("The math statement is correct \n");
            struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2418 "y.tab.c"
    break;

  case 111: /* math_statem: math_statem '/' math_val  */
#line 824 "my_lang.y"
            {
           // printf("The math statement is correct \n");
            struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2431 "y.tab.c"
    break;

  case 112: /* math_statem: math_val '+' math_statem  */
#line 836 "my_lang.y"
            {
               //printf("math state here \n");
             //printf("The math statement is correct \n");
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //printf("The value of $2 is %s \n",'+');
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2446 "y.tab.c"
    break;

  case 113: /* math_statem: math_val MINUS math_statem  */
#line 848 "my_lang.y"
            {  
               //printf("math state here \n");
             //printf("The math statement is correct \n");
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
            // printf("The value of $2 is %s \n",'+');
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2461 "y.tab.c"
    break;

  case 114: /* math_statem: math_val '*' math_statem  */
#line 862 "my_lang.y"
            {
             //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2474 "y.tab.c"
    break;

  case 115: /* math_statem: math_val '/' math_statem  */
#line 873 "my_lang.y"
            {
             //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2487 "y.tab.c"
    break;

  case 116: /* math_statem: math_val '+' math_val  */
#line 884 "my_lang.y"
            { 
             
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             
             //printf("The value of $1 is %s and type is %d \n",$1->value,$1->type);
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2502 "y.tab.c"
    break;

  case 117: /* math_statem: math_val MINUS math_val  */
#line 896 "my_lang.y"
            {
               //printf("HERE \n");
               struct node* root = malloc(sizeof(struct node));
               strcpy(root->value,"-");
             
            // printf("The value of $1 is %s and type is %d \n",$1->value,$1->type);
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2517 "y.tab.c"
    break;

  case 118: /* math_statem: math_statem '+' math_statem  */
#line 908 "my_lang.y"
            {
              //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2530 "y.tab.c"
    break;

  case 119: /* math_statem: math_statem MINUS math_statem  */
#line 918 "my_lang.y"
            { 
             
              //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2544 "y.tab.c"
    break;

  case 120: /* math_statem: math_statem '*' math_statem  */
#line 930 "my_lang.y"
            { 
              
             // printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2558 "y.tab.c"
    break;

  case 121: /* math_statem: math_statem '/' math_statem  */
#line 941 "my_lang.y"
            { 
              
             // printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2572 "y.tab.c"
    break;

  case 122: /* math_statem: math_val '*' math_val  */
#line 951 "my_lang.y"
            {

              //printf("the op is %s\n",$2);
             // printf("The ma  th statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2587 "y.tab.c"
    break;

  case 123: /* math_statem: math_val '/' math_val  */
#line 963 "my_lang.y"
            {

              //printf("the op is %s\n",$2);
             // printf("The ma  th statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2602 "y.tab.c"
    break;

  case 124: /* math_val: lvalue  */
#line 975 "my_lang.y"
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
#line 2624 "y.tab.c"
    break;

  case 125: /* math_val: INTEGER  */
#line 993 "my_lang.y"
          {
            //printf("The math value is %s INT  \n",$1);
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,(yyvsp[0].strval));
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            
          }
#line 2636 "y.tab.c"
    break;

  case 126: /* math_val: FLOAT  */
#line 1001 "my_lang.y"
          {
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,"0");
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            //printf("The math value is correct \n");
          }
#line 2647 "y.tab.c"
    break;

  case 127: /* math_val: BOOL  */
#line 1008 "my_lang.y"
          {
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,"0");
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            //printf("The math value is correct \n");
          }
#line 2658 "y.tab.c"
    break;


#line 2662 "y.tab.c"

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

#line 1020 "my_lang.y"

// c code part 
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}
//can declare c functions here 


int main(int argc, char** argv){
yyin=fopen(argv[1],"r"); // if we want to parse a file instead of the standard input 
var_table_file = fopen("symbol_table.txt","w");
funct_table_file = fopen("functions_table.txt", "w");

yyparse();
save_var_table();
save_funct_table();
fclose(var_table_file);
fclose(funct_table_file);

return 0;
} 

