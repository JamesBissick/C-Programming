//
//  main.c
//  77.enums_constant
//
//  Created by James Harrys on 22/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// enums are integers, MON = 0, TUES = 1, WED = 2, etc.
typedef enum {
    MON, TUES, WED, THURS, FRI, SAT, SUN
} days_Of_Week;

// Let's create our own Boolean convention, FALSE = 0, TRUE = 1
typedef enum {
    FALSE, TRUE
} Boolean;

Boolean isEven(int n) {
    if(n%2 == 0)
        return TRUE;
    else
        return FALSE;
}

int main() {
    days_Of_Week day = SUN;
    printf("Today is SUNDAY.\n");
    
    if (day == SUN) {
        printf("Resting day.\n");
    } else {
        printf("Working day.\n");
    }
}
