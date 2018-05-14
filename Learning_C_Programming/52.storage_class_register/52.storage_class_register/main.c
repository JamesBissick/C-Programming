//
//  main.c
//  52.storage_class_register
//
//  Created by James Harrys on 14/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

/* Register variables have a local scope, its lifetime is depending on the function duration just like auto variables. */

int main() {
    register int count;
    for (count = 1; count <= 1000; count++) {
        // some important code here
    }
}
