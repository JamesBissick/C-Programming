//
//  main.c
//  67.realloc_function
//
//  Created by James Harrys on 18/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h> // malloc, calloc, realloc

/* Realloc is use to reallocate the existing dynamic memory by preserving the existing values with some new size. Used to grow or shrink the dynamic memory needed while retaining the existing content of the allocated space intact in the new allocation. */

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
    
    
    /* Say we need to increase the size by 3 elements. */
    int newNumber = n + 3;
    p = (int *)realloc(p, newNumber * sizeof(int)); //realloc(void *__ptr, size_t __size)
    // Let's handle an hypothetic failure
    if (p == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    
    /* 3 new locations added */
    p[n] = 10;
    p[n+1] = 20;
    p[n+2] = 30;
    
    printf("\nNew Content of the array:\n");
    for (i = 0; i < newNumber; i++) {
        printf("%5d", p[i]);
    }
    printf("\n");
    
    free(p); // free function used to free p's memory allocation
}
