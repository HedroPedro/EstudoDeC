#include <stdio.h>
#define LIN 5
#define COL 3

int main(void){
    int matriz[LIN][COL], vetorSoma[LIN], i, j, somaTemp;
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite um valor para matriz na posição [%i %i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for(i = 0; i < LIN; i++){
        somaTemp = 0;
        for(j = 0; j < COL; j++)
            somaTemp += matriz[i][j];
        vetorSoma[i] = somaTemp;
        printf(" %i ", vetorSoma[i]);
    }
}