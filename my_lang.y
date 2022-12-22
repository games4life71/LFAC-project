

%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}


add_expr : 
NUMBER PLUSTOKEN NUMBER { printf("%f\n",($1+$3)); } 

add_expr: mul_expr
        | add_expr PLUS mul_expr  { $$ = $1 + $3; }
        | add_expr MINUS mul_expr { $$ = $1 ‑ $3; }
        ;
mul_expr: primary
        | mul_expr MUL primary { $$ = $1 ∗ $3; }
        | mul_expr DIV primary { $$ = $1 / $3; }
        ;
primary: NUMBER { $$ = $1; }
        ;