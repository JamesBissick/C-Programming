//
//  main.c
//  103.clock_function
//
//  Created by James Harrys on 08/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

long fibonacci(int t) {
    if (t == 1) {
        return 0;
    }
    else if (t == 2) {
        return 1;
    }
    else {
        return fibonacci(t-1) + fibonacci(t-2);
    }
}

int main() {
    printf("Hello, lets understand the clock function.\n");
    long tickA = clock();
    printf("%ld", tickA);
    
    long sum = 0;
    int i = 1;
    while (i <= 35) {
        sum += fibonacci(i);
        ++i;
    }
    long tickB = clock();
    long ellapsed = tickB - tickA;
    printf("\nClock ticks used: %ld\n", ellapsed);
    
    double ellapsed_time = (double)ellapsed/CLOCKS_PER_SEC;
    printf("Time taken is %lf seconds.\n", ellapsed_time);
}
