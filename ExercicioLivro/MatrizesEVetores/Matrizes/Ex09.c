#include <stdio.h>

int main(){
    int matriz[3][3], i, j;
    int vetor[3] = {0, 0, 0};
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um numero: ");
            scanf("%i", &matriz[i][j]);
        }
    }

    for(j = 0; j  < 3; j++){
        for(i = 0; i < 3; i++){
            vetor[j] += matriz[i][j];
        }
    }
    for(i = 0; i < 3; i++){
        printf("%i ", vetor[i]);
    }
}