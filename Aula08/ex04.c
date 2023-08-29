#include <stdio.h>

#define LIN 4
#define COL 5

int pegaMenorElemento(int matriz[][COL]){
    int menorElemento = matriz[0][0];
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++)
            if(matriz[i][j] < menorElemento)
                menorElemento = matriz[i][j];
    }
}

int main(){
    int matriz[LIN][COL], menorElemento, i, j;
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite um numero para a posicao [%i %i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("O menor numero foi %i", pegaMenorElemento);
}