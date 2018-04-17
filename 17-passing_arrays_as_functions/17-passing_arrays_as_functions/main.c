//
//  main.c
//  17-passing_arrays_as_functions
//
//  Created by James Harrys on 17/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int ArraySum(int MyArray[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        /*sum = sum + MyArray[i];*/
        sum += MyArray[i];
    }
    return sum;
}

int main() {

    int MyArray [5] = {0, 1, 2, 3, 4};
    int SumofArray = ArraySum(MyArray, 5);

    printf("%d", SumofArray);
}