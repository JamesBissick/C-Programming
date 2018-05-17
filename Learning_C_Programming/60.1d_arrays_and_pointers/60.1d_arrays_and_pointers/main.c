//
//  main.c
//  60.1d_arrays_and_pointers
//
//  Created by James Harrys on 17/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    /* Since array x is an integer, each elements weigh 4 bytes.
       - Writing x + i = address of i element.
       - &x[i] == (x + i) = (address) they're the same.
     
       - Writing *(x + i) = content of i element.
       - x[i] == *(x + i) = (content) they're the same.
     */
    int x[] = {10, 20, 30, 40, 50};
    printf("%p, %p, %p", x, &x[0], x+0); // All are the same
    
    int i = 0;
    printf("\nContent of the array is: \n");
    for (i = 0; i < 5; i++) {
        printf("%4d ", x[i]);
    }
    printf("\n");
}
