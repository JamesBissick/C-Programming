//
//  main.c
//  4.characters
//
//  Created by James Harrys on 02/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    char character = 'A';
    printf("Character = %c\n", character);
    printf("Enter a character.\n");
    char UserChar;
    // scanf("%c", &UserChar);
    
    /* There's another function to get the user input */
    UserChar = getchar();
    printf("You've typed the character %c.\n\n", UserChar);
    
    /* Characters are represented as integer in primary memory, ASCII value. */
    printf("%d -> %c\n", character, character);
    
    /* Let's print every letters in the alphabet*/
    int i = 65;
    for(i = 65; i<91; i++) {
        printf("%d -> %c\n", i, i);
    }
    
}
