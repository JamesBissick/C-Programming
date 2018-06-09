//
//  main.c
//  87.writing_in_binary
//
//  Created by James Harrys on 25/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    FILE *fpointer;
    double data[] = {10.25, 5.54, 8.96, 12.45, 100.01};
    
    fpointer = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/87.writing_in_binary/87.writing_in_binary/data.bin", "wb");
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
    int nObject = fwrite((void *)(data), sizeof(double), 5, fpointer);
    printf("Total elements written: %d\n", nObject);
    /* The result is unreadable, because it is interpreted as characters */
}
