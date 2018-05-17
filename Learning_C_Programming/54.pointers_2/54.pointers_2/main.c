//
//  main.c
//  54.pointers_2
//
//  Created by James Harrys on 15/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int *p, *q;
    int **k; // pointer to pointer to integer
    int x = 100;
    /* pointer is a variable allocated in the ram*/
    p = &x;
    k = &p;
    printf("%d\n", **k);
    **k = **k + 1;
    printf("%d\n", x);
}
