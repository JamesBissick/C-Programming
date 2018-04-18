//
//  main.c
//  16-multi-dimentional_arrays
//
//  Created by James Harrys on 17/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {

    int NumberArray [3] [3] = {
            {0, 1, 2},   // Row 0
            {3, 4, 5},   // Row 1
            {6, 7, 8}    // Row 2
    };

    // Method to print elements of our two dimensional array
    // One for loop for the arrays, and another for their included elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Number Array [%d][%d] = %d\n", i, j, NumberArray[i][j]);
        }
    }
}