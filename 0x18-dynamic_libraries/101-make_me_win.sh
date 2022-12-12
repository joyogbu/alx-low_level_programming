#!/bin/bash
gcc -Wall demo.c -o gm.so -fPIC -shared -ldl
LD_PRELOAD=".gm.so" ./gm
