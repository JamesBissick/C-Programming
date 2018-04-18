//
//  main.c
//  13-return_values
//
//  Created by James Harrys on 17/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int Multiply(int a, int b) {
    return (a * b);
}

int main() {

    /* printf("total = %d", Multiply(3, 6)); */

    
    int x, y;
    fprintf(stderr, "Please enter 2 numbers.\n");

    fprintf(stderr, "Number 1: ");
    scanf("%d", &x);
    fprintf(stderr, "Number 2: ");
    scanf("%d", &y);

    int total;
    total = Multiply(x, y);
    printf("%d", total);

}