#!/bin/bash
gcc -Wall demo.c -o demo.so -fPIC -shared -ldl
LD_PRELOAD="./demo.so"
