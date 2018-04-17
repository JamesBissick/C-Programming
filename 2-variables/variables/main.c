//
//  main.c
//  variables
//
//  Created by James Harrys on 09/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    /* Variables names:
        - Must not begins with a number
        - spaces are not allowed
        - $ no '--' allowed, only letters, digits, and underscores
        - Must not use reserved keywords
     */
    int age;
    float pi = 3.14;
    char myChar = 'a';
    double bigPieNumber = 3.147896;
    age = 26;
    printf("James is %d, %s", age, "years old.");
    return 0;

}