#include <stdio.h>

int main(void){
    int lin, col, i, j;
    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%i %i", &lin, &col);
    int matriz[lin][col], matrizTrans[col][lin];
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Digite um numero para a matriz na posicao [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
            matrizTrans[j][i] = matriz[i][j];
        }
    }

    for(i = 0; i < col; i++){
        for(j = 0; j < lin; j++){
            printf(" %i ",matrizTrans[j][i]);
        }
        printf("\n");
    }
}