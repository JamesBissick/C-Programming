//
//  main.c
//  105.improving_bubble_sort_efficiency
//
//  Created by James Harrys on 16/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// functions prototype declarations
void inputArray(int *array, int size);
void displayArray(int *array, int size);
void bubbleSort(int *array, int size);

int main() {
    int size;
    printf("Input the number of elements in the array:\n");
    scanf("%d", &size);
    int *array = (int *)malloc(sizeof(int) * size);
    
    if (array == '\0') {
        printf("Unable to allocate memory for the array");
        return 0;
    }
    
    inputArray(array, size);
    printf("Unsorted array:\n");
    displayArray(array, size);
    bubbleSort(array, size);
    printf("Sorted array:\n");
    displayArray(array, size);
}

void inputArray(int *array, int size) {
    printf("Input total %d integer numbers for the array:\n", size);
    int i;
    for (i = 0; i < size; ++i) {
        printf("Enter next: ");
        scanf("%d", &array[i]);
    }
}

void displayArray(int *array, int size) {
    printf("Content of the array: \n");
    int i;
    for (i = 0; i < size; ++i) {
        printf("%6d", array[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

void bubbleSort(int *array, int size) {
    int i, j, temp;
    int sorted = 0; // not sorted
    int count = 0;  // initialised with 0
    for (i = 0; i < size - 1 && !sorted; ++i) {
        sorted = 1; // sorted
        for (j = 0; j < size - 1 - i; ++j) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                ++count;
                sorted = 0;
            }
        }
    }
    printf("\nNumber of swap: %d", count);
}
