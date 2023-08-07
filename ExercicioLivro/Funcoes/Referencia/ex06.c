#include <stdio.h>

#define TAM 3

void matrizTransposta(int matriz[][TAM], int matrizTransp[][TAM], int len);

int main(int agrc, char *argv[]){
    int matriz1[TAM][TAM], matriz2[TAM][TAM];
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++)
            scanf("%i", &matriz1[i][j]);
    }
    matrizTransposta(matriz1, matriz2, TAM);
    for(int i = 0; i < TAM; ++i){
        for(int j = 0; j < TAM; j++)
            printf(" %i ", matriz2[i][j]);
        printf("\n");
    }
    return 0;    
}

void matrizTransposta(int matriz[][TAM], int matrizTransp[][TAM], int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            matrizTransp[i][j] = matriz[j][i];
        }
    }
}
