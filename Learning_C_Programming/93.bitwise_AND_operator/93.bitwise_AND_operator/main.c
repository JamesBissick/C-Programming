//
//  main.c
//  93.bitwise_AND_operator
//
//  Created by James Harrys on 31/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//


// Demonstration of bitwise AND operator

#include <stdio.h>

int main() {
//    int x = 10;     // 0000 1010
//    int y = 7;      // 0000 1000
//    int z = x & y;  // 0000 1000
//    printf("z = %d\n", z);
    
/* Check if the number is odd without using the modulo operator */
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);
    
    if ((a & 1) == 1) {
        printf("%d is odd.\n", a);
    } else {
        printf("%d is even.\n", a);
    }
}
