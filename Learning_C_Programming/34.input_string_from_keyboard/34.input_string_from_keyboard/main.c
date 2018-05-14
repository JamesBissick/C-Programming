//
//  main.c
//  34.input_string_from_keyboard
//
//  Created by James Harrys on 10/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    /*
    char string[80];
    printf("Enter your name: \n");
    scanf("%s", string);
    printf("Welcome %s!\n", string);
    */
    
    /* Note that if there's a space in the name, the second part won't be printed
       To remedy this, we can tell what character are accepted instead of using %s. */
    char stringName[80];
    printf("Enter your name: \n");
    scanf("%[A-Z, a-z]", stringName); // Accepts [A-Z,'whitespace',a-z]
    scanf("%[^\n]", stringName);      // Accepts every key from keyboard except return key
    printf("Welcome %s!\n", stringName);
}
