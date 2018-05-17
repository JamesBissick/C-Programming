//
//  main.c
//  56.arithmetic_address
//
//  Created by James Harrys on 15/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    p = &x;
    
    printf("Content of p: %lu\n", p);
    p += 1; // p will be increased by 4 bytes
    printf("Content of p: %lu\n", p);
    
    double *a = (double *) 10000;
    double *b = (double *) 2000;
    /* (10,000 - 2,000) / 8 = 1,000; */
    printf("%d\n", a - b);
}
