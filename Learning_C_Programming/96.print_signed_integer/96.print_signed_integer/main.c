//
//  main.c
//  96.print_signed_integer
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
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);
    
    printBinary(x);
    printf("\n");
}
