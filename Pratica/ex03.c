#include <stdio.h>

#define LINHA 3
#define COL 2

int main(void){
    int matriz1[LINHA][COL], matriz2[LINHA][COL], matriz3[LINHA][COL], i, j;

    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COL; j++){
            printf("Insira o [%i %i] da primeira matriz: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }

    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COL; j++){
            printf("Insira o [%i %i] da segunda matriz: ", i, j);
            scanf("%i", &matriz2[i][j]);
        }
    }

    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COL; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            printf(" %i ", matriz3[i][j]);
        }
        printf("\n");
    }
}