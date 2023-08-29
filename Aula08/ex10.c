#include <stdio.h>

#define LIN 3
#define COL 7

int contaValoresMaior10Menor50(int matriz[][COL], int matrizResul[][COL]){
    int count = 0;
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if(matriz[i][j] > 10 && matriz[i][j] < 50){
                count++;
                matrizResul[i][j] = 0;
            }else{
                matrizResul[i][j] = matriz[i][j];
            }
        }
    }
    return count;
}

int main(void){
    int matriz[LIN][COL], matrizResult[LIN][COL], i, j, quantidade;
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite um numero para a matriz na posicao [%i %i]:", i, j );
            scanf("%i", &matriz[i][j]);
        }
    }

    quantidade = contaValoresMaior10Menor50(matriz, matrizResult);
    printf("A quantidade de numeros entre 10 e 50 e: %i", quantidade);
    printf("\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf(" %i ", matrizResult[i][j]);
        }
        printf("\n");
    }    
}

