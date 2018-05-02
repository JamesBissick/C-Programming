#include <stdio.h>

int main() {
    
    /* C is a strictly typed language, it means we must
     * declare what type a variable/value is. */
    
    int VarA;    // 4 bytes
    VarA = 5;
    float x;    // 4 bytes
    x = 3.14;
    double d;    // 8 bytes -> means higher range of values
    d = 3048.567;
    
// ------------------------------------------------------------
    
    /* Let's take an input from the keyboard via the OS. Use the function scanf.
     * Every OS inputs and outputs values in terms of text char. We have to tell it
     * in which format we want the input to be. */
    
    int VarB;
    printf("Please enter a number.\n\n");
    scanf("%d", &VarB);
    printf("\nThe value of VarB is %d.\n", VarB);
    return 0;
    
}
