%{
#include <stdio.h>
#include "y.tab.h"
%}

%option noyywrap
%%

"begin"  printf("When find begin do this\n");
[a-z]    printf("Lowercase word\n");
[A‑Z]    printf("Uppercase word\n");
[a‑ZA‑Z] printf("Word\n");
[0‑9]    printf("Integer\n");
[0‑9.]   printf("Float\n");
";"      printf("Semicolon\n");
"("      printf("Open parentheses\n");
")"      printf("Close parentheses\n");

//returning tokens 

[a-z] return WORD
[0‑9]   yylval=atoi(yytext); return NUMBER;

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
INTEGER 0|[-]?[1-9][0-9]*
FLOAT [-]?([0][.][0-9][1-9]*)|[-]?([1-9][0-9]*[.][0-9]*)
ARRAY {ID}([\[]{INTEGER}[\]])+
STRING (["].*["])
BOOL "true"|"false"
SPACE (" ")+
OP_LOGIC "&&"|"||"|"<="|">="|"=="|"!="|"<"|">"
OP_MATH1 "+"|"-"
OP_MATH2 "*"|"/"|"%"



"int"|"float"|"char"|"string" {return TIP;}
"begin_progr" {return BGIN;}
"end_progr" {return END;}
@[_a-zA-Z][_a-zA-Z0-9]* {return ID;}
":=" {return ASSIGN;}
[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}



%% 
