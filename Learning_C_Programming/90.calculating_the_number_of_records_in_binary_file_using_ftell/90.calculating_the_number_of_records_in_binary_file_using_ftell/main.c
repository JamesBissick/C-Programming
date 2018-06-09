//
//  main.c
//  90.calculating_the_number_of_records_in_binary_file_using_ftell
//
//  Created by James Harrys on 25/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Content of array: <BOF> 10.25, 5.54, 8.96, 12.45, 100.01 <EOF>
int main() {
    FILE *fpointer;

    
    fpointer = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/90.calculating_the_number_of_records_in_binary_file_using_ftell/90.calculating_the_number_of_records_in_binary_file_using_ftell/data.bin", "rb");
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
    long size;
    size = ftell(fpointer);
    printf("Size = %ld\n", size);
    
    fseek(fpointer, 0L, 2);
    size = ftell(fpointer);
    printf("Size = %ld\n", size);
    
    // Let's find the number of records
    int n = size / sizeof(double);
    printf("No of records: %d\n", n);
    
    double *data;
    data = (double *)malloc(sizeof(double) * n);
    fseek(fpointer, 0L, 0);
    
    fread((void *)data, sizeof(double), n, fpointer);
    
    int i;
    for (i = 0; i < n; i++) {
        printf("%10.2lf\n", data[i]);
    }
    
    fclose(fpointer);
}
