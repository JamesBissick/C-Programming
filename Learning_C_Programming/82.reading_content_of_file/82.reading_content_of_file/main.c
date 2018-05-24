//
//  main.c
//  82.reading_content_of_file
//
//  Created by James Harrys on 23/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    
    FILE *fpointer;
    // You can write the absolute path if you want the file to be created wherever you want
    // w for Write, a for add, r for read, (w or a)b for writing in binary
    fpointer = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/82.reading_content_of_file/82.reading_content_of_file/test.txt", "r");
    
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
    // Prime reading technique
    char letter;
    letter = fgetc(fpointer);
    /* feof = f end of file c function */
    while(!feof(fpointer)) {
        printf("%c", letter);
        letter = fgetc(fpointer);
    }
    
    fclose(fpointer);
    printf("\n");
}
