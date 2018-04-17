//
//  main.c
//  if_condition
//
//  Created by James Harrys on 10/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    printf("Please enter your age. ");
    scanf("%d", &age);

    if(age > 18) {
        printf("You can drink in France.");
    }
    if(age == 18) {
        printf("You just became a man.");
    }
    if (age < 18){
        printf("You're not old enough to drink in France.");
    }

}
