//
//  main.c
//  86.formated_data_reading_writing
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
    
    fpointer = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/86.formated_data_reading_writing/86.formated_data_reading_writing/names.txt", "r");
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
    
    fpwriting = fopen("/Users/jamesharrys/Programming/C/Learning_C_Programming/86.formated_data_reading_writing/86.formated_data_reading_writing/reports.txt", "w");
    if (fpointer == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
    
    char name[SIZE];
    int salary;
    double pertHRA;
    double houseRent;
    double netSalary;
    
    while (1) {
        fscanf(fpointer, " %[^,], %d, %lf", name, &salary, &pertHRA);
        //printf("%s gets $%d per hour\n", name, salary);
        houseRent = salary * pertHRA;
        netSalary = salary - houseRent;
        fprintf(fpwriting, "%-20s %10d %4.2lf %6.2lf %10.2lf \n", name, salary, pertHRA, houseRent, netSalary);
        
        if (feof(fpointer)) {
            break;
        }
    }
    
    fclose(fpointer);
}
