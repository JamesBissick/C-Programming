//
//  main.c
//  70.simulation_of_dynamic_2D_array
//
//  Created by James Harrys on 20/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int ** allocate(int nRows, int nCols) {
    int **p;
    
    p = (int **)malloc(nRows * sizeof(int *));
    if (p == NULL) {
        exit(0);
    }
    int i;
    for (i = 0; i < nRows; i++) {
        *(p+i) = (int *)malloc(nCols * sizeof(int));
    }
    return p;
}

void inputValues(int **p, int nRows, int nCols) {
    int i, j;
    
    for (i = 0; i < nRows; i++) {
        for (j = 0; j < nCols; j++) {
            printf("Enter value for %d row %d col: ", i, j);
            scanf("%d", &p[i][j]);
        }
    }
}

void printValues(int **p, int nRows, int nCols) {
    int i, j;
    printf("\nContent of 2D arrays:\n\n");
    for (i = 0; i < nRows; i++) {
        for (j = 0; j < nCols; j++) {
            printf("%6d", p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    /*
     * p is an array of pointers, each element of the array p are integer pointers
     */
    int **p;
    
    int nRows, nCols;
    printf("Enter number of rows:\n");
    scanf("%d", &nRows);
    printf("Enter number of columns:\n");
    scanf("%d", &nCols);
    
    p = allocate(nRows, nCols);
    
    inputValues(p, nRows, nCols);
    printValues(p, nRows, nCols);
    
    //deallocate(p, nRows, nCols);
}
