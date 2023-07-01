#include <stdio.h>

int main(){
    int matriz[4][4], i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um numero para a %i. linha: ", i+1);
            scanf("%i", &matriz[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if((i == 0 && j == 3) || (i == 1 && j == 2) 
            || (i == 2 && j == 1) || (i == 3 && j == 0)){
                printf(" %i ", matriz[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}