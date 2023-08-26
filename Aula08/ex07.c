#include <stdio.h>

void secundarioMult(int lin, int col, int matriz[][col], int const);

int main(void){
    int constante, lin, col, i , j;
    printf("Digite a constante para ser multiplicada: ");
    scanf("%i", &constante);
    printf("Digite um valor para a linha e coluna: ");
    scanf("%i %i", &lin, &col);
    int matriz[lin][col];
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Digite um numero para a posicao [%i %i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    secundarioMult(lin, col, matriz, constante);

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }
}

void secundarioMult(int lin, int col, int matriz[][col], int constan){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(i + j == col-1)
                matriz[i][j] *= constan;
        }
    }
}