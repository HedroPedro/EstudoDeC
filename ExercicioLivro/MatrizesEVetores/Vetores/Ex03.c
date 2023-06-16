#include <stdio.h>

int main(){
    int vetor[5], i;
    float media, soma = 0;
    for(i = 0; i < 5; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &vetor[i]);
        soma += vetor[i];
    }
    media = soma/5.0;
    printf("Os numeros sao: ");
        for(i = 0; i < 5; i++){
        printf("%i ", vetor[i]);
    }

    printf("\nA media e: %.2f", media);
}