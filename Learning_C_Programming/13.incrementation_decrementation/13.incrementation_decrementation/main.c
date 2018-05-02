//
//  main.c
//  13.incrementation_decrementation
//
//  Created by James Harrys on 02/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;
    int i, e;
    
    i = ++a;    // Exemple of pre-incrementation, a will be incremented by one then assigned to i.
    printf("a = %d, i = %d\n", a, i);
    
    e = b++;    // Exemple of post-incrementation, b will be assigned to i first then it'll be incremented.
    printf("b = %d, e = %d\n", b, e);
    
    
    /* Other demonstration */
    int number = 5;
    printf("number = %d\n", number++);  // 5 (print number's value before incrementing it)
    printf("number = %d\n", number);    // 6 (after post-incrementation value is 6)
    printf("number = %d\n", ++number);  // 7 (value is directly incremented to 7)
    
    
    /* 3rd demonstration using multiplication */
    int m = 5, n = 6, o;
    int x = 5, y = 6, z;
    
    o = m++ * n++;  // 5 * 6 = 30 then values -> 6 * 7 after operation
    printf("m = %d, n = %d, o = %d\n", m, n, o);
    
    z = ++x * y++;  // 6 * 6 = 36 then values -> 6 * 7 after operation
    printf("x = %d, y = %d, z = %d\n", x, y, z);
}
