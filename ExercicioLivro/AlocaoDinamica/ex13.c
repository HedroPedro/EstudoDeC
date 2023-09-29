#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int **matrix_make(int tam){
    int **matriz = (int **) malloc(sizeof(int *) * tam);
    for(int i = 0; i < tam; i++){
        matriz[i] = (int *) malloc(sizeof(int) * tam);
        for(int j = 0; j < tam; j++){
            matriz[i][j] = -1;
            
            if(j > i){
                matriz[i][j] = 1;
            }

            if(j == i){
                matriz[i][j] = 0;
            }
        }
    }
    return matriz;
}

int main(void){
    int **matriz = matrix_make(TAM), i;
    for(i = 0; i < TAM; ++i){
        for(int j = 0; j < TAM; ++j)
            printf(" %i ", matriz[i][j]);
        printf("\n");
    }
}