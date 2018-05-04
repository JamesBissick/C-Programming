//
//  main.c
//  16.if_else_structure
//
//  Created by James Harrys on 03/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Please enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        max = a;
        printf("a is the bigger number.\n");
    } else if (b > a && b > c) {
        max = b;
        printf("b is the bigger number.\n");
    } else {
        max = c;
        printf("c is the bigger number.\n");
    }
    printf("Max is %d.\n", max);
}
