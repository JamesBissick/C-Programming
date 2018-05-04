//
//  main.c
//  17.tax_income_exercice
//
//  Created by James Harrys on 03/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    double income, tax;
    printf("Please enter your income:\n");
    scanf("%lf", &income);
    if (income < 10000) {
        tax = 0.0;
    }
    else if (income >= 10000 && income < 20000) {
        tax = income * (.1);
    }
    else if (income >= 20000 && income <50000) {
        tax = income * (.2);
    }
    else {
        tax = income * (.25);
        tax = tax + tax * (.1);
    }
    printf("The payable tax is %0.2lf$\n", tax);
}
