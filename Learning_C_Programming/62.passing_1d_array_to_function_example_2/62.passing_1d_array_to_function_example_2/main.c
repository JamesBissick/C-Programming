//
//  main.c
//  62.passing_1d_array_to_function_example_2
//
//  Created by James Harrys on 17/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
/* Input a string from the console and toggle each alphabetical character and prints it back to the output console. Converted from LowerCase to UpperCase, and vice versa. */

void toggleChar(char *pointer) {
    int i;
    // for i = 0, i element not equals to NULL, increment i
    for(i = 0;(pointer[i] !='\0'); i++) {
        if(pointer[i] >= 'A' && pointer[i] <= 'Z') {
            pointer[i] += 32;
        }
        else if(pointer[i] >= 'a' && pointer[i] <= 'z') {
            pointer[i] -= 32;
        }
    }
}


int main() {
    char string[100];
    printf("Enter a word:\n");
    scanf("%[^\n]", string); // %[^\n] = any character except return key
    
    toggleChar(string);
    printf("Toggled characters : %s\n", string);
}
