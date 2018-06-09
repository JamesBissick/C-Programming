//
//  main.c
//  102.memcpy_copy_from_memory_block
//
//  Created by James Harrys on 08/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Ahah ahah, Hello World";
    char destination[100];
    
    memcpy(destination, source, 4);
    destination[4] = '\0';
    printf("%s\n", destination);
}
