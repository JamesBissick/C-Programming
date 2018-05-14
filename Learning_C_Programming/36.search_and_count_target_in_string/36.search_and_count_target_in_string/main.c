//
//  main.c
//  36.search_and_count_target_in_string
//
//  Created by James Harrys on 10/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    char string[80];
    printf("Enter a string: \n");
    scanf("%[^\n]", string);
    
    int i, countAlpha = 0, countSpace = 0;
    for (i = 0; string[i] != '\0'; i++) {
        if ((string[i] >= 'A' && string[i] >= 'Z') || (string[i] >= 'a' && string[i] >= 'z')) {
            countAlpha++;
        } else if (string[i] == ' '){
            countSpace++;
        }
    }
    printf("Total alphabetic character found: %d\n", countAlpha);
    printf("Total whitespace characters found: %d\n", countSpace);
}
