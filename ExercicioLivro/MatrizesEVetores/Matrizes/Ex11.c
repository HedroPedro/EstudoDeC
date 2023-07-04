#include <stdio.h>

int main(){
    int matriz[4][4], i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o %i. numero da coluna %i.: ", j+1, i+1);
            scanf("%i", &matriz[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(j > i && j != i){
                printf(" %i ", matriz[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}