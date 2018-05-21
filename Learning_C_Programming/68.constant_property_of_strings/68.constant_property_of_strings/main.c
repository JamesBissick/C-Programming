//
//  main.c
//  68.constant_property_of_strings
//
//  Created by James Harrys on 18/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    char *string = "Hello";
    printf("%s\n", string);
    
    string[1] = 'o'; // induces an error
    printf("%s\n", string);
}
