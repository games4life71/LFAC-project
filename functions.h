#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define BITS_5 32
#define BITS_6 64
extern int yylineno;

struct lvalue
{
    char name[50];
    char type[50];
    char value[50];
    char scope[50];
};

struct node
{
    int type; // 0 for numbers <---> 1 for + - etc;
    char value[50];
    struct node *left;
    struct node *right;
};

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
    char id[BITS_5];              // holds the id of the function (name)
    char return_type[BITS_5];     // holds the type of the function
    char scope[BITS_5];           // holds the scope of the function : main , function,global etc
    int param_count;              // holds the number of parameters of the function
    struct param_info params[30]; // holds the parameters of the function
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

// declare here and open in main
FILE *funct_table_file;
FILE *var_table_file;

int save_var_table()
{
    int i;

    for (i = 0; i < var_table_index; i++)
    {
        // fwrite("hello", 1, 5, var_table_file);
        fprintf(var_table_file, "%s %s %s %s %d %d \n", var_table[i].id, var_table[i].type, var_table[i].value, var_table[i].scope, var_table[i].is_array, var_table[i].array_size);
    }
}

void save_funct_table()
{
    // int i;
    // for (i = 0; i < func_table_index; i++)
    // {
    //     fprintf(func_table_file, "%s %s %s %d \n", func_table[i].id, func_table[i].return_type, func_table[i].scope, func_table[i].param_count);
    //     int j;
    //     for (j = 0; j < func_table[i].param_count; j++)
    //     {
    //         fprintf(func_table_file, "%s %s \n", func_table[i].params[j].id, func_table[i].params[j].type);
    //     }
    // }
    fprintf(funct_table_file, "%20s  %8s  %12s  %10s  %s\n", "ID", "Return", "Scope", "Nr. Args.", "Args.");
    fprintf(funct_table_file, "------------------------------------------------------------------------------\n");
    for (int i = 0; i < func_table_index; i++){
        fprintf(funct_table_file, "%20s  %8s  %12s  %9d   ", func_table[i].id, func_table[i].return_type, func_table[i].scope, func_table[i].param_count);
        for(int j = 0; j < func_table[i].param_count; j++){
            fprintf(funct_table_file, "%s ", func_table[i].params[j].id);
        }
        fprintf(funct_table_file, "\n");
    }
}

// function to add a variable to the variable table
void add_var(char *id, char *type, char *value, char *scope, bool is_array, int array_size)
{

    if (is_declared(id, scope))
    {
        printf("Error: Variable %s is already declared in the scope %s\n", id, scope);
        exit(1);
        return;
    }
    strcpy(var_table[var_table_index].id, id);

    strcpy(var_table[var_table_index].type, type);
    strcpy(var_table[var_table_index].value, value);
    strcpy(var_table[var_table_index].scope, scope);
    var_table[var_table_index].is_array = is_array;

    // if the variable is an array, add it to the array table
    if (is_array)
    {
        struct array_info curr_array;
        strcpy(curr_array.id, id);
        strcpy(curr_array.type, type);
        curr_array.array_size = array_size;
        // by default all elements are initialized to 'nothing'
        int i;
        for (i = 0; i < array_size; i++)
        {
            strcpy(curr_array.elements[i].value, "nothing");
            curr_array.elements[i].index = i;
        }
        // add the array to the array table
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
// function to return a pointer to the array with the given id
struct array_info *get_array(char *id)
{
    int i;
    for (i = 0; i < array_table_index; i++)
    {
        if (strcmp(array_table[i].id, id) == 0)
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

//function to check if the function is declared and used accordingly
int find_func(char* id, int param_count, struct lvalue* var_list[30]){
    if(var_list == NULL){
        for (int i = 0; i < func_table_index; i++){
            //printf("[%d] Checking same id\n", i);
            if (strcmp(func_table[i].id, id) == 0){
                // acelasi nume
                    return 1;
            }
        }
    }
    for (int i = 0; i < func_table_index; i++)
    {
        // printf("[%d] Checking same id\n", i);
        if (strcmp(func_table[i].id, id) == 0)
        { // acelasi nume
            // printf("[%d] Checking same param_count\n", i);
            if (func_table[i].param_count == param_count)
            { // acelasi nr param
                int sameType = 1;
                // printf("[%d] Checking same all params\n", i);
                for (int k = 0; k < param_count; k++)
                {
                    if (strcmp(func_table[i].params[k].type, var_list[k]->type) != 0){
                        // printf("Param [%d] type in func table[%d]: %s\n", k, i, func_table[i].params[k].type);
                        // printf("Param [%d] type in var_list[%d]: %s\n", k, k, var_list[k]->type);
                        sameType = 0;
                    }
                }
                if (sameType == 1){
                    // printf("The function is already declared.\n");
                    return 1;
                } // functia e deja in tabel
            }
        }
    }

    return 0;
}

// function to check if the function is already declared
int is_func_declared(char *id, char *return_type, struct param_info *params[30], int param_count)
{
    // printf("!!!!!!!!!!!!!!!!!!!!!!Checking if function %s exists\n", id);
    if(params == NULL){
        for (int i = 0; i < func_table_index; i++){
            // printf("[%d] Checking same id\n", i);
            if (strcmp(func_table[i].id, id) == 0){
                // acelasi nume
                // printf("[%d] Checking same ret\n", i);
                if(strcmp(func_table[i].return_type, return_type) == 0){
                    //acelasi return type
                    return 1;
                }
            }
        }
    }
    for (int i = 0; i < func_table_index; i++)
    {
        // printf("[%d] Checking same id\n", i);
        if (strcmp(func_table[i].id, id) == 0)
        { // acelasi nume
            // printf("[%d] Checking same ret\n", i);
            if(strcmp(func_table[i].return_type, return_type) == 0)
            { //acelasi return type
                // printf("[%d] Checking same param_count\n", i);
                if (func_table[i].param_count == param_count)
                { // acelasi nr param
                    int sameType = 1;
                    // printf("[%d] Checking same all params\n", i);
                    for (int k = 0; k < param_count; k++)
                    {
                        if (strcmp(func_table[i].params[k].type, params[k]->type) != 0){
                            // printf("Param [%d] type in func table[%d]: %s\n", k, i, func_table[i].params[k].type);
                            // printf("Param [%d] type in params[%d]: %s\n", k, k, params[k]->type);
                            sameType = 0;
                        }
                    }
                    if (sameType == 1){
                        // printf("The function is already declared.\n");
                        return 1;
                    } // functia e deja in tabel
                }
            }
        }
    }

    return 0; // functia nu e in tabel
}

// add function to the table
void add_func(char *id, char *return_type, struct param_info *params[30], char *scope, int param_count)
{
    if(params != NULL){
        if(is_func_declared(id, return_type, params, param_count)){
            printf("Error: Function %s is already declared.\n", id);
            exit(1);
            return ;
        }
        strcpy(func_table[func_table_index].id, id);
        strcpy(func_table[func_table_index].return_type, return_type);
        strcpy(func_table[func_table_index].scope, scope);
        func_table[func_table_index].param_count = param_count;
        for(int i = 0; i < param_count; i++){
            strcpy(func_table[func_table_index].params[i].id, params[i]->id);
            strcpy(func_table[func_table_index].params[i].type, params[i]->type);
            //printf("!!!!!!!!!!!!!!!!!!!!!THE ID IN FUNCTION IS: %s\n", func_table[func_table_index].params[i].id);
        }

        func_table_index++;
    }
    else{
        if(is_func_declared(id, return_type, NULL, param_count)){
            printf("Error: Function %s is already declared.\n", id);
            exit(1);
            return ;
        }
        strcpy(func_table[func_table_index].id, id);
        strcpy(func_table[func_table_index].return_type, return_type);
        strcpy(func_table[func_table_index].scope, scope);
        func_table[func_table_index].param_count = param_count;
        func_table_index++;
    }

}

void print_func_table()
{
    printf("%20s  %8s  %12s  %10s  %s\n", "ID", "Return", "Scope", "Nr. Args.", "Args.");
    printf("------------------------------------------------------------------------------\n");
    for (int i = 0; i < func_table_index; i++){
        printf("%20s  %8s  %12s  %9d   ", func_table[i].id, func_table[i].return_type, func_table[i].scope, func_table[i].param_count);
        for(int j = 0; j < func_table[i].param_count; j++){
            printf("%s ", func_table[i].params[j].id);
        }
        printf("\n");
    }
}

void print_var_table()
{
    int i;
    for (i = 0; i < var_table_index; i++)
    {
        printf("%s %s %s %s %d %d \n", var_table[i].id, var_table[i].type, var_table[i].value, var_table[i].scope, var_table[i].is_array, var_table[i].array_size);
    }
}

struct lvalue *getIDType(char *idName, char *scope)
{

    // printf("the id is %s\n",idName);
    // loop through var table
    for (int i = 0; i < var_table_index; i++)
    {

        if (strcmp(var_table[i].id, idName) == 0 && strcmp(var_table[i].scope, scope) == 0)
        {

            struct lvalue *lval;
            lval = (struct lvalue *)malloc(sizeof(struct lvalue));
            strcpy(lval->type, var_table[i].type);
            strcpy(lval->value, var_table[i].value);

            strcpy(lval->scope, var_table[i].scope);
            strcpy(lval->name, var_table[i].id);
            // printf("returning lval with type %s and value %s", lval->type, lval->value);
            return lval;
        }
    }
    printf("[DEBUG] the id %s not found \n", idName);
    return NULL;
}

void update_val(char *id, char *scope, char *value)
{
    int i;
    for (i = 0; i < var_table_index; i++)
    {
        if (strcmp(var_table[i].id, id) == 0 && strcmp(var_table[i].scope, scope) == 0)
        {
            // printf("the value is %s\n",value);
            strcpy(var_table[i].value, value);
        }
    }
}

char *get_type(char *id, char *scope)
{
    int i;
    for (i = 0; i < var_table_index; i++)
    {
        if (strcmp(var_table[i].id, id) == 0 && strcmp(var_table[i].scope, scope) == 0)
        {
            return var_table[i].type;
        }
    }
    printf("[DEBUG] the id %s not found \n", id);
    return NULL;
}

bool same_type(char *type1, char *type2)
{
    if (strcmp(type1, type2) == 0)
    {
        return true;
    }
    return false;
}

bool is_const(char *id, char *scope)
{
    int i;
    for (i = 0; i < var_table_index; i++)
    {
        if (strcmp(var_table[i].id, id) == 0 && strcmp(var_table[i].scope, scope) == 0)
        {
            if (strstr(var_table[i].type, "const") != NULL)
                return true;
        }
    }
    return false;
}

struct node* buildTree(struct node *root, struct node *left_t, struct node *right_t, int type)
{

    root->type = type;
    root->left = left_t;
    root->right = right_t;
    return root;
}

int evalAst(struct node *tree) // 2*4-1
{

    // compute recursively the left and right subtrees

    if (tree->type == 1) // if it s operator
    {
        int lval, rval;

        if (tree->left != NULL)
        {
            lval = evalAst(tree->left);
        }

        if (tree->right != NULL)
        {
            rval = evalAst(tree->right);
        }
        
        // base cases
        switch (tree->value[0])
        {
        case '+':
            return lval + rval;
            break;
        case '-':
            return lval - rval;
            break;
        case '*':
            return lval * rval;
            break;
        case '/':
            return lval / rval;
            break;

        
        }
    }

    else // it a number
    {
        printf("the value here is %c\n",tree->value[0]);
        if (tree->value != NULL)
        {   int val = atoi(tree->value);
            //printf("the value in int  is %d\n",val);
            return val;
        }
    }
}