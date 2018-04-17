//
//  main.c
//  14-scope
//
//  Created by James Harrys on 17/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int global_var = 77; // global variable

void NumberPrint() {
    // local variables
    int local_num = 30;

}

int main() {

    // local variable
    int local_var = 10;

    printf("Local var = %d\n", local_var);
    printf("Local num = %d\n", local_num); // ERROR, Unreachable, out of scope
    printf("Global var = %d\n", global_var);
}