#include <stdio.h>

int main(){
    int matriz[5][5], matrizQuad[5][5], i,j;
    for(i = 0; i < 5; i++){
        for(j =0; j < 5; j++){
            printf("Digite o %i. numero da coluna %i.: ", j+1, i+1);
            scanf("%i", &matriz[i][j]); 
        }
    }
    printf("GERANDO MATRIZ QUADRADA...\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matrizQuad[i][j] =  matriz[i][j] * matriz[i][j];
            printf(" %i ", matrizQuad[i][j]);
        }
        printf("\n");
    }
}