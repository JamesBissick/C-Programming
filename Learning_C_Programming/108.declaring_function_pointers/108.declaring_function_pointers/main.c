//
//  main.c
//  108.declaring_function_pointers
//
//  Created by James Harrys on 16/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void printMsg() {
    printf("Hello World!\n");
}

void printFun() {
    printf("It's all fun!\n");
}

int sum (int a, int b) {
    return a + b;
}

int main() {
    void (*p)();
    p = printMsg;
    p();
    
    p = printFun;
    p();
    
    int (*s)(int, int);
    s = sum;
    int result = s(10, 30);
    printf("Sum is: %d\n", result);
    
    
}
