//
//  main.c
//  22.while_loop_ex1
//
//  Created by James Harrys on 04/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int n, sum, i;
    printf("Enter number:\n");
    scanf("%d", &n);
    
    sum = 0;
    i = 1;
    
    while (i <= n) {
        sum += i++;
    }
    printf("Sum of first %d natural number is %d\n", n, sum);
}
