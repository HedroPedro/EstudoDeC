#include <stdio.h>

int somaDosElementosDif(int lin, int col, int matriz[][col]);

int main(void){
    int lin, col, soma, i, j;
    printf("Digite o tamanho da matriz: ");
    scanf("%i%i", &lin, &col);
    int matriz[lin][col];
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Digite um numero para a matriz na posicao [%i %i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    soma = somaDosElementosDif(lin, col, matriz);
    printf("A soma e %i", soma);   
}

int somaDosElementosDif(int lin, int col, int matriz[][col]){
    int soma = 0;
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(j != i && j+i != col-1)
                soma += matriz[i][j];
        }
        printf("\n");
    }
    return soma;
}