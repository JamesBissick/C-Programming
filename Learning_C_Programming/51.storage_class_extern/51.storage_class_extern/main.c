//
//  main.c
//  51.storage_class_extern
//
//  Created by James Harrys on 14/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
/* The lifetime of a global var depends on the duration of the program. */



void test() {
    extern int globalVar;   // Allows us to use a var that isn't written before
    printf("globalVar = %d\n", globalVar);
    globalVar = 20;
}


int main() {
    extern int globalVar;
    printf("globalVar = %d\n", globalVar);
    globalVar = 10;
    test();
    printf("globalVar = %d\n", globalVar);
}

int globalVar;  // global variables can be declared anywhere BUT, we need an extern class var to do this

