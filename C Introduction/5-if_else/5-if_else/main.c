//
//  main.c
//  5-if_else
//
//  Created by James Harrys on 16/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int age;
    fprintf(stderr, "Enter your age.\n");
    scanf("%d", &age);

    if(age > 18) {
        printf("You're good to go.");
    } else if(age == 18) {
        printf("You're 18, just old enough!");
    } else {
        printf("You're too young sorry.");
    }

}