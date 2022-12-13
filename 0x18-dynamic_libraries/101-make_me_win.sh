#!/bin/bash
gcc -Wall demo.c -o demo.so -fPIC -shared -ldl
export LD_PRELOAD="./demo.so"
