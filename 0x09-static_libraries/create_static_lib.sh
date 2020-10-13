#!/bin/bash
gcc -Werror -Wextra -Wall -pedantic -c *.c
ar -rc liball.a *.o
