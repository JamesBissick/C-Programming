//
//  main.c
//  72.typedef_keyword
//
//  Created by James Harrys on 22/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// Creating an alias
typedef int integer;

//typedef struct Student Student;

typedef struct Student {
    int id;           // 4 bytes
    char name[20];      // 20 bytes
    double scores;        // 8 bytes
} Student; // the name of the alias

int main() {
    // Calling aliases
    integer x;
    Student S1, S2, S3;

    S1.id = 1;
    S2.id = 2;
    S3.id = 3;
    
    x = 5;
}
