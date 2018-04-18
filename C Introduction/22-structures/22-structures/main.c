//
//  main.c
//  22-structures
//
//  Created by James Harrys on 18/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[20];
    float percentage;

};

int main() {
    // Call a structure and give it a name
    struct student record1;
    record1.id = 1;
    strcpy(record1.name, "James");
    record1.percentage = 75.9;

    printf("\nId: %d \nName: %s  \nPercentage: %f \n", record1.id, record1.name, record1.percentage);

    struct student record2;
    record2.id = 2;
    strcpy(record2.name, "Harrys");
    record2.percentage = 83.6;

    printf("\nId: %d \nName: %s  \nPercentage: %f \n", record2.id, record2.name, record2.percentage);
}