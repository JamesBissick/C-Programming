//
//  main.c
//  53.pointers_intro
//
//  Created by James Harrys on 15/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int var = 5;
    int *p;

    printf("%p\n", &var); // Printed in hexadecimal format
    p = &var;
    printf("%d\n", var);
    *p = 10;
    printf("%d\n", var);
    *p = *p + 1;

}
