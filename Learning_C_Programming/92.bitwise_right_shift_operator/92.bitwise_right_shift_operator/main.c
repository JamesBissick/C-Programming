//
//  main.c
//  92.bitwise_right_shift_operator
//
//  Created by James Harrys on 31/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

/* x >> i = (x / 2^i) */
/* 1 shift right :
   00000000 00000000 00000000 00001010
   00000000 00000000 00000000 00000101
*/
int main() {
    int x = 20;
    x = x >> 1;
    printf("x = %d\n", x);
}
