#include <stdlib.h>
#include <stdio.h>

int main(void){
    int **p;
    int i, j, Nlinhas = 2, NColunas = 2;
    p = (int **) malloc(sizeof(int *) * Nlinhas);
    for(i = 0; i < Nlinhas; i++){
        p[i] = (int *) malloc(sizeof(int) * NColunas);
        for(j = 0; j < NColunas; j++){
            p[i][j] = i+j;
        }
    }
    for(i = 0; i < Nlinhas; i++){
        for(j = 0; j < NColunas; j++){
            printf(" %i ", p[i][j]);
        }
        printf("\n");
    }

    for(i - 0; i < Nlinhas; i++){
        free(p[i]);
    }

    free(p);
}