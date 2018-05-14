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
// Formula :  (p * r * t)/100

double getSimpleInterest(double principal, double rate, double time) {
    double interest;
    interest = (principal * rate * time)/100;
    return interest;
}

int main() {
    double p, r, t, i;
    printf("Enter principal amount: \n");
    scanf("%lf", &p);
    printf("Enter rate of interest: \n");
    scanf("%lf", &r);
    printf("Enter duration: \n");
    scanf("%lf", &t);
    
    i = getSimpleInterest(p, r, t); // calling the function
    printf("Total interest: $%0.2lf\n", i);
}
