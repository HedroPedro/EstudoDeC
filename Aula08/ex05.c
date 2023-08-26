#include <stdio.h>

#define ORDEM 5

int main(void){
    int matriz[ORDEM][ORDEM], i, j;
    float media, soma = 0;
    for(i = 0; i < ORDEM; i++){
        for(j = 0; j < ORDEM; j++){
            printf("Digite um numero para a posicao [%i %i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for(i = 0; i < ORDEM; i++){
        for(j = 0; j < ORDEM; j++){
            if(i == j){
                soma += matriz[i][j];
            }
    }

    media = soma/5.0f;

    printf("%.2f",media);
    return 0;
}