#include <stdio.h>

#define LIN 3
#define COL 5

int main(void){
    int matriz[LIN][COL], somaVetor[COL], i , j, somaTemp;
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite um valor para matriz na posição [%i %i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    for(i = 0; i < COL; i++){
        somaTemp = 0;
        for(j = 0; j < LIN; j++)
            somaTemp += matriz[j][i];
        somaVetor[i] = somaTemp;
    }

    for(i = 0; i < COL; i++){
        printf(" %i ",somaVetor[i]);
    }

}