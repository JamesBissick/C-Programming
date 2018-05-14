//
//  main.c
//  43.recursive_intro
//
//  Created by James Harrys on 14/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

void printMsg(unsigned int n) {
    if (n == 0) {
        return;
    }
    printf("Hello World!\n");
    n--;
    printMsg(n);
}

int main() {
    printMsg(4);
}
