//
//  main.c
//  05.flushing_problems_with_char_input
//
//  Created by James Harrys on 02/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char character;
    int i, j;
    printf("Enter an integer: \n");
    scanf("%d", &i);
    printf("Enter a character: \n");
    /* Enter has been taken by the scanf because of how the memory works.
     * Adding a whitespace will resolve this step being skipped */
    scanf(" %c", &character);
    printf("Enter another integer: \n");
    scanf("%d", &j);
    
    return 0;
}
