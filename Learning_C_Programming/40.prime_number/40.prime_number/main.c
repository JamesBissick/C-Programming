//
//  main.c
//  40.prime_number
//
//  Created by James Harrys on 13/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int sumOfPrimes(int lb, int ub) {
    int count, sum;
    for (count = lb, sum = 0; count <= ub; count++) {
        if (isPrime(count)) {
            sum += count;
        }
    }
    return sum;
}

int main() {
    /*
    int count;
    for (count = 10; count <= 100; count++) {
        if (isPrime(count)) {
            printf("%d is a prime number.\n", count);
        }
    }
    */
    int s;
    s = sumOfPrimes(10, 200);
    printf("Sum of prime in the range %d %d is %d\n", 10, 200, s);
}
