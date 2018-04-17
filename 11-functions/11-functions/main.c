//
//  main.c
//  11-functions
//
//  Created by James Harrys on 17/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// Declaring a function
void MyFunction() {
    printf("\nsum = %d", 25+13);
    printf("\nWe are inside my function.\n");
}

int main() {
    // Calling MyFunction for it to be executed
    MyFunction();
}