//
//  main.c
//  23-unions
//
//  Created by James Harrys on 18/04/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

struct myStruct {
    int Integer;    // 4 bits
    char Character; // 1 bit + padding to get a multiple of 4, because 5 isn't a multiple of 4
} record;

// Unions use the max allocated memory
union myUnion {
    int Integer;    // 4 bits
    char Character; // 1 bits (but uses 9 bits)
};

int main() {
    union myUnion UNI;
    UNI.Integer = 4;
    UNI.Character = 9;

    // Let's prove it, print struct size and union size
    printf("Size of Struct %d \n", sizeof(record));
    printf("Size of Union %d \n", sizeof(UNI));

}