//
//  main.c
//  58.when_to_use_pointers
//
//  Created by James Harrys on 17/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    /* the function should swap the values, BUT, in doesn't, here's why we need pointers in this case to make the function work. We need to put x and y values to a and b's address using pointers. */
}

int main() {
    int x = 100, y = 200;
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    
}
