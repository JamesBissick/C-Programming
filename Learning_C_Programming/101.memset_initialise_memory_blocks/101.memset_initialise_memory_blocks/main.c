//
//  main.c
//  101.memset_initialise_memory_blocks
//
//  Created by James Harrys on 08/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char string[] = "Ahah ahah, Hello World!";
    memset(string + 5, '@', 4);
    
    printf("%s\n", string);
    char *p = (char *)malloc(sizeof(char) * 20);
    memset(p, '\0', 20);
    memset(p, '-', 19);
    printf("%s\n", p);
}
