//
//  main.c
//  04b.characters
//
//  Created by James Harrys on 02/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    char character;
    printf("Enter an alphabetic character: ");
    scanf("%c", &character);
    
    if (character >= 'A' && character <= 'Z') {
        character = character + 32;
        printf("The corresponding lower case is : %c\n", character);
    } else if (character >= 'a' && character <= 'z') {
        character = character - 32;
        printf("The corresponding uppercase is : %c\n", character);
    } else {
        printf("The given character is not alphabetic.\n");
    }
    
    return 0;
}
