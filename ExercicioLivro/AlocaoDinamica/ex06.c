<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[5] = {2, 1, 4, 3, 6};
    for(int i = 0; i < 5; i++){
        if(((intptr_t) array+i) & 1)
            printf("%i ", array[i]);
    }
>>>>>>> 64cdf471050bf3d8846c12a5e4de7aaee6f5c968
}