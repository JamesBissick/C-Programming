//
//  main.c
//  50.storage_static_class
//
//  Created by James Harrys on 14/05/2018.
//  Copyright © 2018 James Harrys. All rights reserved.
//

void test2() {
    auto int k;
    printf("k = %d\n", k);
    k = 20;
    printf("k = %d\n", k);
}

/* When a variable is declared as static, the life of the variable is allocated depending of the life of the program. When the program starts, static variables will be allocated until the end of the program. Static variables are always assigned with 0 as value. The scope, like auto, is always local too. */
void test1() {
    static int var;
    printf("var = %d\n", var);
    var++;
    printf("var = %d\n", var);
}

int main() {
    test2();
    test1();
}
