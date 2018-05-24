//
//  main.c
//  76.struct_type_within_another_struct_type
//
//  Created by James Harrys on 22/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    int id;
    char name[20];
    double basic;
    Date dob;
} Employee;

int main() {
    Employee a;
}
