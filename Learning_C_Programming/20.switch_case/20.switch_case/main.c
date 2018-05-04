//
//  main.c
//  20a.switch_case
//
//  Created by James Harrys on 03/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    
    switch (n) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default:
            printf("Invalid number\n");
            break;
    }
}
