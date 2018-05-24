//
//  main.c
//  79.pass_variable_arguments_to_functions
//
//  Created by James Harrys on 23/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    int total = 0;
    va_list ap;
    va_start(ap, count);
    
    int i;
    for (i = 1; i <= count; i++) {
        total += va_arg(ap, int);
    }
    va_end(ap);
    return total;
}

int main() {
    int k = sum(9, 20, 10, 7, 2);
    printf("Sum = %d\n", k);

}
