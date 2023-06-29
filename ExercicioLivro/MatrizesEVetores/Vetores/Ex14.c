#include <stdio.h>
#include <math.h>

int main(){
    int vetor[10], i;
    int soma = 0;
    float media, desvio;
    for(i = 0; i < 10; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &vetor[i]);
        soma += vetor[i];
    }
    media  = soma/10.0;
    desvio = sqrt(1/9*((float)(vetor[0]-media)));
    printf("A media e %.2f", desvio);
}