#!/bin/bash
gcc -w sum.c -c
gcc -w lnk_main.c -c
objcopy --prefix-symbols=cloned_ sum.o cloned_sum.o
gcc -w sum.o cloned_sum.o lnk_main.o -o lnk_test

gcc -w trn_sum.c -c
gcc -w trn_main.c -c
gcc -w trn_sum.o trn_main.o -o trn_test