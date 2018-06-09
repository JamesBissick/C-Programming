//
//  main.c
//  100.strtok_extracting_infos
//
//  Created by James Harrys on 08/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <string.h>

/* strtok function used to extract useful information separated by delimiters*/
int main() {
    char source[] = "Andrew Earl,40#5.5,400,2.5";
    char delims[] = ",#";
    char *token;
    
    token = strtok(source, delims);

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delims);
    }
    
}
