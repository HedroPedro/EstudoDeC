#include <stdio.h>

int somaMatriz(int matrizA[][6], int len);

int main(void){
    int matrizA[6][6], soma;
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
            matrizA[i][j] = i+j;
    soma = somaMatriz(matrizA, 6);
    printf("%i", soma);
}

int somaMatriz(int matrizA[][6], int len){
    int k = 0, soma = 0;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(i == j || (i-k + j+k == 5))
                soma += matrizA[i][j];
        }
        k++;
    }
    return soma;
}