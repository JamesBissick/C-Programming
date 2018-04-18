//
//  main.c
//  18-pointers
//
//  Created by James Harrys on 17/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// A pointer is a variable whose value is the address of another variable
int main() {
    int val = 30;
    int *pointer_p;
    pointer_p = &val;

    printf("address of val is %x \n", &val);
    printf("value of pointer_p is %x \n", &pointer_p);
    printf("value of pointer is %d \n", *pointer_p);

}