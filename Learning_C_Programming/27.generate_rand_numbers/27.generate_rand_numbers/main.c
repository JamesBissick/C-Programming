//
//  main.c
//  27.generate_rand_numbers
//
//  Created by James Harrys on 04/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int RandomNumber, i;
    long t;
    t = time(NULL);
    srand(t); // Here's the seed, let's make it dependant to the time
    for (i = 1; i <= 10; i++) {
        RandomNumber = rand() % 1000; // Let makes it in a range of 1000
        printf("%d\n", RandomNumber);
    }
    /* The problem with rand() is that it doesn't really generate pseudo random numbers. Each time, we'll get the same numbers over and over again. We should use a seed. */
    
}
