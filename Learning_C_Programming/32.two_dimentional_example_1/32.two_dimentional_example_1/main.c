//
//  main.c
//  32.two_dimentional_example_1
//
//  Created by James Harrys on 09/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

int main() {
    int salesperson, items;
    // Inputs for salesperson and items
    printf("Enter number of salesperson: \n");
    scanf("%d", &salesperson);
    printf("Enter number of items: \n");
    scanf("%d", &items);
    printf("\n\n\n");
    
    // Declare 2D array
    double salesData[salesperson][items];
    printf("Enter sales data: \n\n");
    int i, j;
    for (i = 0; i < salesperson; i++) {
        for (j = 0; j < items; j++) {
            printf("Sale amt for salesman #%d item #%d:", i + 1, j + 1);
            scanf("%lf", &salesData[i][j]);
        }
    }
    
    // Display report
    printf("---------------------------------\n");
    printf("Sales data: \n");
    printf("---------------------------------\n\n");
    double total = 0.0;
    double comm;
    for (i = 0; i < salesperson; i++) {
        printf("Sale data for salesperson #%d\n", i+1);
        printf("---------------------------------\n");
        total = 0.0;
        for (j = 0; j < items; j++) {
            printf("\tItem %d: $%0.2lf\n", j+1, salesData[i][j]);
            total += salesData[i][j];
        }
        printf("\tTotal:  $%0.2lf\n", total);
        comm = 0.1 * total;
        printf("\tComm:   $%0.2lf\n", comm);
        printf("\n\n");
    }
}
