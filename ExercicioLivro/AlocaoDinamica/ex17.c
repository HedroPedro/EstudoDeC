#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef unsigned int uint;

uint *vectorBySumOfMatrixElement(uint **matrix, uint tam);

int main(void){
    uint **matrix = (uint **) malloc(sizeof(uint *) * TAM), *columns = (uint *) malloc(sizeof(uint) * TAM * TAM),
      i, *vetor;
    for(i = 0; i < TAM; i++){
        matrix[i] = columns + i * TAM;
        for(int j = 0; j < TAM; j++){
            matrix[i][j] = i+j;
        }
    }
    vetor = vectorBySumOfMatrixElement(matrix, TAM);
    free(columns);
    free(matrix);
    for(i = 0; i < TAM; i++){
        printf(" %i ", vetor[i]);
    }
}

uint *vectorBySumOfMatrixElement(uint **matrix, uint tam){
    uint *vetorResult = (uint *) malloc(sizeof(uint *) * tam);
    uint resul = 0;
    for(uint i = 0; i < tam; i++){
        resul = 0;
        for(uint j = 0; j < tam; j++)
            resul += matrix[i][j];
        vetorResult[i] = resul;
    }
    return vetorResult;
}