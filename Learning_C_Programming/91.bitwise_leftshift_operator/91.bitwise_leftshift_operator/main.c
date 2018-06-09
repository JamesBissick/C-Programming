//
//  main.c
//  91.bitwise_leftshift_operator
//
//  Created by James Harrys on 31/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

/* x << i = (x * 2^i) */
/* 1 shift left :
 00000000 00000000 00000000 00000101
 00000000 00000000 00000000 00001010
 */
int main() {
    int x = 15;
    x = x << 3;
    printf("x = %d\n", x);
}
