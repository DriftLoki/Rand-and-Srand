# Rand-and-Srand

### RANDOM with srand  MUST USE LIBRARY <stdlib.h>


Rand is not random at all. It produces the same sequence of values each time it is ran.
This allows for debugging.

To get a real set of random numbers, the program can be conditioned to produce a different sequence each execution (randomizing by srand)
PROCESS
takes unsigned int and seeds function rand to produce a different sequence of random numbers for each execution of program


