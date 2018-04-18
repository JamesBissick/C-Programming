//
//  main.c
//  19-arrays_of_pointers
//
//  Created by James Harrys on 18/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {

    int val_array[3] = {10, 20, 30};
    int *pointer_array[3];

    for (int i = 0; i < 3; i++) {
        // Assign address of array element
        pointer_array[i] = &val_array[i];
    }
    for (int i = 0; i < 3; i++) {
        // Assign address of array element
        printf("Value of val_array[%d] = %d \n", i, *pointer_array[i]);
    }
}