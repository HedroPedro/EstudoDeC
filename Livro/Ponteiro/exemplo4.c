#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;
    if(p != p1)
        printf("São ponteiros diferentes");
    p1 = p;
    if(p == p1)
        printf("\nSão ponteiros iguais");
    p++;
    if(p > p1)
        printf("\nO ponteiro p1 e anterior ao p");
    p1 +=8;
    if(p < p1)
        printf("\nO ponteiro p e anterior ao p1");
}