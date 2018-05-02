//
//  main.c
//  07.printf
//
//  Created by James Harrys on 02/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int i;
    i = printf("Hello");
    /* printf will return the number of characters in Hello */
    printf("\n%d\n", i);
    
    printf("\n%d\n", printf("Hello World"));
    return 0;
}
