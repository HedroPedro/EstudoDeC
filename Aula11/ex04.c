#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, i, j, **matA, *vetA, **matB, *vetB, **matResul, *vetResul;
    printf("Digite o tamanho da coluna e linha: ");
    scanf("%i %i", &m, &n);
    matA = (int **) malloc(m * sizeof(int *));
    vetA = (int *) malloc(m * n * sizeof(int));
    matB = (int **) malloc(m * sizeof(int *));
    vetB = (int *) malloc(m * n * sizeof(int));
    matResul = (int **) malloc(m * sizeof(int *));
    vetResul = (int *) malloc(m * sizeof(int));
    
    for(i = 0; i < m; i++){
        matA[i] = vetA+(i*n);
        matB[i] = vetB+(i*n);
        matResul[i] = vetResul+(i*n);
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Digite o [%i %i]: ", i, j);
            scanf("%i", &matA[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Digite o [%i %i]: ", i, j);
            scanf("%i", &matB[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            matResul[i][j] = matA[i][j] + matB[i][j];
            printf("%i ", matResul[i][j]);
        }
        printf("\n");
    }
    free(vetA);
    free(matA);
    free(vetB);
    free(matB);
    free(vetResul);
    free(matResul);
}