#include <stdio.h>

int main(){
    int matriz[4][4], i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um numero: ");
            scanf("%i", &matriz[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        printf("%i: ", i+1);
        for(j = 0; j < 4; j++){
            if(matriz[i][j] > 10){
                printf("%i ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}