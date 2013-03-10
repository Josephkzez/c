#include <stdio.h>
#include <iostream>

int main() {
    
    int x, y;
    int *p1, *p2;
    
    *p1 = 5;
    *p2 = 7;
    
    printf("*p1 = %d\n*p2 = %d\n", *p1, *p2);
    
    *p2 = *p1;
    
    printf("*p2 = %d\n\n", *p2);
    
    system("PAUSE");

}
