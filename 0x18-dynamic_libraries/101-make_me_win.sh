#!/bin/bash
gcc -Wall demo.c -o gm.so -fPIC -shared -ldl
export LD_PRELOAD="$PWD/../gm.so"
