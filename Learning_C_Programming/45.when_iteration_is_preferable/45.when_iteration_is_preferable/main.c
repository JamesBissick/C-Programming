//
//  main.c
//  45.when_iteration_is_preferable
//
//  Created by James Harrys on 14/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
// Print from 1 to n

void printNumber(unsigned int n) {
    if (n == 0) {
        return;
    }
    printNumber(n-1);
    printf("%d\n", n);
    /*
     1. n = 4
     2. n = 3
     3. n = 2
     4. n = 1
     return to top of stack
     print 1
     print 2
     print 3
     print 4
    */
    
}

int main() {
    printNumber(4);
}
