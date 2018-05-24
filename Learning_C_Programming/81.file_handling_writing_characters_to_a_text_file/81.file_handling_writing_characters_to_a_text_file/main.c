//
//  main.c
//  81.file_handling_writing_characters_to_a_text_file
//
//  Created by James Harrys on 23/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int x = 12;     // x = 00000000 00000000 00000000 00001100
    printf("x = %d\n", x);  // 12, converts binary data to integer
    
    FILE *fpointer;
    // You can write the absolute path if you want the file to be created wherever you want
    // w for Write, a for add, r for read, (w or a)b for writing in binary
    fpointer = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/81.file_handling_writing_characters_to_a_text_file/81.file_handling_writing_characters_to_a_text_file/test.txt", "a");
    
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    
    // files opened successfully
    /* fputc() can write a single character into the file */
//    fputc('a', fpointer);
//    fputc('b', fpointer);
//    fputc('c', fpointer);
    char alpha;
    for (alpha = 'a'; alpha <= 'z'; alpha++) {
        fputc(alpha, fpointer);
    }

    // we need to close the file to save it properly
    fclose(fpointer);
    printf("File created.\n");
}
