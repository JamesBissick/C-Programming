//
//  main.c
//  09.assignement_operator
//
//  Created by James Harrys on 02/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int a;
    a = 10;
    /* a is the lvalue
     * 10 is the rvalue
     * you cannot interchange them like 10 = a, it is illegal.
     */
    
    // The following will not compile
    int x;
    10 = x; // Error
    printf("x = %d", x);
    return 0;
}
