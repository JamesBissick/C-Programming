//
//  main.c
//  88.reading_in_binary
//
//  Created by James Harrys on 25/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    FILE *fpointer;
    double data[5];
    
    fpointer = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/88.reading_in_binary/88.reading_in_binary/data.bin", "rb");
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
    int nObject = fread((void *)data, sizeof(double), 5, fpointer);
    printf("Total elements read: %d\n", nObject);
    
    int i;
    printf("Content of array: \n ");
    for (i = 0; i < 5; i++) {
        printf("%10.2lf\n", data[i]);
    }
}
