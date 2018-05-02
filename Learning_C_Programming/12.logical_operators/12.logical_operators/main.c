//
//  main.c
//  12.logical_operators
//
//  Created by James Harrys on 02/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    // && AND operator
    int a, age;
    age = 25;
    a = age >= 13 && age <= 19;
    printf("a = %d\n", a); // a = false = (0)
    
    // || OR operator
    int b, otherAge;
    otherAge = 15;
    b = age >= 13 || age <= 19;
    printf("b = %d\n", b); // b = false = (0)
    
    // != NOT operator
    int c = 10, d = 70, i;
    i = !(c > d);
    printf("i = %d\n", i);
}
