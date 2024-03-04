#!/bin/bash
<<<<<<< HEAD

gcc -c *.c

=======
gcc -c ./*.c
>>>>>>> 2d6fba6556cea8da2496964f973d28453245e0fc
ar -rc liball.a *.o
ranlib liball.a
