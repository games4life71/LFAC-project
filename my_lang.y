%{
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


        //maybe  a struct for a node in the AST tree ?? 
        //c code structs to be used in the parser

  struct funct_param{
    char type[50];
    char name[50];
  };


  struct lvalue
  {
    char name[50];
    char type[50];
    char value[50];
    char scope[50];
  };
%}



%union{  
    int intval;
    char * strval;  
    struct lvalue*  lval;
}


%token <strval> CLASS
%token<strval> ASSIGN 
%token<strval> ID
%token<strval> TYPE 
%token <strval>COMPOSITE
%token<strval> ARRAY
%token <strval>CONSTANT
%token <strval>COMPOSITE_ARRAY
%token<intval> INTEGER
%token <strval>FLOAT
%token <strval>BOOL
%token <strval>STRING
%token <strval>OP_MATH1
%token <strval>OP_MATH2
%token <strval>OP_LOGIC
%token <strval>INC
%token <strval>DEC
%token <strval>PRINT
%token <strval>IF
%token <strval>ELSE
%token<strval> FOR 
%token <strval>WHILE
%token <strval>SWITCH
%token <strval>CASE
%token <strval>BREAK 
%token <strval>NUM
%token <strval>SPACE
%token <strval>MINUS
%token <strval>MAIN_START
%token <strval>MAIN_END
%token <strval>UNIVERSAL_START
%token <strval>UNIVERSAL_END
%token <strval>FUNCTIONS_START
%token <strval>FUNCTIONS_END
%token <strval>USERDEF_START
%token <strval>USERDEF_END
%token <strval>RETURN
%token <strval>STRUCT_START
%token <strval>STRUCT_END
%token <strval>CLASS_START
%token <strval>CLASS_END
%left <strval>PLUS


%type <lval> lvalue
%type <lval> rvalue


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

userdef_sec : USERDEF_START userdef USERDEF_END {printf("The userdef section is correct \n");} ;


userdef : userdef_vars {printf("The userdef is correct \n");} 
 | userdef userdef_vars
 | struct_def {printf("The userdef is correct \n");}
 | userdef struct_def 
 | class_def {printf("The userdef is correct \n");}
 | userdef class_def;

struct_def : STRUCT_START struct_vars STRUCT_END {printf("The struct is correct \n");} ;


struct_vars : variable  {printf("The struct variable is correct \n");} 
 | struct_vars variable //for multiple variables in a struct
 ;


class_def : CLASS_START class_info CLASS_END {printf("The class is correct \n");} ;

class_info: variable  {printf("The class variable is correct \n");} 
 | class_info variable //for multiple variables in a class
 | function  {printf("The class function is correct \n");}
 | class_info function; //for multiple functions in a class

userdef_vars : variable  {printf("The userdef variable is correct \n");} 
 | userdef_vars variable
 ;

univ_sec : UNIVERSAL_START univ_vars UNIVERSAL_END {printf("The universal section is correct \n");} ;

univ_vars : variable  {printf("The universal variable is correct \n");} 
 | univ_vars variable
 ;

variable : TYPE ID ASSIGN rvalue 
        { 
          printf("The variable is correct \n");
          add_var($2, $1, $4,"global",false,0);  
        } |

        TYPE ARRAY
        {
        char *name = strtok($2, "[");
        char *size = strtok(NULL, "]");
        int size_int = atoi(size);
        add_var(name, $1, "","global",true,size_int);
        }  |  // char a[5]; 
        TYPE ID
        {
        add_var($2, $1, "","global",false,0);
        }    // char a;
         ;  // int a;


rvalue : ID {printf("The rvalue is correct \n");}|
        INTEGER {printf("The rvalue is correct \n");}|
        FLOAT {printf("The rvalue is correct \n");}|
        BOOL {printf("The rvalue is correct \n");}|
        STRING {printf("The rvalue is correct \n");}|
        math_statem {printf("The rvalue is correct \n");};

lvalue: ID {printf("The lvalue is correct \n");}
        | ARRAY   
          {
           printf("The lvalue is correct \n");
           //check if the variable is declared
           char *name = strtok($1, "[");

           if(!is_declared(name,"global"))
           {
            printf("The variable %s is not declared \n",name);
            exit(1);
           }
           
           else
           {
            //check if the variable is an array
            if(!is_array(name,"global"))
            {
              printf("The variable %s is not an array \n",name);
              exit(1);
            }
            else
            {
              //check if the index is valid
              char * id = strtok($1, "["); 
              char *index = strtok(NULL, "]");
              int index_int = atoi(index);

              int size = get_size(name,"global");
              if(index_int >= size)
              {
                printf("The index %d is out of bounds \n",index_int);
                exit(1);
              }
              //get the array from the table 
              struct array_info *curr_array = get_array(name);
              struct element  curr_elem = curr_array->elements[index_int];
              $$ = curr_elem.value;
            }
           }
          } ; 
         

func_sec : FUNCTIONS_START functions FUNCTIONS_END {printf("The functions section is correct \n");} ;

functions : function 
| functions function
;

function : '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN ID ';' '}' 

{
  //add new function to the table
  //add_func($4, $2, $6);


  printf("The function is correct \n");
  
} //sintaxa: (returnVal) name (args){...}

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
             declaration ';' | //e.g. string s; 
             instruction declaration ';' | //for multiple declarations
             control_instruction  | // if, for, while, switch
             instruction control_instruction  | //for multiple instructions
          

statement: ID ASSIGN math_statem{printf("The statement is correct \n");}|  //a = 3 + 4;
           lvalue ASSIGN math_statem {printf("The statement is correct \n");}|
           lvalue ASSIGN rvalue 
           {
            //call a function to update val in the symbol table 

            //printf("The statement is correct \n");
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

           } |
           ID '(' ')' 
           {
            printf("The statement is correct \n"); //call a function with no arguments
           }|   
           ID '(' arguments ')' 
           {
            printf("The statement is correct \n");
           }; //call a function with arguments

declaration: TYPE ID 
            {
              printf("The declaration is correct \n");
              add_var($2, $1,"","main",false,0);

            } |
             TYPE ID ASSIGN rvalue  //int a = 3;
             {
              printf("The declaration is correct \n");
              add_var($2, $1,$4,"main",false,0); //incompatible type for $4
              
             } |
             TYPE ARRAY 
             {
              printf("The declaration is correct \n");
              char *id = strtok($2, "["); //int a[10]
              char *size = strtok(NULL, "]");
              int arr_size = atoi(size);
              //printf("the size is %s \n", size);
              add_var(id, $1,"","main",true,arr_size);
             } |
             TYPE ID ASSIGN math_statem 
             {
              printf("The declaration is correct \n");
              //compute the math statement first ?  
               
            } ;


//implemented just the IF and ELSE instruction 
control_instruction: IF "$$$" condition "$$$" '{' instruction '}' {printf("The if instruction is correct \n");} 
| IF "$$$" condition "$$$" '{' instruction '}' ELSE '{' instruction '}' {printf("The if-else instruction is correct \n");}|
FOR '(' ID ASSIGN math_statem ';' condition ';' ID ASSIGN math_statem ')' '{' instruction '}' {printf("The for instruction is correct \n");}|
WHILE '(' condition ')' '{' instruction '}' {printf("The while instruction is correct \n");}; 


//all possible combinations of conditions
condition : lvalue OP_LOGIC rvalue {printf("The condition is correct \n");} 
| condition OP_LOGIC condition {printf("The condition is correct \n");};
| condition OP_LOGIC rvalue {printf("The condition is correct \n");}
| lvalue OP_LOGIC condition {printf("The condition is correct \n");};


//assign the right value to the left and right  value



math_statem : math_statem OP_MATH1 math_val {printf("The math statement is correct \n");} |  // e.g. (5-6)+7 
             math_statem OP_MATH2 math_val {printf("The math statement is correct \n");} |  // e.g. (5-6)*7
             math_val OP_MATH1 math_statem {printf("The math statement is correct \n");} |  //eg. 5+(6-7)
             math_val OP_MATH2 math_statem {printf("The math statement is correct \n");} | //eg. 5*(6-7)
             math_val OP_MATH1 math_val {printf("The math statement is correct \n");} |  //eg. 5+6
             math_statem OP_MATH1 math_statem {printf("The math statement is correct \n");} |  //eg. (5-6)+(6-7)
             math_statem OP_MATH2 math_statem {printf("The math statement is correct \n");} |  //eg. (5-6)*(6-7)
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
