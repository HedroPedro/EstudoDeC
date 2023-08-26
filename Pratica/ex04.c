#include <stdio.h>

int main(){
    int matriz[4][4], i, j;

    for(i = 0; i < 4; i++)
        for(j = 0; j <4; j++){
            printf("Digite um numero para posicao [%i %i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    
    for(i = 0; i < 4; i++){
        for(j = 0; j <4; j++){
            if(!((i+j) & 1))
                printf(" %i ", matriz[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
}