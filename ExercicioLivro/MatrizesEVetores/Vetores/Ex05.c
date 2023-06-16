#include <stdio.h>

int main(){
    int vetor[8], x, y, soma;

    for(int i = 0; i < 8; i++){
        printf("Digite o %i. valor: ", i+1);
        scanf("%i", &vetor[i]);
    }

    printf("Digite um numero na posicao de 0 a 7: ");
    scanf("%i", &x);
    printf("Digite outro numero na posicao de 0 a 7: ");
    scanf("%i", &y);
    soma = vetor[x] + vetor[y];
    printf("A soma e %i", soma);
}