//
//  main.c
//  02.Variables_Hex_and_Octa
//
//  Created by James Harrys on 30/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int varA = 45;
    printf("Decimal value of varA = %d\n", varA);         // Decimal value
    printf("Octodecimal value of varA = %o\n", varA);     // Octo value
    printf("Hexadecimal value of varA = %x\n\n", varA);     // Hexadecimal value
    
    int varB = 056;
    printf("Decimal value of varB = %d\n", varB);         // Decimal value
    printf("Octodecimal value of varB = %o\n", varB);     // Octo values
    printf("Hexadecimal value of varB = %x\n\n", varB);     // Hexadecimal value
    
    int varC = 0xa;
    printf("Decimal value of varC = %d\n", varC);         // Decimal value
    printf("Octodecimal value of varC = %o\n", varC);     // Octo values
    printf("Hexadecimal value of varC = %x\n\n", varC);     // Hexadecimal value
    
    return 0;
}
