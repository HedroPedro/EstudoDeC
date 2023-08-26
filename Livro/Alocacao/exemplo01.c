#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p;
    int i, j, Nlinhas = 2, Ncolunas = 2;
    p = (int *) malloc(Nlinhas * Ncolunas * sizeof(int));
    for(i = 0; i < Nlinhas; i++){
        for(j = 0; j < Ncolunas; j++){
            p[i * Ncolunas + j] = i+j;
        }
    }
    for(i = 0; i < Nlinhas; i++){
        for(j = 0; j < Ncolunas; j++){
            printf(" %i ", p[i * Ncolunas + j] = i+j);
        }
        printf("\n");
    }
    
}