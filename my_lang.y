%{
#include <stdio.h>
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
%}


%union{  
    
    int intval;
    char * strval;
    struct funct_param funct_param;
    struct funct_param funct_param_list[10];
}

%token CLASS
%token ASSIGN 
%token ID
%token TYPE 
%token COMPOSITE
%token ARRAY
%token CONSTANT
%token COMPOSITE_ARRAY
%token<intval> INTEGER
%token FLOAT
%token BOOL
%token STRING
%token OP_MATH1
%token OP_MATH2
%token OP_LOGIC
%token INC
%token DEC
%token PRINT
%token IF
%token ELSE
%token FOR 
%token WHILE
%token SWITCH
%token CASE
%token BREAK 
%token NUM
%token PLUS
%token SPACE
%token MINUS
%token MAIN_START
%token MAIN_END
%token UNIVERSAL_START
%token UNIVERSAL_END
%token FUNCTIONS_START
%token FUNCTIONS_END
%token USERDEF_START
%token USERDEF_END
%token RETURN

%left PLUS

%start program
%%

//here the program starts with a global section and a main section
//  how the program should look like 


//   universal_code_start 
//     int a = 2 ; //global variable
        
//   universal_code_end    

//   important_code_start
//     int b = 3 ; //local variable
//     b = 5 ; //assign a value to b
//     ...
//   important_code_end
program: univ_sec func_sec userdef_sec main_sec  {printf("The program is correct \n");} ;

userdef_sec : USERDEF_START userdef_vars USERDEF_END {printf("The userdef section is correct \n");} ;

userdef_vars : variable  {printf("The userdef variable is correct \n");} 
 | userdef_vars variable
 ;

univ_sec : UNIVERSAL_START univ_vars UNIVERSAL_END {printf("The universal section is correct \n");} ;

univ_vars : variable  {printf("The universal variable is correct \n");} 
 | univ_vars variable
 ;

variable : TYPE ID ASSIGN rvalue {printf("The variable is correct \n");}|
           TYPE ARRAY  |  // char a[5]; 
           TYPE ID ;  // int a;


rvalue : ID {printf("The rvalue is correct \n");}|
        INTEGER {printf("The rvalue is correct \n");}|
        FLOAT {printf("The rvalue is correct \n");}|
        BOOL {printf("The rvalue is correct \n");}|
        STRING {printf("The rvalue is correct \n");}|
        math_statem {printf("The rvalue is correct \n");};


func_sec : FUNCTIONS_START functions FUNCTIONS_END {printf("The functions section is correct \n");} ;

functions : function 
| functions function
;

function : '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN ID ';' '}' {printf("The function is correct \n");} //sintaxa: (returnVal) name (args){...}

arguments : variable_argument //tb de pus ca posibili param si expresii
| arguments ',' variable_argument
| function_argument
| | arguments ',' function_argument
;

variable_argument : TYPE ID ;

function_argument : '(' TYPE ')' ID '(' function_argument_params ')' ;

function_argument_params : TYPE
| function_argument_params ',' TYPE
| function_argument
| function_argument_params ',' function_argument
;

main_sec : MAIN_START instructions MAIN_END {printf("The main section is correct \n");} ;

instructions : instruction {printf("The instruction is correct \n");} 
 | instructions instruction 
 ;

instruction: statement ';' | // e.g. s = 5; s = 6;
             instruction statement ';' | //for multiple statements
             declaration ';' | //e.g. string s = "hello"; 
             instruction declaration ';' | //for multiple declarations
             control_instruction ';' | // if, for, while, switch
             instruction control_instruction ';' | //for multiple instructions


statement: ID ASSIGN math_statem{printf("The statement is correct \n");} ;

declaration: TYPE ID ASSIGN math_statem {printf("The declaration is correct \n");} ;


//implemented just the IF and ELSE instruction 
control_instruction: IF "$$$" condition "$$$" '{' instruction '}' {printf("The if instruction is correct \n");} 
| IF "$$$" condition "$$$" '{' instruction '}' ELSE '{' instruction '}' {printf("The if-else instruction is correct \n");} ;




//all possible combinations of conditions
condition : lvalue OP_LOGIC rvalue {printf("The condition is correct \n");}
| condition OP_LOGIC condition {printf("The condition is correct \n");};
| condition OP_LOGIC rvalue {printf("The condition is correct \n");}
| lvalue OP_LOGIC condition {printf("The condition is correct \n");};


//assign the right value to the left and right  value
rvalue: ID {printf("The rvalue is correct \n");}
lvalue: ID {printf("The lvalue is correct \n");}

math_statem : math_statem OP_MATH1 math_val {printf("The math statement is correct \n");} |  // e.g. (5-6)+7 
             math_statem OP_MATH2 math_val {printf("The math statement is correct \n");} |  // e.g. (5-6)*7
             math_val OP_MATH1 math_statem {printf("The math statement is correct \n");} |  //eg. 5+(6-7)
             math_val OP_MATH2 math_statem {printf("The math statement is correct \n");} | //eg. 5*(6-7)
             math_val OP_MATH1 math_val {printf("The math statement is correct \n");} |  //eg. 5+6
             math_val OP_MATH2 math_val {printf("The math statement is correct \n");};   //eg. 5*6   


math_val : lvalue {printf("The math value is correct \n");} |  // a + 5 where a is lvalue 
            INTEGER {printf("The math value is correct \n");} | //3+4 
            FLOAT {printf("The math value is correct \n");} | //3.4+5.6
            BOOL {printf("The math value is correct \n");}; //true+false



//all possible combinations of expressions
// E : E OP_MATH1 E {$$ = $1+$3;}|
//  E OP_MATH2 E {$$ = $1-$3;}|
// | INTEGER {$$ = $1; printf("The value of int  is %d  \n",($1));};


space: SPACE {printf("Space and the content of yytext is %s \n",*yytext);};


%%
// c code part 
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}
//can declare c functions here 


int main(int argc, char** argv){
yyin=fopen(argv[1],"r"); // if we want to parse a file instead of the standard input 

yyparse();
} 
