//
//  main.c
//  78.union_type
//
//  Created by James Harrys on 22/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

#include <stdio.h>

// Only the highest type will be allocated
typedef union {
    double weight;    // 8 bytes
    int size;         // 4 bytes
    char color[10];   // 10 bytes
} Description;

typedef struct {
    int id;
    char name[20];
    Description d;
    char dtype;
    double price;
} Item;

void inputItem(Item *pointer) {
    printf("Enter Item ID: ");
    scanf(" %d", &pointer->id);
    printf("Enter Item name: ");
    scanf(" %s", pointer->name);
    printf("Enter Price: ");
    scanf(" %lf", &pointer->price);
    
    printf("Weight/Size/Color ? w for Weight, s for Size and c for Color:\n");
    scanf(" %c", &pointer->dtype);
    
    if (pointer->dtype == 'w') {
        printf("Enter the weight: ");
        scanf(" %lf", &pointer->d.weight);
    }
    else if (pointer->dtype == 's') {
        printf("Enter the size: ");
        scanf(" %d", &pointer->d.size);
    }
    else if (pointer->dtype == 'c') {
        printf("Enter the color: ");
        scanf(" %s", pointer->d.color);
    }
}

void printItem(Item item) {
    printf("Item ID:        %d\n", item.id);
    printf("Item Name:      %s\n", item.name);
    printf("Item Price:     %.2lf\n", item.price);
    
    if (item.dtype == 'w') {
        printf("Weight:         %10.2lf\n", item.d.weight);
    }
    else if (item.dtype == 's') {
        printf("Size:           %d\n", item.d.size);
    }
    else if (item.dtype == 'c') {
        printf("Color:          %s\n", item.d.color);
    }
}

int main() {
    Item item;
    inputItem(&item);
    printItem(item);
    
}
