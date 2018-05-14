//
//  main.c
//  42.testing_out_armstrong_number
//
//  Created by James Harrys on 13/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <math.h>
// Develop a function to test Armstrong number, a number is Armstrong Number if
// the sum of each digits raised to the power of number of digits (in that number)
// equals to the number itself.
// 1634 is Armstrong number as 1^4 + 6^4 + 3^4 + 4^4 = 1634
// 371 is Armstrong number as 3^3 + 3^7 + 1^3 = 371


// Prototyping functions
int getNumberOfDigits(int);
int isArmstrong(int);

int getNumberOfDigits(int n) {
    int count = 0;
    while (n > 0) {
        n = n/10;
        count++;
    }
    return count;
}

int isArmstrong(int n) {
    int sum = 0;
    int count = getNumberOfDigits(n);
    int temp = n;
    while (n > 0) {
        sum = sum + pow(n % 10, count);
        n = n/10;
    }
    return temp == sum;
}

int main() {
    //printf("%d\n", getNumberOfDigits(1234) == 4);
    int i;
    for (i = 1; i <= 100000; i++) {
        if (isArmstrong(i)) {
            printf("%d is Armstrong Number.\n", i);
        }
    }
}
