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
    char value[BITS_6]; // holds the value of the variable
    char scope[BITS_5]; // holds the scope of the variable : main , function,global etc
    bool is_array;       // holds whether the variable is an array or not
    int array_size;     // holds the size of the array
};

struct element
{   char type[BITS_5];  // holds the type of the element 
    char value[BITS_6]; // holds the value of the element
    int index;          // holds the index of the element
};

struct array_info
{
    char id[BITS_5];    // holds the id of the array (name)
    char type[BITS_5];  // holds the type of the array
    int array_size;     // holds the size of the array
   struct element elements[100];  // holds the elements of the array
};

struct var_info var_table[1000]; // holds the variable table 

int var_table_index = 0; // holds the index of the variable table   


//function to add a variable to the variable table
void add_var(char *id, char *type, char *value, char *scope, bool is_array, int array_size)
{
    strcpy(var_table[var_table_index].id, id);
    strcpy(var_table[var_table_index].type, type);
    strcpy(var_table[var_table_index].value, value);
    strcpy(var_table[var_table_index].scope, scope);
    var_table[var_table_index].is_array = is_array;
    var_table[var_table_index].array_size = array_size;
    var_table_index++;
}


//function to check if a variable is already declared
bool is_declared(char *id, char *scope)
{
    int i;
    for (i = 0; i < var_table_index; i++)
    {
        if (strcmp(var_table[i].id, id) == 0 && strcmp(var_table[i].scope, scope) == 0)
        {
            return 1;
        }
    }
    return 0;
}

//function to check if a variable is already declared in the global scope
bool is_declared_global(char *id)
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

//function to check if a variable is array
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