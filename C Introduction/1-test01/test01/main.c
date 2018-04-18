//
//  main.c
//  test01
//
//  Created by James Harrys on 09/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("%d \n", 32);                // integer
    printf("%ld \n", 3276465437);       // large integer
    printf("%f \n", 32.5);              // float number
    printf("%lf \n", 327657647.5);      // large float
    printf("%c \n", 'a');               // character
    printf("%s \n", "Hello");           // string
    printf("%x \n", 16);                // hexadecimal

    puts("this is my first program");
    return 0;
}