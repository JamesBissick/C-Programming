//
//  main.c
//  7-switch
//
//  Created by James Harrys on 16/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    int marks=100;
    switch (marks) {

        case 100:
        case 90:
        case 85:
            printf("Excellent");
            break;
        case 70:
            printf("Very Good");
            break;
        case 60:
            printf("Good");
            break;
        case 40:
            printf("Ok");
            break;
        // default is similar to an else
        default:
            printf("Grade unavailable");
    }
}