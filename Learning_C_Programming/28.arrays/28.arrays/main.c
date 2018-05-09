//
//  main.c
//  28.arrays
//
//  Created by James Harrys on 04/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    
    /* Declaring an array of 100 values, with a name and brackets */
    int myArray [100], i;
    
    for (i = 0; i < 100; i++) {
        myArray[i] = i + 1;
    }
    printf("Content of array: \n");
    for (i = 0; i < 100; i++) {
        printf("%d,\n", myArray[i]);
    }
    
    /* We can initialise an array so */
    int initArray[3] = {1, 2, 3};
}
