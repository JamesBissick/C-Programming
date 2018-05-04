//
//  main.c
//  26b.continue
//
//  Created by James Harrys on 04/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int count;
    
    for (count = 1; count <= 100; count++) {
        /* If count is divisible by 2 it will continue, else it will stop. */
        if (count % 2 == 0) {
            continue; // At this step, it will directly move to incrementation, resulting in printing only number that aren't divisible by 2.
        }
        printf("Count = %d\n", count);
    }
}
