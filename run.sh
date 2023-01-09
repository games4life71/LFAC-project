#!/bin/bash

# This script is used to run the LFAC project
lex my_lang.l
yacc -d my_lang.y
gcc lex.yy.c y.tab.c
./a.out ./a.txt