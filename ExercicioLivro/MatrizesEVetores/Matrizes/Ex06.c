#include <stdio.h>

int main(){
    int matriz[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um numero para a %i coluna: ", i+1);
            scanf("%i", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                printf(" %i ", matriz[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}