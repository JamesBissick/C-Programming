//
//  main.c
//  59.more_programming_examples
//
//  Created by James Harrys on 17/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
// A function to return the sum of 3 numbers and the highest number of the 3
void doWork(int a, int b, int c, int *total, int *higher) {
    *total = a + b + c;
    if (a > b && a > c) {
        *higher = a;
        printf("a is the highest number\n");
    }
    else if (b > a && b > c) {
        *higher = b;
        printf("b is the highest number\n");
    }
    else if (c > a && c > b) {
        *higher = c;
        printf("c is the highest number\n");
    } else {
        *higher = a;
        printf("All numbers are equal.\n");
    }
}


int main() {
    int x, y, z, sum, max;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &x, &y, &z);
    doWork(x, y, z, &sum, &max);
    printf("Sum = %d, Max = %d\n", sum, max);
    
}
