//
//  main.c
//  74.writing_struct_behaviour
//
//  Created by James Harrys on 22/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

typedef struct {
    int id;           // 4 bytes
    char name[20];      // 20 bytes
    double scores;        // 8 bytes
} Student;

void inputStudent(Student *sptr) {
    printf("Enter ID:\n");
    scanf("%d", &sptr->id);
    printf("Enter name:\n");
    scanf(" %[^\n]", sptr->name);
    printf("Enter scores:\n");
    scanf(" %lf", &sptr->scores);
}

void printStudent(Student sp) {
    printf("ID: %6d \nName: %-25s \nScores: %.2lf\n", sp.id, sp.name, sp.scores);
}

int main() {
    
    Student demo;
    inputStudent(&demo); // Write and modify values (needs address)
    printStudent(demo);  // Read only
}
