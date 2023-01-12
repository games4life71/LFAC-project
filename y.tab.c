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
//current scope 
char curr_scope[10] = "global";

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
#line 29 "my_lang.y"
  
    int intval;
    char * strval;  
    struct lvalue*  lval;
    struct param_info* arg[30];
    struct param_info* arg_list[30];
    struct node* node_ptr;

#line 251 "y.tab.c"

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
  YYSYMBOL_print = 83,                     /* print  */
  YYSYMBOL_typeof = 84,                    /* typeof  */
  YYSYMBOL_statement = 85,                 /* statement  */
  YYSYMBOL_declaration = 86,               /* declaration  */
  YYSYMBOL_control_instruction = 87,       /* control_instruction  */
  YYSYMBOL_for_increment = 88,             /* for_increment  */
  YYSYMBOL_condition = 89,                 /* condition  */
  YYSYMBOL_math_statem = 90,               /* math_statem  */
  YYSYMBOL_math_val = 91                   /* math_val  */
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
#define YYLAST   376

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

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
       0,   109,   109,   111,   111,   114,   115,   116,   117,   118,
     119,   120,   122,   122,   132,   133,   137,   137,   147,   148,
     149,   150,   152,   153,   154,   157,   157,   159,   160,   161,
     164,   173,   189,   201,   209,   221,   232,   241,   253,   267,
     284,   338,   338,   340,   341,   342,   345,   354,   362,   372,
     381,   396,   411,   425,   426,   426,   429,   439,   440,   443,
     444,   445,   446,   449,   449,   451,   452,   453,   456,   457,
     458,   459,   460,   461,   462,   463,   463,   467,   472,   479,
     505,   544,   571,   598,   602,   607,   627,   636,   651,   663,
     667,   672,   680,   684,   690,   693,   696,   702,   717,   721,
     725,   729,   739,   752,   765,   775,   787,   799,   813,   824,
     835,   847,   859,   869,   881,   892,   902,   914,   926,   944,
     952,   959
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
  "instructions", "instruction", "print", "typeof", "statement",
  "declaration", "control_instruction", "for_increment", "condition",
  "math_statem", "math_val", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-152)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,    12,    31,    56,    79,   142,  -152,  -152,    42,    60,
      20,    98,  -152,  -152,     9,   -21,  -152,    75,   111,   306,
    -152,  -152,   102,   144,  -152,  -152,   150,   157,    74,  -152,
    -152,    12,  -152,  -152,  -152,  -152,  -152,    68,    69,   127,
    -152,   115,   -32,    11,    26,   188,   158,  -152,  -152,  -152,
    -152,  -152,    12,  -152,   282,  -152,   190,   190,   190,   190,
     190,   190,   190,   190,   169,   149,    12,    27,   174,   137,
     176,   179,   183,   189,   197,   201,     3,   222,   286,  -152,
     185,   199,   200,  -152,  -152,  -152,  -152,  -152,    35,   184,
      35,   184,  -152,  -152,  -152,  -152,    35,   184,    35,   184,
    -152,  -152,  -152,  -152,     0,   198,    83,  -152,    28,  -152,
    -152,     4,   247,  -152,   324,   306,    70,   306,   249,   250,
     306,  -152,  -152,  -152,   286,   203,   209,  -152,  -152,  -152,
    -152,   255,   257,   212,    92,  -152,  -152,    -6,  -152,  -152,
    -152,  -152,  -152,  -152,   140,   306,   214,   218,   256,   155,
      81,   264,   271,    87,   226,   274,  -152,  -152,  -152,  -152,
     228,   282,   229,    29,   231,  -152,  -152,  -152,   235,   237,
     306,   306,   306,   241,   306,   295,   252,  -152,   306,   303,
     251,   282,  -152,  -152,   259,  -152,  -152,   296,   256,   296,
     256,   296,   282,   267,   306,   282,  -152,   273,   319,   277,
    -152,   116,   306,   276,   160,    14,   279,   334,   308,    85,
     306,  -152,  -152,  -152,  -152,   166,   280,   285,   291,   289,
     338,    86,  -152,    38,  -152,   312,   313,   282,     8,   293,
     338,  -152,  -152,  -152,  -152,   165,   306,  -152,  -152,   315,
     317,  -152,  -152,   282,   318,   191,   282,  -152,   217,  -152
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      26,    29,     0,    42,     0,     0,    27,     1,    45,     4,
       0,     0,    25,    28,     0,     0,    43,    11,     0,     0,
      30,    32,     0,     0,    41,    44,     0,     0,     0,     7,
       9,     5,    22,    63,     2,    39,    40,   119,   120,   121,
      37,     0,   118,    38,     0,     0,     0,    12,    16,     3,
       8,    10,     6,    23,    67,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    74,
       0,     0,     0,    73,   119,   120,   121,   118,   113,   103,
     112,   102,   114,   104,   115,   105,   107,   111,   106,   110,
     108,   116,   109,   117,    54,     0,     0,    14,     0,    18,
      20,    54,    85,    88,     0,     0,     0,     0,     0,     0,
       0,    81,    82,    64,    66,     0,     0,    75,    69,    68,
      71,     0,     0,     0,     0,    51,    53,     0,    13,    15,
      17,    19,    21,    83,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,    80,    70,    72,    56,
       0,    67,     0,     0,     0,    47,    84,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,    67,    52,    55,     0,    77,    78,   101,    97,   100,
      99,    98,    67,     0,     0,    76,    86,     0,     0,     0,
      46,     0,     0,     0,     0,     0,     0,     0,    89,     0,
       0,    93,    59,    58,    61,     0,     0,    39,     0,     0,
       0,     0,    57,     0,    49,     0,     0,    67,     0,     0,
       0,    60,    62,    48,    50,     0,     0,    95,    96,     0,
       0,    90,    94,    67,     0,     0,    67,    92,     0,    91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,  -152,   342,  -152,  -152,   344,  -152,  -152,
     345,  -152,  -152,     1,   -14,   -19,  -152,  -152,     2,   263,
     213,  -151,  -152,  -152,  -152,  -135,   -67,  -152,  -152,   -77,
     -75,   -74,   145,  -108,   294,   302
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    18,    28,    29,    66,   106,    30,    67,   108,
      31,     3,     5,    32,   148,    76,     9,    15,    16,   134,
     135,   136,   215,    34,    54,    77,    78,    79,    80,    81,
      82,    83,   229,   150,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   125,     6,   126,   127,    41,    13,   131,   120,   153,
     124,   131,   183,   236,    56,    24,    22,    25,   -33,     4,
     -33,   212,   121,   122,     1,    19,   180,   237,   238,    60,
      14,     7,    53,   164,     4,     4,   131,    87,    87,    87,
      87,    87,    87,    87,    87,   231,   199,   125,   165,   126,
     127,   132,   133,    53,   214,   132,   143,   201,    57,    58,
      59,    23,   187,   189,   191,   132,   213,   107,   109,   110,
      20,   140,   232,    61,    62,    63,   151,   152,    14,    14,
     132,     4,     4,    58,    59,    10,   -34,   -35,    11,   132,
       4,     8,   235,    14,   209,    42,   149,    17,   149,   172,
     147,    42,   221,   172,   172,   172,   156,   139,   245,   141,
     142,   248,    49,   124,    26,    26,    27,    27,   -34,   -35,
     -34,   -35,    68,    69,   138,    36,    42,   125,   204,   126,
     127,   167,   124,   173,   124,   220,   230,    70,    71,   176,
      72,    73,    33,   112,   162,   -36,   113,   163,    21,     4,
      46,   149,   149,   149,    45,    42,    47,   188,   190,    42,
     193,    74,    75,    48,   196,    55,    68,    69,   124,    36,
     208,    68,    69,   171,    36,    42,    12,   -36,   124,   -36,
     203,   124,    71,   149,    72,    73,    70,    71,    42,    72,
      73,   149,   166,   218,    64,   163,    35,    68,    69,    36,
      36,   105,    84,    85,    86,   -33,    75,   -33,   119,    65,
      74,    75,    70,    71,   211,    72,    73,    42,   222,   241,
     104,   223,   242,    68,    69,   111,    36,   114,    68,    69,
     115,    36,    62,    63,   116,   128,    74,    75,    70,    71,
     117,    72,    73,    70,    71,   247,    72,    73,   118,   129,
     130,   137,   145,   157,   123,   154,   155,    68,    69,   158,
      36,   159,    74,    75,   160,   161,   168,    74,    75,   174,
     169,   249,    70,    71,   170,    72,    73,   175,   177,   178,
     179,   184,   181,    68,    69,   185,    36,   186,    68,    69,
     198,    36,    68,    69,   192,    36,    74,    75,    70,    71,
     194,    72,    73,    70,    71,   195,    72,    73,    71,   197,
      72,    73,    35,   200,   172,    36,   207,   202,    37,    38,
      39,    40,    74,    75,   205,   206,   210,    74,    75,   216,
      35,   219,    75,    36,   224,   225,    37,    38,    39,   146,
     217,   226,   227,    36,   228,   239,    37,    38,    39,    40,
      88,    90,    92,    94,    96,    98,   100,   102,    89,    91,
      93,    95,    97,    99,   101,   103,   233,   234,   243,   244,
      50,   246,    51,    52,   144,   240,   182
};

static const yytype_uint8 yycheck[] =
{
      19,    78,     1,    78,    78,    19,     5,     7,     5,   117,
      77,     7,   163,     5,     3,    36,     7,    15,    50,     7,
      52,     7,    19,    20,    33,     5,   161,    19,    20,     3,
      51,     0,    31,    39,     7,     7,     7,    56,    57,    58,
      59,    60,    61,    62,    63,     7,   181,   124,    54,   124,
     124,    51,    52,    52,   205,    51,    52,   192,    47,    48,
      49,    52,   170,   171,   172,    51,    52,    66,    67,    67,
      50,    43,   223,    47,    48,    49,     6,     7,    51,    51,
      51,     7,     7,    48,    49,     6,    18,    18,     9,    51,
       7,    35,   227,    51,   202,   114,   115,    37,   117,    18,
     114,   120,   210,    18,    18,    18,   120,   106,   243,   108,
     108,   246,    38,   180,    40,    40,    42,    42,    50,    50,
      52,    52,     6,     7,    41,     9,   145,   204,   195,   204,
     204,   145,   199,    52,   201,    50,    50,    21,    22,    52,
      24,    25,    31,     6,    52,    18,     9,    55,    50,     7,
       6,   170,   171,   172,    52,   174,     6,   171,   172,   178,
     174,    45,    46,     6,   178,    50,     6,     7,   235,     9,
      54,     6,     7,    18,     9,   194,    34,    50,   245,    52,
     194,   248,    22,   202,    24,    25,    21,    22,   207,    24,
      25,   210,    52,   207,     6,    55,     6,     6,     7,     9,
       9,    52,    12,    13,    14,    50,    46,    52,     7,    51,
      45,    46,    21,    22,    54,    24,    25,   236,    52,    54,
      51,    55,   236,     6,     7,    51,     9,    51,     6,     7,
      51,     9,    48,    49,    51,    50,    45,    46,    21,    22,
      51,    24,    25,    21,    22,    54,    24,    25,    51,    50,
      50,    53,     5,    50,    32,     6,     6,     6,     7,    50,
       9,     6,    45,    46,     7,    53,    52,    45,    46,     5,
      52,    54,    21,    22,    18,    24,    25,     6,    52,     5,
      52,    50,    53,     6,     7,    50,     9,    50,     6,     7,
      39,     9,     6,     7,    53,     9,    45,    46,    21,    22,
       5,    24,    25,    21,    22,    53,    24,    25,    22,     6,
      24,    25,     6,    54,    18,     9,    39,    50,    12,    13,
      14,    15,    45,    46,    51,     6,    50,    45,    46,    50,
       6,    23,    46,     9,    54,    50,    12,    13,    14,    15,
       6,    50,    53,     9,     6,    52,    12,    13,    14,    15,
      56,    57,    58,    59,    60,    61,    62,    63,    56,    57,
      58,    59,    60,    61,    62,    63,    54,    54,    53,    52,
      28,    53,    28,    28,   111,   230,   163
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    57,    67,     7,    68,    69,     0,    35,    72,
       6,     9,    34,    69,    51,    73,    74,    37,    58,     5,
      50,    50,     7,    52,    36,    74,    40,    42,    59,    60,
      63,    66,    69,    31,    79,     6,     9,    12,    13,    14,
      15,    70,    71,    90,    91,    52,     6,     6,     6,    38,
      60,    63,    66,    69,    80,    50,     3,    47,    48,    49,
       3,    47,    48,    49,     6,    51,    61,    64,     6,     7,
      21,    22,    24,    25,    45,    46,    71,    81,    82,    83,
      84,    85,    86,    87,    12,    13,    14,    71,    90,    91,
      90,    91,    90,    91,    90,    91,    90,    91,    90,    91,
      90,    91,    90,    91,    51,    52,    62,    69,    65,    69,
      74,    51,     6,     9,    51,    51,    51,    51,    51,     7,
       5,    19,    20,    32,    82,    85,    86,    87,    50,    50,
      50,     7,    51,    52,    75,    76,    77,    53,    41,    69,
      43,    69,    74,    52,    75,     5,    15,    70,    70,    71,
      89,     6,     7,    89,     6,     6,    70,    50,    50,     6,
       7,    53,    52,    55,    39,    54,    52,    70,    52,    52,
      18,    18,    18,    52,     5,     6,    52,    52,     5,    52,
      81,    53,    76,    77,    50,    50,    50,    89,    70,    89,
      70,    89,    53,    70,     5,    53,    70,     6,    39,    81,
      54,    81,    50,    70,    82,    51,     6,    39,    54,    89,
      50,    54,     7,    52,    77,    78,    50,     6,    70,    23,
      50,    89,    52,    55,    54,    50,    50,    53,     6,    88,
      50,     7,    77,    54,    54,    81,     5,    19,    20,    52,
      88,    54,    70,    53,    52,    81,    53,    54,    81,    54
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
      82,    82,    82,    82,    82,    82,    82,    83,    83,    84,
      85,    85,    85,    85,    85,    86,    86,    86,    86,    87,
      87,    87,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91
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
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1
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
#line 1515 "y.tab.c"
    break;

  case 3: /* userdef_sec: USERDEF_START userdef USERDEF_END  */
#line 111 "my_lang.y"
                                                {printf("The userdef section is correct \n");}
#line 1521 "y.tab.c"
    break;

  case 5: /* userdef: userdef_vars  */
#line 114 "my_lang.y"
                       {printf("The userdef is correct \n");}
#line 1527 "y.tab.c"
    break;

  case 7: /* userdef: struct_def  */
#line 116 "my_lang.y"
              {printf("The userdef is correct \n");}
#line 1533 "y.tab.c"
    break;

  case 9: /* userdef: class_def  */
#line 118 "my_lang.y"
             {printf("The userdef is correct \n");}
#line 1539 "y.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 122 "my_lang.y"
                             {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1545 "y.tab.c"
    break;

  case 13: /* struct_def: STRUCT_START ID $@1 struct_vars STRUCT_END  */
#line 123 "my_lang.y"
{
  
printf("The struct is correct with the name %s \n",(yyvsp[-3].strval));
//add it to the var table
add_var((yyvsp[-3].strval), "struct", "default","global",false,0);
//print_var_table();
}
#line 1557 "y.tab.c"
    break;

  case 14: /* struct_vars: variable  */
#line 132 "my_lang.y"
                        {printf("The struct variable is correct \n");}
#line 1563 "y.tab.c"
    break;

  case 16: /* $@2: %empty  */
#line 137 "my_lang.y"
                           {strcpy(curr_scope,(yyvsp[0].strval));}
#line 1569 "y.tab.c"
    break;

  case 17: /* class_def: CLASS_START ID $@2 class_info CLASS_END  */
#line 138 "my_lang.y"
{
  printf("The class is correct \n");
  //add it to the var table
  add_var((yyvsp[-3].strval), "class", "default","global",false,0);  
  //print_var_table();
}
#line 1580 "y.tab.c"
    break;

  case 18: /* class_info: variable  */
#line 147 "my_lang.y"
                      {printf("The class variable is correct \n");}
#line 1586 "y.tab.c"
    break;

  case 20: /* class_info: function  */
#line 149 "my_lang.y"
             {printf("The class function is correct \n");}
#line 1592 "y.tab.c"
    break;

  case 22: /* userdef_vars: variable  */
#line 152 "my_lang.y"
                         {printf("The userdef variable is correct \n");}
#line 1598 "y.tab.c"
    break;

  case 25: /* univ_sec: UNIVERSAL_START univ_vars UNIVERSAL_END  */
#line 157 "my_lang.y"
                                                  {printf("The universal section is correct \n");}
#line 1604 "y.tab.c"
    break;

  case 27: /* univ_vars: variable  */
#line 159 "my_lang.y"
                      {printf("The universal variable is correct \n");}
#line 1610 "y.tab.c"
    break;

  case 30: /* variable: TYPE ID ';'  */
#line 165 "my_lang.y"
        {
          
        add_var((yyvsp[-1].strval), (yyvsp[-2].strval), "default",curr_scope,false,0);
         //print_var_table();
         //printf("The var is correct \n");
         

        }
#line 1623 "y.tab.c"
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
#line 1643 "y.tab.c"
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
#line 1655 "y.tab.c"
    break;

  case 33: /* rvalue: lvalue  */
#line 202 "my_lang.y"
        {
        
        //printf("The rvalue is correct found rvalue %s \n",$1); 
        (yyval.lval) = (struct lvalue*)getIDType((yyvsp[0].lval),curr_scope);
        //printf("the current scope is %s\n",curr_scope);
        
        }
#line 1667 "y.tab.c"
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
#line 1683 "y.tab.c"
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
#line 1698 "y.tab.c"
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
#line 1712 "y.tab.c"
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
#line 1727 "y.tab.c"
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
#line 1744 "y.tab.c"
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
#line 1765 "y.tab.c"
    break;

  case 40: /* lvalue: ARRAY  */
#line 285 "my_lang.y"
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
#line 1821 "y.tab.c"
    break;

  case 41: /* func_sec: FUNCTIONS_START functions FUNCTIONS_END  */
#line 338 "my_lang.y"
                                                    {printf("The functions section is correct \n");}
#line 1827 "y.tab.c"
    break;

  case 46: /* function: '(' ')' ID '(' ')' '{' RETURN ';' '}'  */
#line 346 "my_lang.y"
{
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-6].strval), "", NULL, "function", 0);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n");
}
#line 1839 "y.tab.c"
    break;

  case 47: /* function: '(' ')' ID '(' ')' '{' '}'  */
#line 355 "my_lang.y"
{
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-4].strval), "", NULL, "function", 0);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is NOT correct \n");
}
#line 1851 "y.tab.c"
    break;

  case 48: /* function: '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN ID ';' '}'  */
#line 363 "my_lang.y"
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-9].strval), (yyvsp[-11].strval), (struct param_info*)(yyvsp[-7].arg_list), "function", current_function_arguments);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n"); 
}
#line 1864 "y.tab.c"
    break;

  case 49: /* function: '(' TYPE ')' ID '(' ')' '{' instructions RETURN ID ';' '}'  */
#line 373 "my_lang.y"
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-8].strval), (yyvsp[-10].strval), NULL, "function", 0);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n"); 
}
#line 1877 "y.tab.c"
    break;

  case 50: /* function: '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN rvalue ';' '}'  */
#line 382 "my_lang.y"
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func((yyvsp[-9].strval), (yyvsp[-11].strval), (struct param_info*)(yyvsp[-7].arg_list), "function", current_function_arguments);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n"); 
}
#line 1890 "y.tab.c"
    break;

  case 51: /* arguments: variable_argument  */
#line 397 "my_lang.y"
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
#line 1909 "y.tab.c"
    break;

  case 52: /* arguments: arguments ',' variable_argument  */
#line 412 "my_lang.y"
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
#line 1927 "y.tab.c"
    break;

  case 56: /* variable_argument: TYPE ID  */
#line 430 "my_lang.y"
{
  (yyval.arg)[current_function_arguments] = (struct param_info*)malloc(sizeof(struct param_info));
  strcpy((yyval.arg)[current_function_arguments]->type, (yyvsp[-1].strval)); 
  strcpy((yyval.arg)[current_function_arguments]->id, (yyvsp[0].strval)); 
  current_function_arguments++;
  // printf("---------------variable_argument ->id: %s\n", $$[current_function_arguments-1]->id);
  // printf("---------------variable_argument ->type: %s\n", $$[current_function_arguments-1]->type);
}
#line 1940 "y.tab.c"
    break;

  case 63: /* $@3: %empty  */
#line 449 "my_lang.y"
                      {strcpy(curr_scope,"main");}
#line 1946 "y.tab.c"
    break;

  case 64: /* main_sec: MAIN_START $@3 instructions MAIN_END  */
#line 449 "my_lang.y"
                                                                         {printf("The main section is correct \n");}
#line 1952 "y.tab.c"
    break;

  case 65: /* instructions: instruction  */
#line 451 "my_lang.y"
                           {printf("The instruction is correct \n");}
#line 1958 "y.tab.c"
    break;

  case 77: /* print: PRINT '(' STRING ')' ';'  */
#line 468 "my_lang.y"
{ 
  printf("the strinf is %s \n",(yyvsp[-2].strval));
  printf("[OUTPUT]: %s \n",(yyvsp[-2].strval));
}
#line 1967 "y.tab.c"
    break;

  case 78: /* print: PRINT '(' rvalue ')' ';'  */
#line 473 "my_lang.y"
  {
    printf("[OUTPUT]: %s \n",(yyvsp[-2].lval)->value);
  }
#line 1975 "y.tab.c"
    break;

  case 79: /* typeof: TYPEOF '(' ID ')'  */
#line 480 "my_lang.y"
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
#line 2003 "y.tab.c"
    break;

  case 80: /* statement: lvalue ASSIGN rvalue  */
#line 506 "my_lang.y"
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
#line 2043 "y.tab.c"
    break;

  case 81: /* statement: lvalue INC  */
#line 545 "my_lang.y"
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
#line 2073 "y.tab.c"
    break;

  case 82: /* statement: lvalue DEC  */
#line 572 "my_lang.y"
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
#line 2103 "y.tab.c"
    break;

  case 83: /* statement: ID '(' ')'  */
#line 599 "my_lang.y"
           {
            printf("The statement is correct \n"); //call a function with no arguments
           }
#line 2111 "y.tab.c"
    break;

  case 84: /* statement: ID '(' arguments ')'  */
#line 603 "my_lang.y"
           {
            printf("The statement is correct \n");
           }
#line 2119 "y.tab.c"
    break;

  case 85: /* declaration: TYPE ID  */
#line 608 "my_lang.y"
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
#line 2143 "y.tab.c"
    break;

  case 86: /* declaration: CONST TYPE ID ASSIGN rvalue  */
#line 628 "my_lang.y"
            {
              printf("The declaration is correct \n");
                char type[10] = "const ";
                strcat(type,(yyvsp[-3].strval));

              add_var((yyvsp[-2].strval), type,(yyvsp[0].lval)->value,curr_scope,false,0); //incompatible type for $4
              printf("value added\n");
            }
#line 2156 "y.tab.c"
    break;

  case 87: /* declaration: TYPE ID ASSIGN rvalue  */
#line 637 "my_lang.y"
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
#line 2175 "y.tab.c"
    break;

  case 88: /* declaration: TYPE ARRAY  */
#line 652 "my_lang.y"
             {
              printf("The declaration is correct \n");
              char *id = strtok((yyvsp[0].strval), "["); //int a[10]
              char *size = strtok(NULL, "]");
              int arr_size = atoi(size);
              //printf("the size is %s \n", size);
              add_var(id, (yyvsp[-1].strval),"",curr_scope,true,arr_size);
             }
#line 2188 "y.tab.c"
    break;

  case 89: /* control_instruction: IF '(' condition ')' '{' instructions '}'  */
#line 664 "my_lang.y"
{
  printf("The if instruction is correct \n");
}
#line 2196 "y.tab.c"
    break;

  case 90: /* control_instruction: IF '(' condition ')' '{' instructions '}' ELSE '{' instructions '}'  */
#line 668 "my_lang.y"
 {
  printf("The if-else instruction is correct \n");
 }
#line 2204 "y.tab.c"
    break;

  case 91: /* control_instruction: FOR '(' TYPE ID ASSIGN rvalue ';' condition ';' for_increment ')' '{' instructions '}'  */
#line 673 "my_lang.y"
{

    
  printf("The for instruction is correct \n");
  //check if the value in condition is the same as ID 

}
#line 2216 "y.tab.c"
    break;

  case 92: /* control_instruction: FOR '(' ID ASSIGN rvalue ';' condition ';' for_increment ')' '{' instructions '}'  */
#line 681 "my_lang.y"
{
  printf("The for instruction is correct \n");
}
#line 2224 "y.tab.c"
    break;

  case 93: /* control_instruction: WHILE '(' condition ')' '{' instruction '}'  */
#line 685 "my_lang.y"
{
  printf("The while instruction is correct \n");
}
#line 2232 "y.tab.c"
    break;

  case 94: /* for_increment: ID ASSIGN rvalue  */
#line 691 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2240 "y.tab.c"
    break;

  case 95: /* for_increment: ID INC  */
#line 694 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2248 "y.tab.c"
    break;

  case 96: /* for_increment: ID DEC  */
#line 697 "my_lang.y"
{
  printf("The for increment is correct \n");
}
#line 2256 "y.tab.c"
    break;

  case 97: /* condition: lvalue OP_LOGIC rvalue  */
#line 703 "my_lang.y"
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
#line 2275 "y.tab.c"
    break;

  case 98: /* condition: condition OP_LOGIC condition  */
#line 718 "my_lang.y"
 {
  //printf("The condition is correct \n");
 }
#line 2283 "y.tab.c"
    break;

  case 99: /* condition: condition OP_LOGIC rvalue  */
#line 722 "my_lang.y"
 {
    //printf("The condition is correct \n");
 }
#line 2291 "y.tab.c"
    break;

  case 100: /* condition: lvalue OP_LOGIC condition  */
#line 726 "my_lang.y"
  {
    //printf("The condition is correct \n");
  }
#line 2299 "y.tab.c"
    break;

  case 101: /* condition: rvalue OP_LOGIC condition  */
#line 730 "my_lang.y"
  {
    //printf("The condition is correct \n");
  }
#line 2307 "y.tab.c"
    break;

  case 102: /* math_statem: math_statem '+' math_val  */
#line 740 "my_lang.y"
            {

             
             //add a node into AST 
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);

            }
#line 2323 "y.tab.c"
    break;

  case 103: /* math_statem: math_statem MINUS math_val  */
#line 753 "my_lang.y"
            {
             
             //add a node into AST 
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);

            }
#line 2338 "y.tab.c"
    break;

  case 104: /* math_statem: math_statem '*' math_val  */
#line 766 "my_lang.y"
            {
           // printf("The math statement is correct \n");
            struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2351 "y.tab.c"
    break;

  case 105: /* math_statem: math_statem '/' math_val  */
#line 776 "my_lang.y"
            {
           // printf("The math statement is correct \n");
            struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2364 "y.tab.c"
    break;

  case 106: /* math_statem: math_val '+' math_statem  */
#line 788 "my_lang.y"
            {
               //printf("math state here \n");
             //printf("The math statement is correct \n");
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //printf("The value of $2 is %s \n",'+');
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2379 "y.tab.c"
    break;

  case 107: /* math_statem: math_val MINUS math_statem  */
#line 800 "my_lang.y"
            {  
               //printf("math state here \n");
             //printf("The math statement is correct \n");
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
            // printf("The value of $2 is %s \n",'+');
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2394 "y.tab.c"
    break;

  case 108: /* math_statem: math_val '*' math_statem  */
#line 814 "my_lang.y"
            {
             //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2407 "y.tab.c"
    break;

  case 109: /* math_statem: math_val '/' math_statem  */
#line 825 "my_lang.y"
            {
             //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2420 "y.tab.c"
    break;

  case 110: /* math_statem: math_val '+' math_val  */
#line 836 "my_lang.y"
            { 
             
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             
             //printf("The value of $1 is %s and type is %d \n",$1->value,$1->type);
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2435 "y.tab.c"
    break;

  case 111: /* math_statem: math_val MINUS math_val  */
#line 848 "my_lang.y"
            {
               //printf("HERE \n");
               struct node* root = malloc(sizeof(struct node));
               strcpy(root->value,"-");
             
            // printf("The value of $1 is %s and type is %d \n",$1->value,$1->type);
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2450 "y.tab.c"
    break;

  case 112: /* math_statem: math_statem '+' math_statem  */
#line 860 "my_lang.y"
            {
              //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2463 "y.tab.c"
    break;

  case 113: /* math_statem: math_statem MINUS math_statem  */
#line 870 "my_lang.y"
            { 
             
              //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2477 "y.tab.c"
    break;

  case 114: /* math_statem: math_statem '*' math_statem  */
#line 882 "my_lang.y"
            { 
              
             // printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2491 "y.tab.c"
    break;

  case 115: /* math_statem: math_statem '/' math_statem  */
#line 893 "my_lang.y"
            { 
              
             // printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2505 "y.tab.c"
    break;

  case 116: /* math_statem: math_val '*' math_val  */
#line 903 "my_lang.y"
            {

              //printf("the op is %s\n",$2);
             // printf("The ma  th statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2520 "y.tab.c"
    break;

  case 117: /* math_statem: math_val '/' math_val  */
#line 915 "my_lang.y"
            {

              //printf("the op is %s\n",$2);
             // printf("The ma  th statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,(struct node*)(yyvsp[-2].node_ptr),(struct node*)(yyvsp[0].node_ptr),1);
            }
#line 2535 "y.tab.c"
    break;

  case 118: /* math_val: lvalue  */
#line 927 "my_lang.y"
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
#line 2557 "y.tab.c"
    break;

  case 119: /* math_val: INTEGER  */
#line 945 "my_lang.y"
          {
            //printf("The math value is %s INT  \n",$1);
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,(yyvsp[0].strval));
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            
          }
#line 2569 "y.tab.c"
    break;

  case 120: /* math_val: FLOAT  */
#line 953 "my_lang.y"
          {
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,"0");
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            //printf("The math value is correct \n");
          }
#line 2580 "y.tab.c"
    break;

  case 121: /* math_val: BOOL  */
#line 960 "my_lang.y"
          {
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,"0");
            (yyval.node_ptr) =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            //printf("The math value is correct \n");
          }
#line 2591 "y.tab.c"
    break;


#line 2595 "y.tab.c"

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

#line 972 "my_lang.y"

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

