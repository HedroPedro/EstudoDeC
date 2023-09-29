#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

typedef struct matrix_int{
    uint lineSize, colSize;
    int **matrix; 
} matrix;

matrix *makeMatrixByMultiplication(matrix *matrixA, matrix *matrixB);

matrix *makeMatrixAndPopulate(uint lineSize, uint colSize);

matrix *makeMatrix(uint lineSize, uint colSize);

int main(void){
    matrix matrixA = *(makeMatrixAndPopulate(2, 4)), matrixB = *(makeMatrixAndPopulate(3, 2));
    matrix *matrixC = makeMatrixByMultiplication(&matrixA, &matrixB);
    
    if(NULL == matrixC){
        fprintf(stderr, "Matrix nula");
        return -1;
    }

    for(uint i = 0; i < matrixC->lineSize; i++){
        for(uint j = 0; j < matrixC->colSize; j++){
            printf(" %i ", matrixC->matrix[i][j]);
        }
        printf("\n");
    }
}

matrix *makeMatrixByMultiplication(matrix *matrixA, matrix *matrixB){
    int result;
    uint j, h, k;
    if(matrixA->colSize != matrixB->lineSize)
        return NULL;
    matrix *matrixResult = makeMatrix(matrixA->lineSize, matrixB->colSize);
    for(uint i = 0; i < matrixA->lineSize; i++){
        for(j = 0; j < matrixB->colSize; j++){
            result = 0;
            for(h = 0; h < matrixA->colSize; h++){
                for(k = 0; k < matrixB->lineSize; k++){
                    result += matrixA->matrix[i][h] * matrixB->matrix[k][j];
                }
            }
            matrixResult->matrix[i][j] = result;
        }
    }
    return matrixResult;
}

matrix *makeMatrixAndPopulate(uint lineSize, uint colSize){
    matrix *matrixTemp = (matrix *) malloc(sizeof(matrix));
    matrixTemp->lineSize = lineSize;
    matrixTemp->colSize = colSize;
    matrixTemp->matrix = (int **) malloc(sizeof(int *) * lineSize);
    for(uint i = 0; i < lineSize; i++){
        matrixTemp->matrix[i] = (int *) malloc(sizeof(int) * colSize);
        for(uint j = 0; j < colSize; j++){
            matrixTemp->matrix[i][j] = j - i;
        }
    }
    return matrixTemp;
}

matrix *makeMatrix(uint lineSize, uint colSize){
    matrix *matrixTemp = (matrix *) malloc(sizeof(matrix));
    matrixTemp->lineSize = lineSize;
    matrixTemp->colSize = colSize;
    matrixTemp->matrix = (int **) malloc(sizeof(int *) * lineSize);
    for(uint i = 0; i < lineSize; i++)
        matrixTemp->matrix[i] = (int *) malloc(sizeof(int) * colSize);
    return matrixTemp;
}