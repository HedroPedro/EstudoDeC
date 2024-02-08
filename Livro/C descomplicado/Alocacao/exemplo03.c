#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *v;
    int **p;
    int i, j, Nlinhas = 3, Ncolunas = 3;
    p = (int **) malloc(sizeof(int *) * Nlinhas);
    v = (int *) malloc(sizeof(int) * Ncolunas * Nlinhas);
    for(i = 0; i < Nlinhas; i++){
        p[i] = v + i*Ncolunas;
        for(j = 0; j < Ncolunas; j++){
            p[i][j] = j+i;
        }
    }

    for(i = 0; i < Nlinhas; i++){
        for(j = 0; j < Ncolunas; j++){
            printf(" %i ", p[i][j]);
        }
        printf("\n");
    }
}