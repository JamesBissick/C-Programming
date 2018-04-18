//
//  main.c
//  12-functions_arguments
//
//  Created by James Harrys on 17/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

void addition(int a, int b) {
    int sum = a + b;
    printf("%d + ", a);
    printf("%d ", b);
    printf("= %d", sum);
}

int main() {
    int x, y;
    printf("Please enter 2 numbers.\n");

    fprintf(stderr, "Number 1: \n");
    scanf("%d", &x);
    fprintf(stderr, "Number 2: \n");
    scanf("%d", &y);
    addition(x, y);
}