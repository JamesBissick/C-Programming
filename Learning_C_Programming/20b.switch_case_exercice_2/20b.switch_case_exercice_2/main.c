//  main.c
//  20b.switch_case_exercice_2
//
//  Created by James Harrys on 04/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.

#include <stdio.h>

int main() {
    int age;
    printf("Please enter an age:\n");
    scanf("%d", &age);
    switch (age) {
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            printf("You're a teenager.\n");
            break;
        default:
            printf("You're either too old or too young to be a teenager.\n");
            break;
    }
}
