#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic -c ./*.c
gcc ./*.c -c -fPIC
gcc ./*.o -shared -o liball.so
