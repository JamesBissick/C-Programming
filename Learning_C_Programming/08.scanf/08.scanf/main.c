//
//  main.c
//  08.scanf
//
//  Created by James Harrys on 02/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int x, y, i;
    printf("Enter two integers:\n");
    /* i will return the number of values it scanned from the keyboard successfully */
    i = scanf("%d %d", &x, &y);
    
    printf("x = %d, y = %d, i= %d\n", x, y, i);
}
