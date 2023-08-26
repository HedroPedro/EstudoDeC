#include <stdio.h>

#define LIN 5
#define COL 3

int main(void){
    int matriz[LIN][COL], vetorMulti[LIN*COL], count = 0, i ,j;
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite um numero para [%i %i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            if(matriz[i][j] % 3 == 0){
                vetorMulti[count] = matriz[i][j];
                count++;
            }
        }
    }
    for(i = 0; i < count; i++)
        printf("%i ", vetorMulti[i]);
}