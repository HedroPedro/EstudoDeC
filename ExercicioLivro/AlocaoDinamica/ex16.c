#include <stdio.h>
#include <stdlib.h>

#define TAM 4

typedef unsigned int uint;

int *vector_createByMulti(uint tam, int matrix[][tam], int *vector);

int main(void){
    int matrix[TAM][TAM], vetor[TAM], *vetorResul;
    uint i;
    for (i = 0; i < TAM; i++){
        vetor[i] = i+1;
        for(uint j = 0; j < TAM; j++){
            matrix[i][j] = j+1;
        }
    }
    vetorResul = vector_createByMulti(TAM, matrix, vetor);
    for(i = 0; i < TAM; i++){
        printf(" %i ", vetorResul[i]);
    }
    free(vetorResul);
    vetorResul = NULL;    
}

int *vector_createByMulti(uint tam, int matrix[][tam], int *vector){
    int *vectorResult = malloc(sizeof(int) * tam);
    int resul;
    for(uint i = 0; i < tam; i++){
        resul = vector[i];
        for(uint j = 0; j < tam; j++){
            resul *= matrix[i][j];
        }
        vectorResult[i] = resul;
    }
    return vectorResult;
}