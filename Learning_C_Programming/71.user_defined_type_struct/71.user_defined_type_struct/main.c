//
//  main.c
//  71.user_defined_type_struct
//
//  Created by James Harrys on 22/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

struct Student {
    int id;           // 4 bytes
    char name[20];      // 20 bytes
    double scores;        // 8 bytes
};

int main() {
    // Declaring 3 objects of type Student
    struct Student S1, S2, S3;
    S1.id = 1;
    S2.id = 2;
    S3.id = 3;
    
    
}
