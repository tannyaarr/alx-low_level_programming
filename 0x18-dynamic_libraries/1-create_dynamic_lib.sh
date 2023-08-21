#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -L. *c 
ar -rc  liball.so *.o
ranlib liball.so
