//
//  main.c
//  83.reading_line_from_text_file_using_arrays_and_fgets
//
//  Created by James Harrys on 23/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#define SIZE 80

int main() {
    
    FILE *fpointer;
    // You can write the absolute path if you want the file to be created wherever you want
    // w for Write, a for add, r for read, (w or a)b for writing in binary
    fpointer = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/83.reading_line_from_text_file_using_arrays_and_fgets/83.reading_line_from_text_file_using_arrays_and_fgets/test.txt", "r");
    
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }

    char names[SIZE];
    while (1) {
        fgets(names, SIZE, fpointer);
        printf("%s", names);
        if (feof(fpointer)) {
            break;
        }
    }
    
    
    fclose(fpointer);
    printf("\n");
}
