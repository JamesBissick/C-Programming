//
//  main.c
//  15-arrays
//
//  Created by James Harrys on 17/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {

    int NumberArray[5] = {0, 1, 2, 3, 4};

    int AccessArray = NumberArray[2];
    printf("%d", AccessArray);

    // Change the value of an element in the Array
    NumberArray[2] = 7;
    printf("\n%d", NumberArray[2]);
    printf("\n********\n");


    char CharArray[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    // Method to print Array using a for loop
    for (int i = 0; i < 6; i++) {
        printf("%d => %c \n", i, CharArray[i]);
    }

}