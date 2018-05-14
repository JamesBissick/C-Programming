//
//  main.c
//  38.functions
//
//  Created by James Harrys on 12/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// Write a function that calculates simple interest on supplying the principal amount,
// rate of interest, duration and returns the interest found to the caller.
// Formula :  (p * r * t(in years)/100

// Declaring the function (Prototyping)
double getSimpleInterest(double principal, double rate, double time);

int main() {
    double i;
    i = getSimpleInterest(1000, 5, 2); // calling the function
    printf("Total interest: $%0.2lf\n", i);
}

double getSimpleInterest(double principal, double rate, double time) {
    double interest;
    interest = (principal * rate * time)/100;
    return interest;
}

