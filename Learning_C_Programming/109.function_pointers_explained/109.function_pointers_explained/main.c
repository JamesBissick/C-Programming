//
//  main.c
//  109.function_pointers_explained
//
//  Created by James Harrys on 18/06/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// function pointer in action
char toUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    } else {
        return ch;
    }
}
char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    } else {
        return ch;
    }
}

void changeCase(char string[], char (*ch_pointer)(char)) {
    int i = 0;
    for (i = 0; string[i] != '\0'; ++i) {
        string[i] = ch_pointer(string[i]);
    }
}
/*
void changeToUpperCase(char string[]) {
    int i = 0;
    for (i = 0; string[i] != '\0'; ++i) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 32;
        }
    }
}

void changeToLowerCase(char string[]) {
    int i = 0;
    for (i = 0; string[i] != '\0'; ++i) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32;
        }
    }
}
*/

int main() {
    char string[] = "@Hello World@!";
    changeCase(string, toUpperCase);
    printf("%s\n", string);
    changeCase(string, toLowerCase);
    printf("%s\n", string);
}
