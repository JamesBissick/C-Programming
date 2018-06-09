//
//  main.c
//  84.reading_formated_data_from_text_file_using_fscanf
//
//  Created by James Harrys on 25/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define SIZE 80

int main() {
    FILE *fpointer;
    
    fpointer = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/84.reading_formated_data_from_text_file_using_fscanf/84.reading_formated_data_from_text_file_using_fscanf/names.txt", "r");
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
    
    char name[SIZE];
    int salary;
    while (1) {
        fscanf(fpointer, " %[^,], %d", name, &salary);
        printf("%s gets $%d per hour\n", name, salary);
        if (feof(fpointer)) {
            break;
        }
    }
    
    fclose(fpointer);
}
