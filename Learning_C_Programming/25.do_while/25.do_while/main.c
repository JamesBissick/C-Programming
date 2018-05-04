//
//  main.c
//  25.do_while
//
//  Created by James Harrys on 04/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int age;
    char response;

    do {
        printf("Enter age: \n");
        scanf("%d", &age);
        
        if (age >= 13 && age <= 19) {
            printf("You're a teenager.\n");
        } else {
            printf("You're not a teenager.\n");
        }
        
        printf("Do you wish to continue? (y/n): \n");
        scanf(" %c", &response);
    } while (response == 'y' || response == 'Y');
    
    return 0;
}
