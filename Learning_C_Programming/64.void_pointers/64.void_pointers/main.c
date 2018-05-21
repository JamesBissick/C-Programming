//
//  main.c
//  64.void_pointers
//
//  Created by James Harrys on 18/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
/* void can store any kind of data type variable, address aritmethic aren't applicable. */
int main() {
    void *voidPointer;
    int x = 200;
    voidPointer = &x;
    
    //printf("%d\n", *voidPointer);  ---> compilation error
    printf("%d\n", *(int *)(voidPointer)); // --> type casting
}
