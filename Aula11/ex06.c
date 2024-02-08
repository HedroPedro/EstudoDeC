#include <stdio.h>
#include <stdlib.h>

int **makeArray(int line, int col);

int main(void){
    int linha, coluna, **array;
    printf("Digite a linha e a coluna: ");
    scanf("%i %i", &linha, &coluna);
    array = makeArray(linha, coluna);
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%i ", array[i][j]);
        }
        printf("\n");
        free(array[i]);
    }
    free(array);
}

int **makeArray(int line, int col){
    int **array = (int **) malloc(line * sizeof(int *)), j;
    for(int i = 0; i < line; i++){
        array[i] = (int *) malloc(col * sizeof(i));
        for(j = 0; j < col; j++){
            array[i][j] = 0;
            if(i + j == col-1){
                array[i][j] = 1;
            }
        }
    }
    return array;
}