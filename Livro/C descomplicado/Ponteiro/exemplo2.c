#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p, *p1 = 10, x = 20;
    float y = 20.0;
    p = &x;
    printf("Conteudo de p: %i\n", *p);
    printf("Conteudo de p1: %p", p1);
    p1 = p;
    p = &y;
    printf("\np: %i\n", *p);
    printf("p: %f", *p);
}