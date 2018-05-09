//
//  main.c
//  31.two_dimensional_array
//
//  Created by James Harrys on 09/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int array[4][3];
    int i, j;
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            array[i][j] = i * j;
        }
    }
    printf("Content of the 2D array: \n\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%6d", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
