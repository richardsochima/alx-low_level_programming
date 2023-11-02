#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc libschool.a *.o
ranlib libschool.a
