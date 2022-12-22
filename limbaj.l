%{
#include <stdio.h>
#include "y.tab.h"
%}

%option noyywrap
%%


"begin"  printf("When find begin do this\n");
[a‑z]    printf("Lowercase word\n");
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