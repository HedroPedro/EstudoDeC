#include <stdio.h>

int main(){
    int matriz[4][4], i, j, maiorNum;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um numero: ");
            scanf("%i", &matriz[i][j]);
        }
    }
    maiorNum = matriz[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(maiorNum < matriz[i][j]){
                maiorNum = matriz[i][j];
            }
        }
    }
    printf("O maior numero foi %i", maiorNum);
}