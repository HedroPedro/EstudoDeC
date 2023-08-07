#include <stdio.h>

#define TAM 10

void calcularSomaDiagonal(int matriz[][TAM], int len);

int main(int agrc, char *argv[]){
    int matriz[TAM][TAM];
    for (int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            matriz[i][j] = i;
    
    calcularSomaDiagonal(matriz, TAM);
}

void calcularSomaDiagonal(int matriz[][TAM], int len){
    long soma;
    for(int i =0; i < len; i++)
        for(int j= 0; j < len; j++)
            soma += matriz[i][j];
    printf("A soma e %li", soma);
}