#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define BITS_5 32
#define BITS_6 64
extern int yylineno;

struct var_info
{
    char id[BITS_5];    // holds the id of the variable (name)
    char type[BITS_5];  // holds the type of the variable
    char value[BITS_6]; // holds the value of the variable if array 0 
    char scope[BITS_5]; // holds the scope of the variable : main , function,global etc
    bool is_array;      // holds whether the variable is an array or not
    int array_size;     // holds the size of the array
};

struct param_info
{
    char id[BITS_5];   // holds the id of the parameter (name)
    char type[BITS_5]; // holds the type of the parameter
};
struct func_info
{
    char id[BITS_5];               // holds the id of the function (name)
    char return_type[BITS_5];      // holds the type of the function
    char scope[BITS_5];            // holds the scope of the function : main , function,global etc
    int param_count;               // holds the number of parameters of the function
    struct param_info params[100]; // holds the parameters of the function
};

struct element
{
      // holds the type of the element
    char value[BITS_6]; // holds the value of the element
    int index;          // holds the index of the element
};

struct array_info
{
    char id[BITS_5];              // holds the id of the array (name)
    char type[BITS_5];            // holds the type of the array
    int array_size;               // holds the size of the array
    struct element elements[100]; // holds the elements of the array
};

struct var_info var_table[1000]; // holds the variable table
struct func_info func_table[1000];
struct array_info array_table[1000];
int var_table_index = 0; // holds the index of the variable table
int func_table_index = 0;
int array_table_index = 0;
// we have to save the function table & var table  in a file

//declare here and open in main 
FILE *func_table_file;
FILE *var_table_file; 
int save_var_table()
{    
    int i;
    for (i = 0; i < var_table_index; i++)
    {
        fprintf(var_table_file, "%s %s %s %s %d %d \n", var_table[i].id, var_table[i].type, var_table[i].value, var_table[i].scope, var_table[i].is_array, var_table[i].array_size);
    }
}

int save_funct_table()
{
    int i;
    for (i = 0; i < func_table_index; i++)
    {
        fprintf(func_table_file, "%s %s %s %d \n", func_table[i].id, func_table[i].return_type, func_table[i].scope, func_table[i].param_count);
        int j;
        for (j = 0; j < func_table[i].param_count; j++)
        {
            fprintf(func_table_file, "%s %s \n", func_table[i].params[j].id, func_table[i].params[j].type);
        }
    }
}

// function to add a variable to the variable table
void add_var(char *id, char *type, char *value, char *scope, bool is_array, int array_size)
{ 

    if(is_declared(id, scope)) {
        printf("Error: Variable %s is already declared in the scope %s\n");
     //   exit(1);
     return ;
    }
    strcpy(var_table[var_table_index].id, id);
    strcpy(var_table[var_table_index].type, type);
    strcpy(var_table[var_table_index].value, value);
    strcpy(var_table[var_table_index].scope, scope);
    var_table[var_table_index].is_array = is_array;

    //if the variable is an array, add it to the array table
    if(is_array)
    {
        struct array_info curr_array;
        strcpy(curr_array.id, id);
        strcpy(curr_array.type, type);
        curr_array.array_size = array_size;
        //by default all elements are initialized to 'nothing'
        int i;
        for (i = 0; i < array_size; i++)
        {
            strcpy(curr_array.elements[i].value, "nothing");
            curr_array.elements[i].index = i;
        }
        //add the array to the array table
        array_table[array_table_index++] = curr_array;
    }

    var_table[var_table_index].array_size = array_size;
    var_table_index++;
}

// function to check if a variable is already declared
int is_declared(char *id, char *scope)
{
    int i;
    for (i = 0; i < var_table_index; i++)
    {
        if (strcmp(var_table[i].id, id) == 0 && strcmp(var_table[i].scope, scope) == 0)
        {
            return true;
        }
    }
    return false;
}

// function to check if a variable is already declared in the global scope
int is_declared_global(char *id)
{
    int i;
    for (i = 0; i < var_table_index; i++)
    {
        if (strcmp(var_table[i].id, id) == 0 && strcmp(var_table[i].scope, "global") == 0)
        {
            return 1;
        }
    }
    return 0;
}

int get_size(char *id, char *scope)
{
    int i;
    for (i = 0; i < var_table_index; i++)
    {
        if (strcmp(var_table[i].id, id) == 0 && strcmp(var_table[i].scope, scope) == 0)
        {
            return var_table[i].array_size;
        }
    }
    return 0;
}
//function to return a pointer to the array with the given id
struct array_info* get_array(char *id)
{
    int i;
    for (i = 0; i < array_table_index; i++)
    {
        if (strcmp(array_table[i].id, id) == 0 )
        {
            return &array_table[i];
            
        }
    }
}

// function to check if a variable is array
bool is_array(char *id, char *scope)
{
    int i;
    for (i = 0; i < var_table_index; i++)
    {
        if (strcmp(var_table[i].id, id) == 0 && strcmp(var_table[i].scope, scope) == 0)
        {
            return var_table[i].is_array;
        }
    }
    return 0;
}
void add_func(char *id, char *return_type, char *scope, int param_count)
{
    strcpy(func_table[func_table_index].id, id);
    strcpy(func_table[func_table_index].return_type, return_type);
    strcpy(func_table[func_table_index].scope, scope);
    func_table[func_table_index].param_count = param_count;
    func_table_index++;
}

