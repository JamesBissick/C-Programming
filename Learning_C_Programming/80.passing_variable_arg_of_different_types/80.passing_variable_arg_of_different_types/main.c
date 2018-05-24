//
//  main.c
//  80.passing_variable_arg_of_different_types
//
//  Created by James Harrys on 23/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

double sum(char *format, ...) {
    double total = 0.0;
    va_list ap;
    va_start(ap, format);
    
    int i;
    for (i = 0; i <= strlen(format); i++) {
        char ch = format[i];
        switch (ch ) {
            case 'i': total += va_arg(ap, int);
                break;
            case 'd': total += va_arg(ap, double );
                break;
            case 'f': total += va_arg(ap, double);
                break;
            default: printf("Invalid format found.\n");
                exit(1);
        }
        
    }
    va_end(ap);
    return total;
}

int main() {
    double k = sum("idfid", 9, 20, 10.5, 7.3f, 2.75);
    printf("Sum = %lf\n", k);
    
}
