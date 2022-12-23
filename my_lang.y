%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}

%token ID TIP BGIN END ASSIGN NR 
%token <strval>ID
%token <strval>TYPE 
%token <strval>COMPOSITE
%token <strval>ARRAY
%token <strval>CONSTANT
%token <strval>COMPOSITE_ARRAY
%token <strval>INTEGER
%token <strval>FLOAT
%token <strval>BOOL
%token <strval>STRING
%token <strval>OP_MATH1
%token <strval>OP_MATH2
%token <strval>INC
%token <strval>DEC

%start progr
%%
progr: declaratii bloc {printf("program corect sintactic\n");}
     ;

declaratii :  declaratie ';'
	   | declaratii declaratie ';'
	   ;
declaratie : TIP ID 
           | TIP ID '(' lista_param ')'
           | TIP ID '(' ')'
           ;
lista_param : param
            | lista_param ','  param 
            ;
            
param : TIP ID
      ; 
      
/* bloc */
bloc : BGIN list END  
     ;
     
/* lista instructiuni */
list :  statement ';' 
     | list statement ';'
     ;

/* instructiune */
statement: ID ASSIGN ID
         | ID ASSIGN NR  		 
         | ID '(' lista_apel ')'
         ;
        
lista_apel : NR
           | lista_apel ',' NR
           ;
%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 
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
