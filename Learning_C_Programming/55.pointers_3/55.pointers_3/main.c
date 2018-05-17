//
//  main.c
//  55.pointers_3
//
//  Created by James Harrys on 15/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int *p;
    float *f;
    double *d;
    char *k;
    
    printf("%lu bytes\n%lu bytes\n%lu bytes\n%lu bytes\n", sizeof(p), sizeof(f), sizeof(d), sizeof(k));
    printf("%lu bytes\n%lu bytes\n%lu bytes\n%lu bytes\n", sizeof(*p), sizeof(*f), sizeof(*d), sizeof(*k));
}
