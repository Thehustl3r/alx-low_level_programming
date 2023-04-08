#!/bin/bash
gcc -wall -pedantic -Werror -Wextra -c *.c
ar cr liball.a *.o
