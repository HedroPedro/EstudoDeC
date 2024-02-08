#include <stdio.h>

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(void){
    int a = 5, b = 3;

    troca(&a, &b);
    printf("%d %d", a, b);
}