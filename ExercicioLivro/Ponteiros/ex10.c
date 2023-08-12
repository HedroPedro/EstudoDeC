#include <stdio.h>
#include <stdlib.h>

void exibir(int a, int *b, int **c, int ***d);

int main(void){
    int a, *b = &a, **c =&b, ***d = &c;
    printf("Digite um numero inteiro: ");
    scanf("%i", &a);
    exibir(a, b, c, d);
}

void exibir(int a, int *b, int **c, int ***d){
    printf("Numero: %i\n", a);
    printf("Dobro: %i\n",(*b)<<1);
    printf("Triplo: %i\n", (**c)*3);
    printf("Quadruplo: %i\n",(***d)<<2);
}