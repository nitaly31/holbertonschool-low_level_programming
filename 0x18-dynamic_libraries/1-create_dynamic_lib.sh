#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -Wl,-soname, liball.so -o liball.so
