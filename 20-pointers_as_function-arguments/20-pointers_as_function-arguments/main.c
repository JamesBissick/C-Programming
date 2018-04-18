//
//  main.c
//  20-pointers_as_function-arguments
//
//  Created by James Harrys on 18/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// You can attribute a value to a pointer
void getValue(int *pointer) {
    *pointer = 10000;
    return;
}

int getTotal(int *array_val, int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += array_val[i];
    }
    return total;
}

int main() {

    int get_the_value;
    getValue(&get_the_value);

    printf("The value of getValue is %d \n", get_the_value);

    int array[4] = {10, 20, 30, 40};
    int myTotal = getTotal(array, 4);

    printf("The value of total is %d", myTotal);
}