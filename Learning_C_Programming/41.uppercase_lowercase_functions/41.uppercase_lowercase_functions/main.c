//
//  main.c
//  41.uppercase_lowercase_functions
//
//  Created by James Harrys on 13/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
// Prototyping declarations
int is_Lower_Case(char);
int is_Upper_Case(char);

char to_Upper_Case(char);
char to_Lower_Case(char);

char to_Upper_Case(char character) {
    if (is_Lower_Case(character)) {
        return character - 32;
    } else {
        return character;
    }
}
char to_Lower_Case(char character) {
    if (is_Upper_Case(character)) {
        return character + 32;
    } else {
        return character;
    }
}

int is_Lower_Case(char character) {
    if (character >= 'a' && character <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int is_Upper_Case(char character) {
    if (character >= 'A' && character <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char letter;
    
    letter = 'A';
    letter = to_Lower_Case(letter);
    printf("Lower Case equivalent: %c\n", letter);
    
    letter = 'q';
    letter = to_Upper_Case(letter);
    printf("Upper Case equivalent: %c\n", letter);
    
}
