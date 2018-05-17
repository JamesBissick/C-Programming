//
//  main.c
//  63.constant_pointers
//
//  Created by James Harrys on 17/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
/* Any attempt to modify a constant will generate a compilation error. */
int main() {
    const double PI = 3.14; // constants garantee a variable to remain unchanged
    int array[] = {1, 2, 3}; // the name of an array is a constant and cannot be changed
    int * const p = array;
    // const int *p = array;  // in this case the datype is a constant, not *p
    
    // p = array;  // Compilation error
    // p++;        // illegal
    (*p)++;        // legal
}
