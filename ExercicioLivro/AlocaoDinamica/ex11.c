#include <stdio.h>
#include <stdlib.h>
#include <sal.h>

int main(void){
    int **matriz = NULL;
    int tam, i, j;
    printf("Digite o tamanho da matriz: ");
    scanf("%i", &tam);
    matriz = (int **) malloc(sizeof(int *) * tam);
    for(i = 0; i < tam; i++){
        matriz[i] = (int *) malloc(sizeof(int) * tam);
        for(j = 0; j < tam; j++){
            if(i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
            printf(" %i", matriz[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < tam; i++)
        free(matriz[i]);
    free(matriz);
    
}