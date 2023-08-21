#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc  liball.so *.o
ranlib liball.so
