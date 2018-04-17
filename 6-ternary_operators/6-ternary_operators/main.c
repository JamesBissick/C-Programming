//
//  main.c
//  6-ternary_operators
//
//  Created by James Harrys on 16/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// The ternary operators in C
int main() {
    int a = 19, b = 24;
    int c;
    // (*Logical expression*) ? (*if true*) : (*if false*)
    c = (a > b) ? a : b;

    fprintf(stderr, "Answer is %d.", c);
}