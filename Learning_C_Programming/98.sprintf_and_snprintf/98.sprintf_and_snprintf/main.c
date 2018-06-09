//
//  main.c
//  98.sprintf_and_snprintf
//
//  Created by James Harrys on 03/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>

/* sprintf - writes a formatted string into a character array. Just like printf but instead of printing into the console it prints a string into an array. */

int main() {
    
    int varA = 5;
    double varB = 7.25;
    char buff_string[100];
    char string[] = ", this is fun!";
    
    int count = sprintf(buff_string, "varA = %d, varB = %lf%s\n", varA, varB, string);
    
    printf("%s", buff_string);
    printf("count = %d\n", count);
}
