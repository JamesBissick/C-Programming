//
//  main.c
//  107.function_pointer
//
//  Created by James Harrys on 16/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void printMsg() {
    printf("Hello World!");
}

int main() {
    printf("%p\n", main); // Will print the address of the main function
    printf("%p\n", printMsg); // Will print the address of the printMsg function
}
