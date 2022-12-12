#!/bin/bash
gcc -fPIC -shared -c *.c
gcc -shared -o liball.so *.o
