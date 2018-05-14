//
//  main.c
//  35.finding_length_of_a_string
//
//  Created by James Harrys on 10/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char string[80];
    printf("Enter a string: \n");
    scanf("%[^\n]", string);  // Every accepted except return key
    int i;
    // for (i = 0; string[i] != '\0'; i++);
    i = strlen(string);
    printf("The length of the string is %d\n", i);
}
