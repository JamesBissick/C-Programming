//
//  main.c
//  95.count_set_bits
//
//  Created by James Harrys on 31/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

/* count numbers of set bits in a number */

int main() {
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    
    int i, count = 0;
    
    for (i = 0; i < sizeof(int) * 8; ++i) {
        if ((x & (1 << i)) == (1 << i)) {
            count++;
        }
    }
    printf("Total set of bits = %d\n", count);
}
