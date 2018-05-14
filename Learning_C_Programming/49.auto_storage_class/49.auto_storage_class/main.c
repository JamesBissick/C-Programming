//
//  main.c
//  49.auto_storage_class
//
//  Created by James Harrys on 14/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// Introduction to storage class
/*  1 - auto
    2 - static
    3 - extern
    4 - register

// It defines
    1 - scope   --> the block from which it is accessible
    2 - lifetime --> how much time it is located in primary memory
    3 - initial value --> the value the variable is immediately assigned after allocation
*/

void test2() {
    int k;
    printf("k = %d\n", k);
    k = 20;
    printf("k = %d\n", k);
}

/* The initial value of a variable declared as auto is undefinied and unpredictable. A variable declared as auto is always local. The lifetime of an auto variable depends on the time its function takes to be completed. Once the function is over, the variable is deallocated. */
void test1() {
    int var;    // by default this var is stored as auto with some predefined value
    printf("var = %d\n", var);
    var++;
    printf("var = %d\n", var);
}

int main() {
    test2();
    test1();
}
