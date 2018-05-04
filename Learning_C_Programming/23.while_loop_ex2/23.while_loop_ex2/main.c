//
//  main.c
//  23.while_loop_ex2
//
//  Created by James Harrys on 04/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int number, sum;
    sum = 0;
    
    printf("Enter a positive number, negative to terminate.\n");
    scanf("%d", &number);
    
    while (number >= 0) {
        sum += number;
        printf("Enter a positive number, negative to terminate.\n");
        scanf("%d", &number);
    }
}
