#!/bin/bash
gcc -c -Wall -Werror -fPIC *.c
gcc -shared -WI,-soname, liball.so -o liball.so *.o
