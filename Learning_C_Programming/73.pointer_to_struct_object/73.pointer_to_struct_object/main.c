//
//  main.c
//  73.pointer_to_struct_object
//
//  Created by James Harrys on 22/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

typedef struct {
    int id;           // 4 bytes
    char name[20];      // 20 bytes
    double scores;        // 8 bytes
} Student; // the name of the alias

int main() {
    Student save;
    Student *sptr;
    
    sptr = &save;
    
    // To access an object element we use arrows
    sptr->id = 5;
    printf("Enter name of student id#5:\n");
    scanf("%[^\n]", sptr->name);
    printf("Student's name is: %s\n.", sptr->name);
}
