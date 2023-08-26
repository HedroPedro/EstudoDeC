#include <stdio.h>

#define LIN 4
#define COL 4

int main(){
    int i, j;
    float notas[LIN][COL];

    //Entrada de valores
    for(i = 0; i < LIN; i++)
        for(j = 0; j < COL; j++){
            printf("Entre com a nota [%d %d]: ", i, j);
            scanf("%f", &notas[i][j]);
    }

    //Mostra os valores
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf(" %.2f ", notas[i][j]);
        }
        printf("\n");
    }
}