//
//  main.c
//  85.writing_formated_data_into_text_file_using_fprintf
//
//  Created by James Harrys on 25/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define SIZE 80

int main() {
    FILE *fpointer;
    FILE *fpwriting;
    
    fpointer = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/85.writing_formated_data_into_text_file_using_fprintf/85.writing_formated_data_into_text_file_using_fprintf/names.txt", "r");
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
    
    fpwriting = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/85.writing_formated_data_into_text_file_using_fprintf/85.writing_formated_data_into_text_file_using_fprintf/reports.txt", "w");
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
    
    char name[SIZE];
    int salary;
    while (1) {
        fscanf(fpointer, " %[^,], %d", name, &salary);
        printf("%s gets $%d per hour\n", name, salary);
        fprintf(fpwriting, "%s gets $%d per hour\n", name, salary);
        if (feof(fpointer)) {
            break;
        }
    }
    
    fclose(fpointer);
}
