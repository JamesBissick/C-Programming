//
//  main.c
//  48.fibonacci_sequence
//
//  Created by James Harrys on 14/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

/* Write a recursive to get the nth number of the fibonacci sequence
 Fibonacci sequence: 1 1 2 3 5 8 13 21 34 55... */

long getFibionacciSeq(int t) {
    if (t == 1 || t == 2 ) {
        return 1;
    }
    return getFibionacciSeq(t - 1) + getFibionacciSeq(t - 2);
}

int main() {
    int t;
    for (t = 1; t <= 15; t++) {
        printf("%ld\n", getFibionacciSeq(t));
    }
}
