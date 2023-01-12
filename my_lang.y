%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include "functions.h" //header file with the functions used in the parser

extern FILE* yyin;
extern FILE* funct_table_file;
extern FILE* var_table_file;

extern char* yytext;
extern int yylineno;


        //maybe  a struct for a node in the AST tree ?? 
        //c code structs to be used in the parser

int current_function_arguments = 0;
int curr_function_arguments_list_index = 0;
int func_args_main_index = 0;
//current scope 
char curr_scope[10] = "global";
%}



%union{  
    int intval;
    char * strval;  
    struct lvalue*  lval;
    struct lvalue*  list_arg_main[30];
    struct param_info* arg[30];
    struct param_info* arg_list[30];
    struct node* node_ptr;
}

%token <strval> MINUS
%token <strval> CLASS
%token<strval> ASSIGN 
%token<strval> ID
%token<strval> TYPE 
%token <strval>COMPOSITE
%token<strval> ARRAY
%token <strval>CONSTANT
%token <strval>COMPOSITE_ARRAY
%token<strval> INTEGER
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
%token<strval> DEFAULT
%token <strval> TYPEOF
%token <strval> CONST
%left '+' MINUS
%left '*' '/'

%type <list_arg_main> func_args_main
%type <lval> lvalue
%type <lval> rvalue
%type <arg_list> arguments
%type <arg> variable_argument
%type <node_ptr> math_statem
%type <node_ptr> math_val
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

program: univ_sec func_sec userdef_sec main_sec  {printf("The program is correct \n"); print_func_table();} ;

userdef_sec : USERDEF_START userdef USERDEF_END {printf("The userdef section is correct \n");} |  ;


userdef : userdef_vars {printf("The userdef is correct \n");} 
 | userdef userdef_vars
 | struct_def {printf("The userdef is correct \n");}
 | userdef struct_def 
 | class_def {printf("The userdef is correct \n");}
 | userdef class_def
 |;

struct_def : STRUCT_START ID {strcpy(curr_scope,$2);} struct_vars STRUCT_END 
{
  
printf("The struct is correct with the name %s \n",$2);
//add it to the var table
add_var($2, "struct", "default","global",false,0);
//print_var_table();
} ;


struct_vars : variable  {printf("The struct variable is correct \n");} 
 | struct_vars variable //for multiple variables in a struct
 ;


class_def : CLASS_START ID {strcpy(curr_scope,$2);} class_info CLASS_END 
{
  printf("The class is correct \n");
  //add it to the var table
  add_var($2, "class", "default","global",false,0);  
  //print_var_table();
};



class_info: variable  {printf("The class variable is correct \n");} 
 | class_info variable //for multiple variables in a class
 | function  {printf("The class function is correct \n");}
 | class_info function; //for multiple functions in a class

userdef_vars : variable  {printf("The userdef variable is correct \n");} 
 | userdef_vars variable 
 | //nothing
 ;

univ_sec : UNIVERSAL_START univ_vars UNIVERSAL_END{printf("The universal section is correct \n");} |  ;

univ_vars : variable  {printf("The universal variable is correct \n");} 
 | univ_vars variable
 |  ;
//nothing

variable : TYPE ID ';' 
        {
          
        add_var($2, $1, "default",curr_scope,false,0);
         //print_var_table();
         //printf("The var is correct \n");
         

        }|
       TYPE ID ASSIGN rvalue ';'
        { 
          
          printf("The variable is correct \n");
          //check if the rvalue type is the same as TYPE 
          //if not error
          if(strcmp($4->type,$1)!= 0)
          {
            printf("the rvalue type is %s\n",$4->type);
            printf("The rvalue type is not the same as the variable type \n");
            exit(1);
          }

          add_var($2, $1, $4,curr_scope,false,0);  
          //print_var_table();
        } |
        TYPE ARRAY ';'
       {
          char *name = strtok($2, "[");
          char *size = strtok(NULL, "]");
          int size_int = atoi(size);
          add_var(name, $1, "",curr_scope,true,size_int);
          //print_var_table();
        } ;
        
       


rvalue : lvalue
        {
        
        //printf("The rvalue is correct found rvalue %s \n",$1); 
        $$ = (struct lvalue*)getIDType($1,curr_scope);
        //printf("the current scope is %s\n",curr_scope);
        
        }|
        INTEGER 
        {
          //printf("The rvalue of int  is %s correct \n",yytext);
          //set type and name for integer

          $$ = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy($$->type , "int");
          strcpy($$->name , $1);
          strcpy($$->value, $1);
          printf("the current scope is %s\n",curr_scope);
          strcpy($$->scope, curr_scope);
        }|
        FLOAT 
        {
          //printf("The rvalue of float is %s correct \n",yytext);
          
          $$ = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy($$->type , "float");
          strcpy($$->name , $1);
          strcpy($$->value, $1);
          strcpy($$->scope, curr_scope);
          
          }|
        BOOL {
          //printf("The rvalue of bool  is %s correct \n",yytext);
          
          $$ = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy($$->type , "bool");
          strcpy($$->name , $1);
          strcpy($$->value, $1);
          strcpy($$->scope, curr_scope);
          }|
        STRING 
        {
          //printf("The rvalue of string is %s is correct \n",yytext);
          
       
          $$ = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy($$->type , "string");
          strcpy($$->name , $1);
          strcpy($$->value, $1);   
          strcpy($$->scope, curr_scope);
        }|
        
        math_statem
         {
          printf("The rvalue is correct \n");
          //eval the ast here and return the value
          int value = evalAst((struct node*)$1);
          $$ = (struct lvalue*)malloc(sizeof(struct lvalue));
          strcpy($$->type , "int");
          strcpy($$->name , "math");
          sprintf($$->value, "%d", value);
          strcpy($$->scope, curr_scope);
          printf("the scope is %s\n",$$->scope);
        
        } ;

lvalue:  ID 
          {
          //printf("The lvalue is correct found id %s \n",$1);
          //print_var_table();
          //printf("tthe type of $1 is %s\n",$1.type);
          
          //print_var_table();
          $$ = getIDType($1,curr_scope); //assign lvalue the value and id of the ID
          //printf("the lvalue value is %s\n",$$->value);
          if($$ == NULL)
          {
            printf("The variable %s is not declared..\n",$1);
            exit(1);
          }

          
          }|
          ARRAY   
          {
            
           //printf("The lvalue is correct \n");
           //check if the variable is declared
           char *name = strtok($1, "[");
           
           if(!is_declared(name,curr_scope))
          {
            printf("The variable %s is not declared \n",name);
            exit(1);
          }
           
           else
           {
            //check if the variable is an array
            if(!is_array(name,curr_scope))
            {
              printf("The variable %s is not an array \n",name);
              exit(1);
            }
            else
            { 
             
              //check if the index is valid
            //   char *copy ;
            //  // strcpy(copy,$1);
            //   printf("the $1 is %s\n",copy);

              
              char *indx;
              indx = strtok(NULL, "]");
              printf("the index is %s\n",indx);
              int index_int = atoi(indx);
              int size = get_size(name,curr_scope);
              if(index_int >= size)
              {
                printf("[ERROR] line : %d The index %d is out of bounds \n",yylineno,index_int);
                exit(1);
              }
              //get the array from the table 
              struct array_info *curr_array = get_array(name);
              struct element * curr_elem = &curr_array->elements[index_int];
              //return the value of the element
               $$ = (struct lvalue*)malloc(sizeof(struct lvalue));
               strcpy($$->type , curr_array->type);
               strcpy($$->name , curr_array->id);
               strcpy($$->value, curr_elem->value);
              
            }
           }
          } ; 
         

func_sec : FUNCTIONS_START  functions FUNCTIONS_END {printf("The functions section is correct \n");} | ;

functions : function 
| functions function
|
;

function : '('  ')' ID '(' ')' '{' RETURN ';' '}'
{
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func($3, "", NULL, "function", 0);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n");
}

| '('  ')' ID '(' ')' '{'  '}'
{
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func($3, "", NULL, "function", 0);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is NOT correct \n");
}
| '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN ID ';' '}' 
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func($4, $2, (struct param_info*)$6, "function", current_function_arguments);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n"); 
}

| '(' TYPE ')' ID '(' ')' '{' instructions RETURN ID ';' '}'
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func($4, $2, NULL, "function", 0);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n"); 
}
| '(' TYPE ')' ID '(' arguments ')' '{' instructions RETURN rvalue ';' '}' 
{
  // add new function to the table
  printf("Current function arguments : %d\n", current_function_arguments);
  add_func($4, $2, (struct param_info*)$6, "function", current_function_arguments);
  current_function_arguments = 0;
  curr_function_arguments_list_index = 0;
  printf("The function is correct \n"); 
}


; //sintaxa: (returnVal) name (args){...}



arguments : variable_argument 
{ 
  $$[curr_function_arguments_list_index] = (struct param_info*)malloc(sizeof(struct param_info));
  strcpy($$[curr_function_arguments_list_index]->type,$1[curr_function_arguments_list_index]->type);
  strcpy($$[curr_function_arguments_list_index]->id, $1[curr_function_arguments_list_index]->id);
  // char temp[32];
  // strcpy(temp, $1->id);
  // $$[curr_function_arguments_list_index] = $1;
  // printf("----------------------------temp = %s\n", temp); 
  curr_function_arguments_list_index++;

  // printf("----------------------------Acum afisam a\n");
  // printf("----------------------------ID IN $1 IS: %s\n", $1[curr_function_arguments_list_index-1]->id);
  // printf("----------------------------ID IN VAR_ARGUMENT IS: %s\n", $$[curr_function_arguments_list_index-1]->id);
} //--------------------------------------tb de pus ca posibili param si expresii
| arguments ',' variable_argument 
{
  $$[curr_function_arguments_list_index] = (struct param_info*)malloc(sizeof(struct param_info));
  strcpy($$[curr_function_arguments_list_index]->type, $3[curr_function_arguments_list_index]->type);
  strcpy($$[curr_function_arguments_list_index]->id, $3[curr_function_arguments_list_index]->id);
  // char temp[32];
  // strcpy(temp, $3->id);
  // $$[curr_function_arguments_list_index] = $3;
  // printf("----------------------------temp = %s\n", temp); 
  curr_function_arguments_list_index++; 
  // printf("----------------------------Acum afisam b\n");
  // printf("----------------------------ID IN $3 IS: %s\n", $3[curr_function_arguments_list_index-1]->id);
  // printf("----------------------------ID IN VAR_ARGUMENT IS: %s\n", $$[curr_function_arguments_list_index-1]->id);
}
| function_argument
| | arguments ',' function_argument
;

variable_argument : TYPE ID 
{
  $$[current_function_arguments] = (struct param_info*)malloc(sizeof(struct param_info));
  strcpy($$[current_function_arguments]->type, $1); 
  strcpy($$[current_function_arguments]->id, $2); 
  current_function_arguments++;
  // printf("---------------variable_argument ->id: %s\n", $$[current_function_arguments-1]->id);
  // printf("---------------variable_argument ->type: %s\n", $$[current_function_arguments-1]->type);
}; 

function_argument : '(' TYPE ')' ID '(' function_argument_params ')'
| '(' TYPE ')' ID '(' ')'
 ;

function_argument_params : TYPE
| function_argument_params ',' TYPE
| function_argument
| function_argument_params ',' function_argument
;

main_sec : MAIN_START {strcpy(curr_scope,"main");} instructions MAIN_END {printf("The main section is correct \n");} ;

instructions : instruction {printf("The instruction is correct \n");} 
 | instructions instruction 
 |
 ;

instruction: statement ';' | // e.g. s = 5; s = 6;
             typeof ';'| // e.g. typeof(s);
             instruction statement ';' | //for multiple statements
             declaration ';' | //e.g. string s; 
             instruction declaration ';' | //for multiple declarations
             control_instruction  | // if, for, while, switch
             print|
             instruction control_instruction  |
             function_main_use ';' |
             instruction function_main_use ';' | ; //for multiple instructions

function_main_use : ID '(' ')' 
{ 
  if(find_func($1, 0, NULL) == 1){
    func_args_main_index = 0;
    printf("The function ussage is correct.\n");
  }
  else{
    printf("[DEBUG]The function %s is not declared.\n", $1);
    exit(1);
  }
}
| ID '(' func_args_main ')' 
{
  if(find_func($1, func_args_main_index, (struct lvalue*)$3) == 1){
    func_args_main_index = 0;
    printf("The function ussage is correct.\n");
  }
  else{
    printf("[DEBUG]The function %s is not declared.\n", $1);
    exit(1);
  }
};



func_args_main : rvalue 
{
  $$[func_args_main_index] = (struct lvalue*) malloc(sizeof(struct lvalue));
  strcpy($$[func_args_main_index]->type, $1->type);
  // printf("-------------------rvalue type: %s\n", $1->type);
  // printf("-------------------$$ type: %s\n", $$[func_args_main_index]->type);
  func_args_main_index++;
  printf("Arguments of the function are correct.\n");
}
| func_args_main ',' rvalue 
{
  $$[func_args_main_index] = (struct lvalue*) malloc(sizeof(struct lvalue));
  strcpy($$[func_args_main_index]->type, $3->type);
  // printf("-------------------rvalue type: %s\n", $3->type);
  // printf("-------------------$$ type: %s\n", $$[func_args_main_index]->type);
  func_args_main_index++;
  printf("Arguments of the function are correct.\n");
}
;

print : PRINT '(' STRING ')' ';' 
{ 
  printf("the strinf is %s \n",$3);
  printf("[OUTPUT]: %s \n",$3);
}|
  PRINT '(' rvalue ')' ';'
  {
    printf("[OUTPUT]: %s \n",$3->value);
  };



typeof : TYPEOF '(' ID ')'
{
  //check if the variable is declared
  if(!is_declared_global($3) && !is_declared($3,"main") )
  {
    printf("[OUTPUT]: The variable %s is not declared \n",$3);
    exit(1);
  }
  
  else
  {
    //print_var_table();
    //get the type of the variable
    char *type = get_type($3,"global");
    if (type == NULL)
    {
      printf("global\n");
      type = get_type($3,"main");
    }
    
    printf("[OUTPUT]: The type of %s is %s \n",$3, type);
  }

}  

statement: 
           lvalue ASSIGN rvalue 
           {
            
            if(is_const($1->name,$1->scope))
            {
              printf("[ERROR] line: %d the variable %s is const...\n",yylineno,$1->name);
              exit(1);
            }

            if(!same_type($1->type,$3->type))
            {
              printf("[ERROR] line: %d not the same type...\n",yylineno);
              exit(1);
            }

            //call a function to update val in the symbol table 
            //printf("the name is %s\n",$1->name);
            
            update_val($1->name,$1->scope ,$3->value);
            printf("The statement is correct \n");
            //print_var_table();
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

           

           lvalue INC 
           {

            if(is_const($1->name,$1->scope))
            {
              printf("[ERROR] line: %d the variable %s is const...\n",yylineno,$1->name);
              exit(1);
            }

            if(!same_type($1->type,"int")) 
            {
              printf("[ERROR] not the same type...\n");
              exit(1);
            }
           
            //call a function to update val in the symbol table
            int int_val = atoi($1->value);
           // printf("the new val is %d\n",int_val);
            int_val++;
            char *new_val = (char*)malloc(sizeof(char)*10);
            sprintf(new_val,"%d",int_val);
            update_val($1->name,$1->scope ,new_val); 
            //update_val($1->name,$1->scope ,$1->value+1);
            //printf("The statement is correct \n");
            //print_var_table();
           } |

           lvalue DEC
           {
            if(is_const($1->name,$1->scope))
            {
              printf("[ERROR] line: %d the variable %s is const...\n",yylineno,$1->name);
              exit(1);
            }

           if(!same_type($1->type,"int")) 
            {
              printf("[ERROR] not the same type...\n");
              exit(1);
            }
           
            //call a function to update val in the symbol table
            int int_val = atoi($1->value);
           // printf("the new val is %d\n",int_val);
            int_val--;
            char *new_val = (char*)malloc(sizeof(char)*10);
            sprintf(new_val,"%d",int_val);
            update_val($1->name,$1->scope ,new_val); 
            //update_val($1->name,$1->scope ,$1->value+1);
            //printf("The statement is correct \n");
            //print_var_table();

           }|
           
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
              //if it's not declared 
              //printf("im here!\n");
              if(!is_declared_global($2) && !is_declared($2,"main"))
              {
                //add it to the symbol table
                add_var($2, $1,"default",curr_scope,false,0);
                //print_var_table();
                //save_var_table();
              }
              else
              {
                printf("[ERROR] line: %d The variable %s is already declared \n",yylineno,$2);
                exit(1);
              } 
              //printf("The declaration is correct \n");
             
             
            } |
            CONST TYPE ID ASSIGN rvalue
            {
              printf("The declaration is correct \n");
                char type[10] = "const ";
                strcat(type,$2);

              add_var($3, type,$5->value,curr_scope,false,0); //incompatible type for $4
              printf("value added\n");
            }|
             TYPE ID ASSIGN rvalue  //int a = 3;
             {
              //if rvalue type is not the same as type 
              if(!same_type($1,$4->type))
              {
                printf("[ERROR] line: %d not the same type...\n",yylineno);
                exit(1);
              }

              printf("The declaration is correct \n");
            
              add_var($2, $1,$4->value,curr_scope,false,0); //incompatible type for $4
              printf("value added\n");
              //print_var_table();
             } |
             TYPE ARRAY 
             {
              printf("The declaration is correct \n");
              char *id = strtok($2, "["); //int a[10]
              char *size = strtok(NULL, "]");
              int arr_size = atoi(size);
              //printf("the size is %s \n", size);
              add_var(id, $1,"",curr_scope,true,arr_size);
             };
            

//implemented just the IF and ELSE instruction 
control_instruction: IF '(' condition ')' '{' instructions '}' 
{
  printf("The if instruction is correct \n");
}|
 IF '(' condition ')' '{' instructions '}' ELSE '{' instructions'}' 
 {
  printf("The if-else instruction is correct \n");
 }|

FOR '(' TYPE ID ASSIGN rvalue ';' condition ';' for_increment ')' '{' instructions '}' 
{

    
  printf("The for instruction is correct \n");
  //check if the value in condition is the same as ID 

}|
FOR '(' ID ASSIGN rvalue ';' condition  ';'  for_increment')' '{' instructions '}' 
{
  printf("The for instruction is correct \n");
}|
WHILE '(' condition ')' '{' instruction '}' 
{
  printf("The while instruction is correct \n");
}; 


for_increment: ID ASSIGN rvalue 
{
  printf("The for increment is correct \n");
}| ID INC 
{
  printf("The for increment is correct \n");
}| ID DEC 
{
  printf("The for increment is correct \n");
};

//all possible combinations of conditions
condition : lvalue OP_LOGIC rvalue 
{
  //printf("The condition is correct here  \n");
  //check if the types are the same and if they are declared
 
  //printf("The operator  is %s \n",OP_LOGIC);
  //check if the types are the same and if they are declared
 // printf("The condition is correct \n");
  
  if( !same_type($1->type,$3->type)) 
  {
    printf("[ERROR] line: %d not the same type...\n",yylineno);
    exit(1);
  }
;}|
 condition OP_LOGIC condition 
 {
  //printf("The condition is correct \n");
 }|
  condition OP_LOGIC rvalue 
 {
    //printf("The condition is correct \n");
 }|
  lvalue OP_LOGIC condition 
  {
    //printf("The condition is correct \n");
  }
  | rvalue OP_LOGIC condition 
  {
    //printf("The condition is correct \n");
  };


//assign the right value to the left and right  value



math_statem : math_statem '+' math_val 
            {

             
             //add a node into AST 
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);

            } |  // e.g. (5-6)+7

             math_statem MINUS math_val 
            {
             
             //add a node into AST 
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);

            } |  // e.g. (5-6)+7


             math_statem '*' math_val 
            {
           // printf("The math statement is correct \n");
            struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } |  // e.g. (5-6)*7

             math_statem '/' math_val 
            {
           // printf("The math statement is correct \n");
            struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } |  // e.g. (5-6)*7



             math_val '+' math_statem 
            {
               //printf("math state here \n");
             //printf("The math statement is correct \n");
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //printf("The value of $2 is %s \n",'+');
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } |  //eg. 5+(6-7)

             math_val MINUS math_statem 
            {  
               //printf("math state here \n");
             //printf("The math statement is correct \n");
             struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
            // printf("The value of $2 is %s \n",'+');
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } |  //eg. 5+(6-7)



             math_val '*' math_statem 
            {
             //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } | //eg. 5*(6-7)


             math_val '/' math_statem 
            {
             //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } | //eg. 5*(6-7)


             math_val '+' math_val 
            { 
             
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             
             //printf("The value of $1 is %s and type is %d \n",$1->value,$1->type);
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } |  //eg. 5+6

             math_val MINUS  math_val 
            {
               //printf("HERE \n");
               struct node* root = malloc(sizeof(struct node));
               strcpy(root->value,"-");
             
            // printf("The value of $1 is %s and type is %d \n",$1->value,$1->type);
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } |

             math_statem '+' math_statem 
            {
              //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"+");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } |  //eg. (5-6)+(6-7)

             math_statem MINUS math_statem 
            { 
             
              //printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"-");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } |

            
             math_statem '*' math_statem 
            { 
              
             // printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } |  //eg. (5-6)*(6-7)

            math_statem '/' math_statem 
            { 
              
             // printf("The math statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            } | 
             math_val '*' math_val 
            {

              //printf("the op is %s\n",$2);
             // printf("The ma  th statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"*");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            }|   //eg. 5*6   

            math_val '/' math_val 
            {

              //printf("the op is %s\n",$2);
             // printf("The ma  th statement is correct \n");
              struct node* root = malloc(sizeof(struct node));
             strcpy(root->value,"/");
             //type 1 for operator e.g + , -

             $$ =(struct node*)buildTree((struct node*) root,(struct node*)$1,(struct node*)$3,1);
            };

        math_val : lvalue 
          {
            
            struct node* root = malloc(sizeof(struct node));
            if(strcmp($1->type,"int")==0)
            { 
              
              strcpy(root->value,$1->value);
            }

            else 
            {
              strcpy(root->value,$1->value);
            }
            
            $$ =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
          
          } |  // a + 5 where a is lvalue 
            INTEGER 
          {
            //printf("The math value is %s INT  \n",$1);
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,$1);
            $$ =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            
          } | //3+4 
            FLOAT 
          {
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,"0");
            $$ =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            //printf("The math value is correct \n");
          } | //3.4+5.6
          BOOL 
          {
            struct node* root = malloc(sizeof(struct node));
            strcpy(root->value,"0");
            $$ =(struct node*)buildTree((struct node*) root,NULL,NULL,0);
            //printf("The math value is correct \n");
          }; //true+false






%%
// c code part 
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}
//can declare c functions here 


int main(int argc, char** argv){
yyin=fopen(argv[1],"r"); // if we want to parse a file instead of the standard input 
var_table_file = fopen("symbol_table.txt","w");
funct_table_file = fopen("functions_table.txt", "w");

yyparse();
save_var_table();
save_funct_table();
fclose(var_table_file);
fclose(funct_table_file);

return 0;
} 

