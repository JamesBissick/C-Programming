//
//  main.c
//  47.tower_of_hanoi
//
//  Created by James Harrys on 14/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// Implementation of the Tower of Hanoi game using recursive functions

void towerOfHanoi(int n, int source, int auxiliary, int destination) {
    if (n == 1) {
        // Just pick and place
        printf("Move the disk from #%d to tower #%d\n", source, destination);
        return;
    }
    
    // move all n-1 disk to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);
    towerOfHanoi(1, source, auxiliary, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);

}

int main() {
    towerOfHanoi(3, 1, 2, 3); // parameters: nb of discs, positions 1, 2 and 3
}
