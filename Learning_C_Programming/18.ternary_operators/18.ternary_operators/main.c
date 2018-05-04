//
//  main.c
//  18.ternary_operators
//
//  Created by James Harrys on 03/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int age;
    printf("Please, enter your age:\n");
    scanf("%d", &age);
    
    age > 13 && age < 19 ? printf("You are a teenager.\n") : printf("You are NOT a teenager.\n");
}
