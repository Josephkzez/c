#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x, y;
    int *p1;
    x = 5;
    p1 = &x;
    y = *p1;
    
    printf("valor de x: %d\n", x);
    printf("endereco de x: %p\n\n", &x);    
    printf("valor de y: %d\n", y);
    printf("endereco de y: %p\n\n", &y);    
    printf("endereco para onde aponta o ponteiro p1: %p\n", p1);
    printf("endereco do ponteiro p1: %p\n", &p1);    
    printf("conteudo do ponteiro p1: %d\n\n", *p1);
    
    system("pause");
    
    return 0;
    
}
