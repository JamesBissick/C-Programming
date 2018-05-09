//
//  main.c
//  30.1d_array_example
//
//  Created by James Harrys on 08/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // declare the array
    int array[n];
    int i;
    
    long t;
    t = time(NULL);
    srand(t); // Here's the seed, let's make it dependant to time
    for (i = 0; i > n; i++) {
        array[i] = rand() % 100;
    }
    printf("Content of the array: \n");
    int sum = 0;
    for (i = 0; i < n; i++) {
        printf("%4d", array[i]);
        sum += array[i];
    }
    printf("\nSum is %d\n", sum);
    double avg = (double)sum / n;
    printf("Average of the numbers: %2lf\n", avg);

}
