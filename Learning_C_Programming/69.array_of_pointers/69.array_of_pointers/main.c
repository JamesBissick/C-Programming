//
//  main.c
//  69.array_of_pointers
//
//  Created by James Harrys on 20/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int* p[3]; /* p is an array of pointer, each elements of array p are integer pointers */
    // float* k[10]; /* k is an array of pointer, each elements of array k are float pointers */
    int **k;
    k = p;
    
    int x[] = {1, 2, 3};
    int y[] = {10, 20, 30};
    int z[] = {5, 7, 8};
    
    p[0] = x;
    p[1] = y;
    p[2] = z;
    
    printf("%d\n", **p);          // will return p[0] = x, x[0] = 1, so p = 1;
    printf("%d\n", *(*(p+1)));    // will return p[1] = y, y[0] = 10, so p = 10;
    printf("%d\n", *(*(p+1)+2));  // will return p[1] = y, y[2] = 30, so p = 30;
    
    /*
     - *(p+1) == p[1]
     - *(*(p+1)+2)) is equivalent to p[1][2]
    */
}
