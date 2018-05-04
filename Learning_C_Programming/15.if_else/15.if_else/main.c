//  main.c
//  15.if_else
//
//  Created by James Harrys on 03/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, max;
    printf("Enter first number.\n");
    scanf("%d", &a);
    printf("Enter second number.\n");
    scanf("%d", &b);
    
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    printf("Max is %d.\n", max);
    
}
