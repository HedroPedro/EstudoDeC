#include <stdio.h>

#define CLAMP(x, a) x < a ? x : x > a ? (x>>1)+a : a

int somar(int *p, int size){
    int soma = 0;
    for(int i = 0; i < size; i++){
        soma += *(p+i);
    }
    return soma;
}

int main(void){
    int x = 10, y = 5;
    int *ptr1 = &x, *ptr2 = &y;
    y = (*ptr2)++;
}