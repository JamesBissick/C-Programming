//
//  main.c
//  75.writing_struct_behaviour_part.2
//
//  Created by James Harrys on 22/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

typedef struct {
    int id;
    char name[20];
    double physics, maths, chemistry;
} Student;

void inputStudent(Student *);
char getGrade(Student);
void printStudent(Student);
double getAverageMarks(Student);


// *infos is Student object address (pointer)
void inputStudent(Student *pointer) {
    printf("Id: \n");
    scanf("%d", &pointer->id);
    printf("Name: \n");
    scanf(" %[^\n]", pointer->name); // Doesn't need a pointer
    printf("Marks in Physics: \n");
    scanf(" %lf", &pointer->physics);
    printf("Marks in Maths: \n");
    scanf(" %lf", &pointer->maths);
    printf("Marks in Chemistry: \n");
    scanf(" %lf", &pointer->chemistry);
}

double getAverageMarks(Student marks) {
    double sum = 0;
    sum = marks.physics + marks.maths + marks.chemistry;
    return sum/3;
}

char getGrade(Student marks) {
    char grade;
    double avg = getAverageMarks(marks);
    
    if (avg >= 90) {
        grade = 'A';
    }
    else if (avg >= 80 && avg < 90) {
        grade = 'B';
    }
    else if (avg >= 70 && avg < 80) {
        grade = 'C';
    }
    else if (avg >= 60 && avg < 70) {
        grade = 'D';
    }
    else if (avg >= 50 && avg < 60) {
        grade = 'E';
    }
    else {
        grade = 'F';
    }
    return grade;
}

void printStudent(Student infos) {
    printf("--------------Student details----------------\n");
    printf("---------------------------------------------\n");
    printf("Id:         %-4d\n", infos.id);
    printf("Name:       %-20s\n", infos.name);
    printf("Physics     %-10.2lf\n", infos.physics);
    printf("Maths       %-10.2lf\n", infos.maths);
    printf("Chemistry   %-10.2lf\n", infos.chemistry);
    printf("Grades:     %-4c\n", getGrade(infos));
    printf("---------------------------------------------\n");
}

int main() {
    Student s;
    inputStudent(&s);   // Write and modify
    printStudent(s);    // Read only
    
}
