//
//  main.c
//  26.break_and_continue
//
//  Created by James Harrys on 04/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int count;
    char response;
    
    for (count = 1; count <= 100; count++) {
        printf("Count = %d\n", count);
        printf("Do you wish to continue? (y/n)\n");
        scanf(" %c", &response);
        if (response != 'y' && response != 'Y') {
            break;
        }
    }
    printf("Terminated at count : %d\n", count);
    
}
