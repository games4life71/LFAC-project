%{
#include <stdio.h>
#include "y.tab.h"
%}

TYPE "int"|"float"|"char"|"string"|"bool"
IF "if"
ELSE "else"
FOR "for"
WHILE "while"
SWITCH "switch"
CASE "case"
BREAK "break"
DEFAULT "default"
PRINT "show"
RETURN "return"
ID [a-zA-Z][a-zA-Z0-9]*
INTEGER [-]?[1-9][0-9]*
FLOAT [-]?([0][.][0-9][1-9]*)|[-]?([1-9][0-9]*[.][0-9]*)
ARRAY {ID}([\[]{INTEGER}[\]])+  
STRING (["].*["])
BOOL "true"|"false"
SPACE (" ")+
OP_LOGIC "&&"|"||"|"<="|">="|"=="|"!="|"<"|">"
OP_MATH1 "+"
OP_MATH2 "*"|"/"|"%"


%option noyywrap

%%

{INTEGER} {/*printf("matched  '%s' with len %d\n",yytext,strlen(yytext));*/yylval.strval = strdup(yytext); return INTEGER;}
{TYPE} {printf("the type is %s\n",yytext); yylval.strval = strdup(yytext); return TYPE;}
{FLOAT} {return FLOAT;}
{STRING} {return STRING;}
{BOOL} {return BOOL;}
{ARRAY} { /*printf("matched array token is %s\n",yytext);*/yylval.strval = strdup(yytext); return ARRAY;}
{OP_LOGIC} {return OP_LOGIC;}
{IF} {return IF;}
{ELSE} {return ELSE;}
{FOR} {return FOR;}
{WHILE} {return WHILE;}
{SWITCH} {return SWITCH;}
{CASE} {return CASE;}
{BREAK} {return BREAK;}
{PRINT} {return PRINT;} 
{RETURN} {return RETURN;}
"typeof" {return TYPEOF;}
"immutable" {return CONST;}

{ID}([.]{ID})* {  yylval.strval = strdup(yytext); return ID;}
{OP_MATH1} {return OP_MATH1;}
{OP_MATH2} {return OP_MATH2;}
"++" {yylval.strval = strdup(yytext); return INC;}
"--" {yylval.strval = strdup(yytext);return DEC;}
"important_code_start" return MAIN_START;
"important_code_end" return MAIN_END;
"universal_code_start" return UNIVERSAL_START;
"universal_code_end" {  return UNIVERSAL_END;}
"struct_start" return STRUCT_START;
"struct_end" return STRUCT_END;
"class_start" return CLASS_START;
"class_end" return CLASS_END;
"user_code_start" return USERDEF_START;
"user_code_end" return USERDEF_END;
"function_start" return FUNCTIONS_START;
"function_end" return FUNCTIONS_END;




"=" {return ASSIGN;}
[\t];
{SPACE} {}

\n {  yylineno++;}
. {  /*printf("nothing matched..returning %s with len %d\n",yytext, strlen(yytext));*/ return yytext[0]; }





