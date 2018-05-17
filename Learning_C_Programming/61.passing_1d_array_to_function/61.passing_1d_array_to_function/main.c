//
//  main.c
//  61.passing_1d_array_to_function
//
//  Created by James Harrys on 17/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

/* Example of passing 1-D array to function */
void printArray(int *arrayElement, int arraySize) {
    int i;
    printf("Content of array: \n");
    for (i = 0; i < arraySize; i++) {
        printf("%4d", *(arrayElement + i));
    }
    printf("\n");
}

int main() {
    int x[] = {10, 20, 30, 40, 50};
    int y[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    printArray(x, 5);
    printArray(y, 10);
}
