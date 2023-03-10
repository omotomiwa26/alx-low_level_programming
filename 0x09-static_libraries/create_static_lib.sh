#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.c
ranlib liball.a
