#include <stdio.h>

int main(){
    int matriz[3][3], i, j, menorNum;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o numero %i da linha %i: ", j+1, i+1);
            scanf("%i", &matriz[i][j]);
        }
    }
    menorNum = matriz[0][0];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(menorNum > matriz[i][j]){
                menorNum = matriz[i][j];
            }
        }
    }
    printf("O menor numero foi %i", menorNum);
}