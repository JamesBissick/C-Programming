//
//  main.c
//  46.when_recursion_is_preferable
//
//  Created by James Harrys on 14/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// benefits of recursion, when exactly we need it
void decimalsToBin(unsigned int n) {
    if (n == 1) {
        printf("1");
        return;
    }
    decimalsToBin(n/2);
    printf("%d", n%2);
}

int main() {
    decimalsToBin(10);
    printf("\n");
}
