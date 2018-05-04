//
//  main.c
//  19.nested_if_else_exercice
//
//  Created by James Harrys on 03/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int year;
    printf("Please enter a year:\n");
    scanf("%d", &year);
    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is a NOT leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is NOT a leap year.\n", year);
    }
    /* In ternary 
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is a NOT leap year.\n", year);
    }
    */
}
