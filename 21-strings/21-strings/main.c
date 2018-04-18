//
//  main.c
//  21-strings
//
//  Created by James Harrys on 18/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {

    char stringA[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char stringB[] = "Hello";

    char string1[12] = "Hello";
    char string2[12] = "World";
    char string3[12];

    printf("String A value is %s \n", stringA);
    printf("String B value is %s \n", stringB);

    strcpy(string3, string1); // strcpy(destination, source)
    strcat(string1, string2); // add string2 to string1
    int lengthofString1 = strlen(string1);  // gives you the length of a string

    printf("strcpy = %s \n", string3);
    printf("strcat = %s \n", string1);
    printf("strlen = %d \n", lengthofString1);
}