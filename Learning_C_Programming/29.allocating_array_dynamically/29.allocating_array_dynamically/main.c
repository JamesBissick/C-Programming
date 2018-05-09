//
//  main.c
//  29.allocating_array_dynamically
//
//  Created by James Harrys on 08/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    // Ask user for the size of the array
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);
    
    int array[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter element to index %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("\nContent of array: \n");
    for (i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
