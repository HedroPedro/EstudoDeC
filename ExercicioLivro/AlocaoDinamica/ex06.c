#include <stdlib.h>
#include <stdio.h>

int main(void){
    int l, c, i, j;
    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%i %i", &l, &c);
    int **linha = (int **) malloc(sizeof(int *) * l);
    int *coluna = (int *) malloc(sizeof(int) * l * c);
    for(i = 0; i < l; i++){
        linha[i] = coluna+l*i;
        for(j = 0; j < c; j++){
            printf("Digite um valor: ");
            scanf("%i", &linha[i][j]);
        }
    }

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf(" %i ", linha[i][j]);
        }
        printf("\n");
    }
    free(coluna);
    free(linha);
}