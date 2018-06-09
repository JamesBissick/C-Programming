//
//  main.c
//  99.sscanf_scanning_formated_data
//
//  Created by James Harrys on 06/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    char infos[] = "James 26 83.75";
    // Example 2, what if we have our info string written as below?
    //char infos[] = "Name: James Age: 26 Weight: 83.75";
    char name[20];
    int age;
    double weight;
    
    // sscanf reads from string instead of keyboard
    sscanf(infos, "%s %d %lf", name, &age, &weight);
    //sscanf(infos, "%*s %s %*s %d %*s %lf", name, &age, &weight);
    /* %*s is used to ignore the first string from example 2 */
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Weight: %.3lf\n", weight);
    
}
