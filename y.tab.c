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
extern int yylval;
 
 //c code structs to be used in the parser

  struct funct_param{
    char type[50];
    char name[50];
  }

  struct lvalue
  {
    char name[50];
    char type[50];
    char value[50];
    char scope[50];
  }

        //maybe  a struct for a node in the AST tree ?? 

#line 103 "y.tab.c"

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
    PLUS = 284,                    /* PLUS  */
    SPACE = 285,                   /* SPACE  */
    MINUS = 286,                   /* MINUS  */
    MAIN_START = 287,              /* MAIN_START  */
    MAIN_END = 288,                /* MAIN_END  */
    UNIVERSAL_START = 289,         /* UNIVERSAL_START  */
    UNIVERSAL_END = 290,           /* UNIVERSAL_END  */
    FUNCTIONS_START = 291,         /* FUNCTIONS_START  */
    FUNCTIONS_END = 292,           /* FUNCTIONS_END  */
    USERDEF_START = 293,           /* USERDEF_START  */
    USERDEF_END = 294,             /* USERDEF_END  */
    RETURN = 295,                  /* RETURN  */
    STRUCT_START = 296,            /* STRUCT_START  */
    STRUCT_END = 297,              /* STRUCT_END  */
    CLASS_START = 298,             /* CLASS_START  */
    CLASS_END = 299                /* CLASS_END  */
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
#define PLUS 284
#define SPACE 285
#define MINUS 286
#define MAIN_START 287
#define MAIN_END 288
#define UNIVERSAL_START 289
#define UNIVERSAL_END 290
#define FUNCTIONS_START 291
#define FUNCTIONS_END 292
#define USERDEF_START 293
#define USERDEF_END 294
#define RETURN 295
#define STRUCT_START 296
#define STRUCT_END 297
#define CLASS_START 298
#define CLASS_END 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "my_lang.y"
  
    
    int intval;
    char * strval;
    struct funct_param funct_param;
    struct funct_param funct_param_list[10];
    struct lvalue lval;

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
  YYSYMBOL_PLUS = 29,                      /* PLUS  */
  YYSYMBOL_SPACE = 30,                     /* SPACE  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_MAIN_START = 32,                /* MAIN_START  */
  YYSYMBOL_MAIN_END = 33,                  /* MAIN_END  */
  YYSYMBOL_UNIVERSAL_START = 34,           /* UNIVERSAL_START  */
  YYSYMBOL_UNIVERSAL_END = 35,             /* UNIVERSAL_END  */
  YYSYMBOL_FUNCTIONS_START = 36,           /* FUNCTIONS_START  */
  YYSYMBOL_FUNCTIONS_END = 37,             /* FUNCTIONS_END  */
  YYSYMBOL_USERDEF_START = 38,             /* USERDEF_START  */
  YYSYMBOL_USERDEF_END = 39,               /* USERDEF_END  */
  YYSYMBOL_RETURN = 40,                    /* RETURN  */
  YYSYMBOL_STRUCT_START = 41,              /* STRUCT_START  */
  YYSYMBOL_STRUCT_END = 42,                /* STRUCT_END  */
  YYSYMBOL_CLASS_START = 43,               /* CLASS_START  */
  YYSYMBOL_CLASS_END = 44,                 /* CLASS_END  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* '{'  */
  YYSYMBOL_48_ = 48,                       /* ';'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_50_ = 50,                       /* ','  */
  YYSYMBOL_51_ = 51,                       /* "$$$"  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_program = 53,                   /* program  */
  YYSYMBOL_userdef_sec = 54,               /* userdef_sec  */
  YYSYMBOL_userdef = 55,                   /* userdef  */
  YYSYMBOL_struct_def = 56,                /* struct_def  */
  YYSYMBOL_struct_vars = 57,               /* struct_vars  */
  YYSYMBOL_class_def = 58,                 /* class_def  */
  YYSYMBOL_class_info = 59,                /* class_info  */
  YYSYMBOL_userdef_vars = 60,              /* userdef_vars  */
  YYSYMBOL_univ_sec = 61,                  /* univ_sec  */
  YYSYMBOL_univ_vars = 62,                 /* univ_vars  */
  YYSYMBOL_variable = 63,                  /* variable  */
  YYSYMBOL_rvalue = 64,                    /* rvalue  */
  YYSYMBOL_lvalue = 65,                    /* lvalue  */
  YYSYMBOL_func_sec = 66,                  /* func_sec  */
  YYSYMBOL_functions = 67,                 /* functions  */
  YYSYMBOL_function = 68,                  /* function  */
  YYSYMBOL_arguments = 69,                 /* arguments  */
  YYSYMBOL_variable_argument = 70,         /* variable_argument  */
  YYSYMBOL_function_argument = 71,         /* function_argument  */
  YYSYMBOL_function_argument_params = 72,  /* function_argument_params  */
  YYSYMBOL_main_sec = 73,                  /* main_sec  */
  YYSYMBOL_instructions = 74,              /* instructions  */
  YYSYMBOL_instruction = 75,               /* instruction  */
  YYSYMBOL_statement = 76,                 /* statement  */
  YYSYMBOL_declaration = 77,               /* declaration  */
  YYSYMBOL_control_instruction = 78,       /* control_instruction  */
  YYSYMBOL_condition = 79,                 /* condition  */
  YYSYMBOL_math_statem = 80,               /* math_statem  */
  YYSYMBOL_math_val = 81                   /* math_val  */
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
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

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
      45,    46,     2,     2,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    49,     2,     2,     2,     2,
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
      51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   106,   106,   108,   111,   112,   113,   114,   115,   116,
     118,   121,   122,   126,   128,   129,   130,   131,   133,   134,
     137,   139,   140,   143,   149,   156,   163,   164,   165,   166,
     167,   168,   170,   171,   174,   176,   177,   180,   182,   183,
     184,   185,   185,   188,   190,   192,   193,   194,   195,   198,
     200,   201,   204,   205,   206,   207,   208,   209,   209,   212,
     213,   214,   232,   233,   235,   241,   247,   256,   265,   266,
     267,   268,   272,   273,   274,   275,   282,   283,   284,   285,
     286,   287,   290,   291,   292,   293
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
  "BREAK", "NUM", "PLUS", "SPACE", "MINUS", "MAIN_START", "MAIN_END",
  "UNIVERSAL_START", "UNIVERSAL_END", "FUNCTIONS_START", "FUNCTIONS_END",
  "USERDEF_START", "USERDEF_END", "RETURN", "STRUCT_START", "STRUCT_END",
  "CLASS_START", "CLASS_END", "'('", "')'", "'{'", "';'", "'}'", "','",
  "\"$$$\"", "$accept", "program", "userdef_sec", "userdef", "struct_def",
  "struct_vars", "class_def", "class_info", "userdef_vars", "univ_sec",
  "univ_vars", "variable", "rvalue", "lvalue", "func_sec", "functions",
  "function", "arguments", "variable_argument", "function_argument",
  "function_argument_params", "main_sec", "instructions", "instruction",
  "statement", "declaration", "control_instruction", "condition",
  "math_statem", "math_val", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -21,    22,    87,    80,   124,     0,  -120,  -120,    73,    90,
     133,  -120,  -120,  -120,   139,   -22,  -120,    32,   115,   190,
     103,  -120,  -120,    22,    11,    57,  -120,  -120,    22,  -120,
     170,  -120,    63,  -120,   158,   169,   174,  -120,  -120,  -120,
     181,   184,   146,    68,  -120,    -1,  -120,  -120,  -120,  -120,
    -120,    22,  -120,    -3,   134,   104,   123,   125,   173,   159,
     170,   131,   161,   162,   200,   200,   200,   200,   136,  -120,
    -120,  -120,  -120,  -120,   200,     6,   182,  -120,   155,   201,
     155,   190,  -120,   170,   171,   172,   175,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,   181,   184,   181,   184,
      19,   181,   202,   212,  -120,   -36,  -120,  -120,   190,   204,
      82,   218,    59,  -120,   181,  -120,  -120,  -120,   -30,  -120,
     178,  -120,    19,  -120,   181,   190,   190,   179,   200,   180,
     183,   220,  -120,  -120,  -120,   204,   211,  -120,   211,   170,
      86,   170,   170,   186,    16,   155,    62,   148,    21,   207,
      55,  -120,   227,  -120,  -120,    31,   187,   228,   188,  -120,
      26,   170,   231,   189,  -120,  -120,   117,   200,  -120,  -120,
      42,   192,   170,   138,  -120
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    21,     1,     0,     0,
      25,    24,    20,    22,     0,     0,    35,     0,     0,     0,
       0,    34,    36,     0,     0,     0,     6,     8,     4,    18,
      58,     2,    26,    33,    27,    28,    29,    30,    23,    82,
      31,     0,     0,     0,    11,     0,    14,    16,     3,     7,
       9,     5,    19,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      12,    13,    15,    17,     0,    41,    64,    66,     0,     0,
       0,     0,    49,    51,     0,     0,     0,    52,    54,    56,
      32,    83,    84,    85,    76,    77,    78,    80,    79,    81,
      41,    59,     0,     0,    62,     0,    38,    40,     0,     0,
       0,     0,     0,    61,    31,    53,    55,    57,     0,    43,
       0,    63,     0,    65,    31,     0,     0,     0,     0,     0,
       0,     0,    39,    42,    72,    82,    75,    74,    73,    58,
       0,    58,    58,     0,     0,     0,     0,     0,     0,    68,
       0,    71,     0,    45,    47,     0,     0,     0,     0,    44,
       0,    58,     0,     0,    46,    48,     0,     0,    37,    69,
       0,     0,    58,     0,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,  -120,   215,  -120,   216,  -120,   217,  -120,
    -120,   107,   -72,   -19,  -120,  -120,   112,   137,   121,  -119,
    -120,  -120,   102,   -57,   -53,   -52,   -49,   -76,   -48,   150
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    18,    25,    26,    43,    27,    45,    28,     3,
       5,    29,    38,    58,     9,    15,    16,   105,   106,   107,
     155,    31,    59,    60,    61,    62,    63,   110,    40,    41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    74,    83,   133,   112,     4,     4,    84,    85,   113,
     121,    86,   102,     1,   122,    21,   130,     4,    96,    98,
     122,    53,    54,    14,    33,   102,   101,   153,     4,   154,
      84,    85,   164,   114,    86,    12,   123,    55,     4,    56,
      57,   165,    75,    71,    14,    39,    39,    39,    39,   136,
     138,   103,   104,   134,   137,    39,    14,    64,    65,   109,
     124,   109,    39,     4,   103,   149,   103,    53,    54,   150,
      33,   103,   126,    23,     4,    24,   126,   159,   -32,   -32,
     140,   160,   144,    55,   146,    56,    57,     7,   171,    39,
      83,    84,    85,    84,    85,    86,    48,    86,    23,   126,
      24,    64,    65,   157,   166,   129,   135,   135,     6,    39,
      69,   151,    13,    84,    85,   173,     8,    86,    14,   170,
      84,    85,    53,    54,    86,    33,   109,    22,    17,    10,
      44,    46,    11,   127,   145,    52,    47,    19,    55,    76,
      56,    57,    77,    53,    54,    20,    33,    30,    39,    42,
      70,    68,    72,    53,    54,    78,    33,    73,    52,    55,
      90,    56,    57,    33,    53,    54,   169,    33,    79,    55,
      80,    56,    57,   -83,   -83,    53,    54,    81,    33,    87,
      55,   100,    56,    57,   -84,   -84,   108,   174,   152,   -85,
     -85,    55,    82,    56,    57,    32,    64,    65,    33,    66,
      67,    34,    35,    36,    37,    90,   111,   119,    33,    88,
      89,    91,    92,    93,    94,    95,    97,    99,   120,   115,
     116,   125,   128,   117,   131,   143,   139,   141,   126,   156,
     142,   148,   158,   162,   161,   167,   163,   118,   168,   172,
      49,    50,    51,   132,   147
};

static const yytype_uint8 yycheck[] =
{
      19,     4,    59,   122,    80,     6,     6,    60,    60,    81,
      46,    60,     6,    34,    50,    37,    46,     6,    66,    67,
      50,     5,     6,    45,     8,     6,    74,     6,     6,   148,
      83,    83,     6,    81,    83,    35,   108,    21,     6,    23,
      24,   160,    45,    44,    45,    64,    65,    66,    67,   125,
     126,    45,    46,   125,   126,    74,    45,    15,    16,    78,
     108,    80,    81,     6,    45,    49,    45,     5,     6,   145,
       8,    45,    17,    41,     6,    43,    17,    46,    15,    16,
     128,    50,   139,    21,   141,    23,    24,     0,    46,   108,
     147,   144,   144,   146,   146,   144,    39,   146,    41,    17,
      43,    15,    16,    48,   161,    46,   125,   126,     1,   128,
      42,    49,     5,   166,   166,   172,    36,   166,    45,   167,
     173,   173,     5,     6,   173,     8,   145,    15,    38,     5,
      23,    24,     8,    51,    48,    28,    24,     4,    21,     5,
      23,    24,     8,     5,     6,     6,     8,    32,   167,    46,
      43,     5,    45,     5,     6,    51,     8,    45,    51,    21,
       5,    23,    24,     8,     5,     6,    49,     8,    45,    21,
      45,    23,    24,    15,    16,     5,     6,     4,     8,    48,
      21,    45,    23,    24,    15,    16,     4,    49,    40,    15,
      16,    21,    33,    23,    24,     5,    15,    16,     8,    15,
      16,    11,    12,    13,    14,     5,     5,     5,     8,    48,
      48,    11,    12,    13,    64,    65,    66,    67,     6,    48,
      48,    17,     4,    48,    46,     5,    47,    47,    17,    22,
      47,    45,     5,     5,    47,     4,    48,   100,    49,    47,
      25,    25,    25,   122,   142
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    34,    53,    61,     6,    62,    63,     0,    36,    66,
       5,     8,    35,    63,    45,    67,    68,    38,    54,     4,
       6,    37,    68,    41,    43,    55,    56,    58,    60,    63,
      32,    73,     5,     8,    11,    12,    13,    14,    64,    65,
      80,    81,    46,    57,    63,    59,    63,    68,    39,    56,
      58,    60,    63,     5,     6,    21,    23,    24,    65,    74,
      75,    76,    77,    78,    15,    16,    15,    16,     5,    42,
      63,    44,    63,    68,     4,    45,     5,     8,    51,    45,
      45,     4,    33,    75,    76,    77,    78,    48,    48,    48,
       5,    11,    12,    13,    81,    81,    80,    81,    80,    81,
      45,    80,     6,    45,    46,    69,    70,    71,     4,    65,
      79,     5,    79,    64,    80,    48,    48,    48,    69,     5,
       6,    46,    50,    64,    80,    17,    17,    51,     4,    46,
      46,    46,    70,    71,    64,    65,    79,    64,    79,    47,
      80,    47,    47,     5,    75,    48,    75,    74,    45,    49,
      79,    49,    40,     6,    71,    72,    22,    48,     5,    46,
      50,    47,     5,    48,     6,    71,    75,     4,    49,    49,
      80,    46,    47,    75,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    55,    55,    55,    55,    55,    55,
      56,    57,    57,    58,    59,    59,    59,    59,    60,    60,
      61,    62,    62,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    65,    65,    66,    67,    67,    68,    69,    69,
      69,    69,    69,    70,    71,    72,    72,    72,    72,    73,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    77,    77,    77,    77,    78,    78,
      78,    78,    79,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    81
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     1,     2,     1,     2,     1,     2,
       3,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       3,     1,     2,     4,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,    13,     1,     3,
       1,     0,     3,     2,     7,     1,     3,     1,     3,     3,
       1,     2,     2,     3,     2,     3,     2,     3,     0,     3,
       3,     3,     3,     4,     2,     4,     2,     4,     7,    11,
      15,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1
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
#line 1444 "y.tab.c"
    break;

  case 3: /* userdef_sec: USERDEF_START userdef USERDEF_END  */
#line 108 "my_lang.y"
                                                {printf("The userdef section is correct \n");}
#line 1450 "y.tab.c"
    break;

  case 4: /* userdef: userdef_vars  */
#line 111 "my_lang.y"
                       {printf("The userdef is correct \n");}
#line 1456 "y.tab.c"
    break;

  case 6: /* userdef: struct_def  */
#line 113 "my_lang.y"
              {printf("The userdef is correct \n");}
#line 1462 "y.tab.c"
    break;

  case 8: /* userdef: class_def  */
#line 115 "my_lang.y"
             {printf("The userdef is correct \n");}
#line 1468 "y.tab.c"
    break;

  case 10: /* struct_def: STRUCT_START struct_vars STRUCT_END  */
#line 118 "my_lang.y"
                                                 {printf("The struct is correct \n");}
#line 1474 "y.tab.c"
    break;

  case 11: /* struct_vars: variable  */
#line 121 "my_lang.y"
                        {printf("The struct variable is correct \n");}
#line 1480 "y.tab.c"
    break;

  case 13: /* class_def: CLASS_START class_info CLASS_END  */
#line 126 "my_lang.y"
                                             {printf("The class is correct \n");}
#line 1486 "y.tab.c"
    break;

  case 14: /* class_info: variable  */
#line 128 "my_lang.y"
                      {printf("The class variable is correct \n");}
#line 1492 "y.tab.c"
    break;

  case 16: /* class_info: function  */
#line 130 "my_lang.y"
             {printf("The class function is correct \n");}
#line 1498 "y.tab.c"
    break;

  case 18: /* userdef_vars: variable  */
#line 133 "my_lang.y"
                         {printf("The userdef variable is correct \n");}
#line 1504 "y.tab.c"
    break;

  case 20: /* univ_sec: UNIVERSAL_START univ_vars UNIVERSAL_END  */
#line 137 "my_lang.y"
                                                   {printf("The universal section is correct \n");}
#line 1510 "y.tab.c"
    break;

  case 21: /* univ_vars: variable  */
#line 139 "my_lang.y"
                      {printf("The universal variable is correct \n");}
#line 1516 "y.tab.c"
    break;

  case 23: /* variable: TYPE ID ASSIGN rvalue  */
#line 144 "my_lang.y"
        { 
          printf("The variable is correct \n");
          add_var((yyvsp[-2].strval), (yyvsp[-3].strval), rvalue,"global",false,0);  
        }
#line 1525 "y.tab.c"
    break;

  case 24: /* variable: TYPE ARRAY  */
#line 150 "my_lang.y"
        {
        char *name = strtok((yyvsp[0].strval), "[");
        char *size = strtok(NULL, "]");
        int size_int = atoi(size);
        add_var(name, (yyvsp[-1].strval), "","global",true,size_int);
        }
#line 1536 "y.tab.c"
    break;

  case 25: /* variable: TYPE ID  */
#line 157 "my_lang.y"
        {
        add_var((yyvsp[0].strval), (yyvsp[-1].strval), "","global",false,0);
        }
#line 1544 "y.tab.c"
    break;

  case 26: /* rvalue: ID  */
#line 163 "my_lang.y"
            {printf("The rvalue is correct \n");}
#line 1550 "y.tab.c"
    break;

  case 27: /* rvalue: INTEGER  */
#line 164 "my_lang.y"
                {printf("The rvalue is correct \n");}
#line 1556 "y.tab.c"
    break;

  case 28: /* rvalue: FLOAT  */
#line 165 "my_lang.y"
              {printf("The rvalue is correct \n");}
#line 1562 "y.tab.c"
    break;

  case 29: /* rvalue: BOOL  */
#line 166 "my_lang.y"
             {printf("The rvalue is correct \n");}
#line 1568 "y.tab.c"
    break;

  case 30: /* rvalue: STRING  */
#line 167 "my_lang.y"
               {printf("The rvalue is correct \n");}
#line 1574 "y.tab.c"
    break;

  case 31: /* rvalue: math_statem  */
#line 168 "my_lang.y"
                    {printf("The rvalue is correct \n");}
#line 1580 "y.tab.c"
    break;

  case 32: /* lvalue: ID  */
#line 170 "my_lang.y"
           {printf("The lvalue is correct \n");}
#line 1586 "y.tab.c"
    break;

  case 33: /* lvalue: ARRAY  */
#line 171 "my_lang.y"
                { printf("The lvalue is correct \n");}
#line 1592 "y.tab.c"
    break;

  case 34: /* func_sec: FUNCTIONS_START functions FUNCTIONS_END  */
#line 174 "my_lang.y"
                                                   {printf("The functions section is correct \n");}
#line 1598 "y.tab.c"
    break;

  case 37: /* function: '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN ID ';' '}'  */
#line 180 "my_lang.y"
                                                                                {printf("The function is correct \n");}
#line 1604 "y.tab.c"
    break;

  case 49: /* main_sec: MAIN_START instructions MAIN_END  */
#line 198 "my_lang.y"
                                            {printf("The main section is correct \n");}
#line 1610 "y.tab.c"
    break;

  case 50: /* instructions: instruction  */
#line 200 "my_lang.y"
                           {printf("The instruction is correct \n");}
#line 1616 "y.tab.c"
    break;

  case 59: /* statement: ID ASSIGN math_statem  */
#line 212 "my_lang.y"
                                {printf("The statement is correct \n");}
#line 1622 "y.tab.c"
    break;

  case 60: /* statement: lvalue ASSIGN math_statem  */
#line 213 "my_lang.y"
                                     {printf("The statement is correct \n");}
#line 1628 "y.tab.c"
    break;

  case 61: /* statement: lvalue ASSIGN rvalue  */
#line 215 "my_lang.y"
           {
            printf("The statement is correct \n");
            //if the var is declared as a global var
            if(is_declared_global((yyvsp[-2].lval)))
            {
              //compute the assignment
            }
            else if(is_declared((yyvsp[-2].lval)))
            {
              //compute the assignment
            }
            else
            {
              printf("The variable %s is not declared \n", (yyvsp[-2].lval));
            }

           }
#line 1650 "y.tab.c"
    break;

  case 62: /* statement: ID '(' ')'  */
#line 232 "my_lang.y"
                      {printf("The statement is correct \n");}
#line 1656 "y.tab.c"
    break;

  case 63: /* statement: ID '(' arguments ')'  */
#line 233 "my_lang.y"
                                {printf("The statement is correct \n");}
#line 1662 "y.tab.c"
    break;

  case 64: /* declaration: TYPE ID  */
#line 236 "my_lang.y"
            {
              printf("The declaration is correct \n");
              add_var((yyvsp[0].strval), (yyvsp[-1].strval),"","main",false,0);

            }
#line 1672 "y.tab.c"
    break;

  case 65: /* declaration: TYPE ID ASSIGN rvalue  */
#line 242 "my_lang.y"
             {
              printf("The declaration is correct \n");
              add_var((yyvsp[-2].strval), (yyvsp[-3].strval),(yyvsp[0].lval),"main",false,0);
              
             }
#line 1682 "y.tab.c"
    break;

  case 66: /* declaration: TYPE ARRAY  */
#line 248 "my_lang.y"
             {
              printf("The declaration is correct \n");
              char *id = strtok((yyvsp[0].strval), "["); //int a[10]
              char *size = strtok(NULL, "]");
              int arr_size = atoi(size);
              //printf("the size is %s \n", size);
              add_var(id, (yyvsp[-1].strval),"","main",true,arr_size);
             }
#line 1695 "y.tab.c"
    break;

  case 67: /* declaration: TYPE ID ASSIGN math_statem  */
#line 257 "my_lang.y"
             {
              printf("The declaration is correct \n");
              //compute the math statement first ?  
               
            }
#line 1705 "y.tab.c"
    break;

  case 68: /* control_instruction: IF "$$$" condition "$$$" '{' instruction '}'  */
#line 265 "my_lang.y"
                                                                  {printf("The if instruction is correct \n");}
#line 1711 "y.tab.c"
    break;

  case 69: /* control_instruction: IF "$$$" condition "$$$" '{' instruction '}' ELSE '{' instruction '}'  */
#line 266 "my_lang.y"
                                                                        {printf("The if-else instruction is correct \n");}
#line 1717 "y.tab.c"
    break;

  case 70: /* control_instruction: FOR '(' ID ASSIGN math_statem ';' condition ';' ID ASSIGN math_statem ')' '{' instruction '}'  */
#line 267 "my_lang.y"
                                                                                              {printf("The for instruction is correct \n");}
#line 1723 "y.tab.c"
    break;

  case 71: /* control_instruction: WHILE '(' condition ')' '{' instruction '}'  */
#line 268 "my_lang.y"
                                            {printf("The while instruction is correct \n");}
#line 1729 "y.tab.c"
    break;

  case 72: /* condition: lvalue OP_LOGIC rvalue  */
#line 272 "my_lang.y"
                                   {printf("The condition is correct \n");}
#line 1735 "y.tab.c"
    break;

  case 73: /* condition: condition OP_LOGIC condition  */
#line 273 "my_lang.y"
                               {printf("The condition is correct \n");}
#line 1741 "y.tab.c"
    break;

  case 74: /* condition: condition OP_LOGIC rvalue  */
#line 274 "my_lang.y"
                            {printf("The condition is correct \n");}
#line 1747 "y.tab.c"
    break;

  case 75: /* condition: lvalue OP_LOGIC condition  */
#line 275 "my_lang.y"
                            {printf("The condition is correct \n");}
#line 1753 "y.tab.c"
    break;

  case 76: /* math_statem: math_statem OP_MATH1 math_val  */
#line 282 "my_lang.y"
                                            {printf("The math statement is correct \n");}
#line 1759 "y.tab.c"
    break;

  case 77: /* math_statem: math_statem OP_MATH2 math_val  */
#line 283 "my_lang.y"
                                           {printf("The math statement is correct \n");}
#line 1765 "y.tab.c"
    break;

  case 78: /* math_statem: math_val OP_MATH1 math_statem  */
#line 284 "my_lang.y"
                                           {printf("The math statement is correct \n");}
#line 1771 "y.tab.c"
    break;

  case 79: /* math_statem: math_val OP_MATH2 math_statem  */
#line 285 "my_lang.y"
                                           {printf("The math statement is correct \n");}
#line 1777 "y.tab.c"
    break;

  case 80: /* math_statem: math_val OP_MATH1 math_val  */
#line 286 "my_lang.y"
                                        {printf("The math statement is correct \n");}
#line 1783 "y.tab.c"
    break;

  case 81: /* math_statem: math_val OP_MATH2 math_val  */
#line 287 "my_lang.y"
                                        {printf("The math statement is correct \n");}
#line 1789 "y.tab.c"
    break;

  case 82: /* math_val: lvalue  */
#line 290 "my_lang.y"
                  {printf("The math value is correct \n");}
#line 1795 "y.tab.c"
    break;

  case 83: /* math_val: INTEGER  */
#line 291 "my_lang.y"
                    {printf("The math value is correct \n");}
#line 1801 "y.tab.c"
    break;

  case 84: /* math_val: FLOAT  */
#line 292 "my_lang.y"
                  {printf("The math value is correct \n");}
#line 1807 "y.tab.c"
    break;

  case 85: /* math_val: BOOL  */
#line 293 "my_lang.y"
                 {printf("The math value is correct \n");}
#line 1813 "y.tab.c"
    break;


#line 1817 "y.tab.c"

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

#line 306 "my_lang.y"

// c code part 
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}
//can declare c functions here 


int main(int argc, char** argv){
yyin=fopen(argv[1],"r"); // if we want to parse a file instead of the standard input 
yyparse();
} 
