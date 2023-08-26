#include <stdio.h>

int somaAcimaDiagonalPrincipal(int ordem, int matriz[][ordem]);

int main(void){
    int i, j, ordem;
    printf("Digite a quantidade ");
    scanf("%i", &ordem);
    int matriz[ordem][ordem];
    for(i = 0; i < ordem; ++i){
        for(j = 0; j < ordem; j++){
            printf("Digite um numero para a posicao [%i %i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    printf("A soma e: %i", somaAcimaDiagonalPrincipal(ordem, matriz));
}

int somaAcimaDiagonalPrincipal(int ordem, int matriz[][ordem]){
    int soma = 0;
    for(int i = 0; i < ordem; ++i){
        for(int j = 0; j < ordem; j++){
            if(j > i)
                soma += matriz[i][j];
        }
    }
    return soma;
}