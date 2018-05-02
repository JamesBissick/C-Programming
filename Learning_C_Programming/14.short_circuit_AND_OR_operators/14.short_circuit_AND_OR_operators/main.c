//
//  main.c
//  14.short_circuit_AND_OR_operators
//
//  Created by James Harrys on 02/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int a = -1, b = 10, c;
    c = ++a && ++b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    /* Oops a bug appears, well, since a after incrementation is 0, which means false in computing, the operation will not reach b, meaning, it will not increment b but will just stop at a.
       This is why b = 10, in this situation. Now, if we change a's value to be non-zero, b will be incremented properly. */
    
    int d = 0, e = 10, f;
    f = ++d || ++e;
    printf("d = %d, e = %d, f = %d\n", d, e, f);
    /* Wait, another bug? Yes, since d's value after incrementation = 1, which means true in computing, the operation will not reach e, it will not increment e but will just stop at d. Same as above.
       This is why e = 10 in this situation. We'll need to make the sum higher than 1. */
}
