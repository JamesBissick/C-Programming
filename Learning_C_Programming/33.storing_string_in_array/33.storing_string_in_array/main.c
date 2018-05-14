//
//  main.c
//  33.storing_string_in_array
//
//  Created by James Harrys on 10/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char stringA[80] = "Hello World";
    /* String will start at the beginning of a valid element and will end after the last letter, because these elements are not used, considered NULL */
    printf("Message is: %s\n", stringA);
    
    /* We're not obliged to enter a number of element to our array, C will make sure its elements + 1, represents its length. Why the + 1, because it need a NULL to know the end of the string */
    char stringB[] = "Another message";
    printf("Message is: %s\n", stringB);
    
    /* What if I want to assign a string to an array? We can't. We have to add a string.h first then proceed by using the function strcpy to assign a string to our array.*/
    char stringC[16];
    // stringC = "Hello Candy"; // Illegal operation -> error
    strcpy(stringC, "Hello Candy");
    printf("Message is: %s\n", stringC);
    
    /* We can override the content of an array using strcpy too. */
    char stringD[] = "Hello World";
    char stringE[32] = "Overriden message!";
    strcpy(stringD, stringE);
    printf("Message is: %s\n", stringD);
}
