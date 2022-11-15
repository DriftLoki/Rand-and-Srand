//RANDOM with srand  MUST USE LIBRARY <stdlib.h>

/*
Rand is not random at all. It produces the same sequence of values each time it is ran.
This allows for debugging.

To get a real set of random numbers, the program can be conditioned to produce a different sequence each execution (randomizing by srand)
PROCESS
takes unsigned int and seeds function rand to produce a different sequence of random numbers for each execution of program
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    unsigned int seed;

    printf("%s", "Enter seed: ");
    scanf("%u", &seed);

    srand(seed);  //not a prototype, just the function for srand

    for(unsigned int i = 1; 1 <= 10; ++i){
        printf("%10d", 1 + (rand() % 6));
    }
}
