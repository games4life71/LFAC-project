%{
#include <stdio.h>
#include "y.tab.h"
%}

RETURN "return"
CLASS "class"
TYPE "int"|"float"|"char"|"string"|"bool"
IF "if"
ELSE "else"
FOR "for"
WHILE "while"
SWITCH "switch"
CASE "case"
BREAK "break"
DEFAULT "default"
PRINT "print"
ID [a-zA-Z][a-zA-Z0-9]*
INTEGER [-]?[1-9][0-9]*
FLOAT [-]?([0][.][0-9][1-9]*)|[-]?([1-9][0-9]*[.][0-9]*)
ARRAY {ID}([\[]{INTEGER}[\]])+
STRING (["].*["])
BOOL "true"|"false"
SPACE (" ")+
OP_LOGIC "&&"|"||"|"<="|">="|"=="|"!="|"<"|">"
OP_MATH1 "+"|"-"
OP_MATH2 "*"|"/"|"%"

%option noyywrap

%%

{INTEGER} {printf("matched  '%s' with len %d\n",yytext,strlen(yytext)); yylval = atoi(yytext); return INTEGER;}
{TYPE} {return TYPE;}
{FLOAT} {return FLOAT;}
{STRING} {return STRING;}
{BOOL} {return BOOL;}
{ARRAY} {return ARRAY;}
{OP_LOGIC} {return OP_LOGIC;}
{IF} {return IF;}
{ELSE} {return ELSE;}
{FOR} {return FOR;}
{WHILE} {return WHILE;}
{SWITCH} {return SWITCH;}
{CASE} {return CASE;}
{BREAK} {return BREAK;}
{PRINT} {return PRINT;}
{CLASS} {return CLASS;}
{RETURN} {return RETURN};

"universal_code_start" return UNIVERSAL_START;
"universal_code_end" return UNIVERSAL_END;
"functions_code_start" return FUNCTIONS_START;
"functions_code_end" return FUNCTIONS_END;
"userdef_code_start" return USERDEF_START;
"userdef_code_end" return USERDEF_END;
"important_code_start" return MAIN_START;
"important_code_end" return MAIN_END;


[+' ']+ { printf("matched  '%s' with len %d\n",yytext,strlen(yytext)); return PLUS;}
[-' ']+ { printf("matched  '%s' with len %d\n",yytext,strlen(yytext)); return MINUS ;}
[' ']* { printf("matched space \n"); return SPACE;}
@[_a-zA-Z][_a-zA-Z0-9]* {return ID;}
'=' {return ASSIGN;}
[\t];
\n {yylineno++;};
. {return yytext[0];}





