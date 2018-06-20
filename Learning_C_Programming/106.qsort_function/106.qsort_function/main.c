//
//  main.c
//  106.qsort_function
//
//  Created by James Harrys on 16/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

/* Library qsort function
   void qsort(void *_base, size_t _nel, size_t _width, int (* comparator)(const void *, const void *))
*/

int compareTo(const void *first, const void *second) {
    int *a = (int*) first;
    int *b = (int*) second;
    
    if (*a > *b) {
        return +1;
    }
    else if (*b > *a) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int x[] = {1000, 50, 550, -10, -100, 45, 89, 125, 255, 12};
    int num = 10;
    
    qsort(x, num, sizeof(int), compareTo);
    int i = 0;
    for (i = 0; i < num; ++i) {
        printf("%6d", x[i]);
    }
    printf("\n");
}
