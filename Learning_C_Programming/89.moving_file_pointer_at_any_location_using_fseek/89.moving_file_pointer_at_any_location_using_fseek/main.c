//
//  main.c
//  89.moving_file_pointer_at_any_location_using_fseek
//
//  Created by James Harrys on 25/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// Content of array: <BOF> 10.25, 5.54, 8.96, 12.45, 100.01 <EOF>
int main() {
    FILE *fpointer;
    double data[5];
    double val;
    
    fpointer = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/89.moving_file_pointer_at_any_location_using_fseek/89.moving_file_pointer_at_any_location_using_fseek/data.bin", "rb");
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
    /* fseek function is used to move the file pointer at any desired location in the file */
    fseek(fpointer, 2 * sizeof(double), SEEK_SET); // SEEK_SET is 0 by default
    fread((void *)&val, sizeof(double), 1, fpointer);
    printf("3rd record: %lf\n", val);
    
    fseek(fpointer, -1 * sizeof(double), SEEK_END);
    fread((void *)&val, sizeof(double), 1, fpointer);
    printf("Last record: %lf\n", val);
    
    fseek(fpointer, 1 * sizeof(double), SEEK_SET);
    fread((void *)&val, sizeof(double), 1, fpointer);
    printf("2nd record: %lf\n", val);
    
    fclose(fpointer);
}

