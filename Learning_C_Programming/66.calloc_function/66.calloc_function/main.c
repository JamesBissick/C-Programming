//
//  main.c
//  66.calloc_function
//
//  Created by James Harrys on 18/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h> // malloc, calloc, realloc

/* Calloc initialises each byte with 0, require 2 arguments:
        - number of elements to allocated
        - size of each elements
*/

int main() {
    int *p;
    int n;
    printf("Enter a number of integers:\n");
    scanf("%d", &n);
    
    /* - Supply the number of byte the calloc function is going to allocate during the runtime
     - Casting calloc function as int and storing it in variable p. */
    p = (int *)calloc(n, sizeof(int)); // n * sizeof(int) = n * 4
    
    if (p == NULL) {
        printf("Unable to allocate memory.\nExiting the program.\n");
        exit(1);
    }
    
    // Use the allocated space pointed by p to store values
    int i;
    for (i = 0; i < n; i++) {
        printf("Next number:\n");
        scanf("%d", &p[i]);
    }
    printf("\nContent of the array:\n");
    for (i = 0; i < n; i++) {
        printf("%5d", p[i]);
    }
    printf("\n");
    // Deallocate the memory when the job is done to avoid memory leak and problem related to that issue
    free(p); // free function used to free p's memory allocation
}

