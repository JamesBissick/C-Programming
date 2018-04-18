//
//  main.c
//  9-do_while_loop
//
//  Created by James Harrys on 16/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {

    int a = 0;
    do {
        printf("%d \n", a);
        a++;
    }
    while(a <= 10);
    printf("\n********************************\n\n");

    int b = 0;
    while(b <= 20) {
        printf("%d \n", b);
        b++;
    }
}