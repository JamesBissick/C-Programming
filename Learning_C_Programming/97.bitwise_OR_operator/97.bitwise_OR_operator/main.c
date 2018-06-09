//
//  main.c
//  97.bitwise_OR_operator
//
//  Created by James Harrys on 31/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

void printBinary(int n) {
    int i;
    unsigned k = 1 << 31;
    for (i = 0; i < sizeof(int) * 8; ++i) {
        if ((n & (k >> i)) == (k >> i)) {
            printf("1");
        } else {
            printf("0");
        }
        if ((i + 1) % 8 == 0) {
            printf(" ");
        }
    }
}
int main() {
    int x = 10;
//    int y = 7;
//    int z = x | y;
//    printf("z = %d\n", z);
//    printBinary(z);
    
    // Demonstration
    printBinary(x);
    printf("\n");
    x = x | 4;
    printBinary(x);
    printf("\n");
    
}
