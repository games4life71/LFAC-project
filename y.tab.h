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

#line 164 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
