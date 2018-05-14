//
//  main.c
//  37.library_functions_for_string_operations
//
//  Created by James Harrys on 10/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char first[80] = "Chocolate factory";
    char second[80];
    char third[80] = "Candy";
    char fourth[80] = "Bar";
    
    // Copy function
    strcpy(second, first);
    printf("%s\n", second);
    
    // Merging function
    strcat(third, " ");     // Put a space between those two words
    strcat(third, fourth);
    printf("Merged strings: %s\n", third);
    
    // Comparing strings
    char animal1[80] = "cat";
    char animal2[80] = "zebra";
    int i;
    i = strcmp("animal1", "animal2");   // If both are equal, returns 0
    
    if (i == 0) {
        printf("Both are exactly equal.");
    } else if (i < 0) {
        printf("%s comes first\n", animal1);
    } else {
        printf("%s comes first\n", animal2);
    }
    
}
