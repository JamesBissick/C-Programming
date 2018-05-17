//
//  main.c
//  57.more_on_pointers
//
//  Created by James Harrys on 15/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int x = 300;
    char *k;
    int *p;
    // Binary equivalent (4 bytes): 00000000 00000000 00000001 00101100
    k = (char *)&x;
    p = &x;
    printf("%d %d\n", *p, *k);
}
