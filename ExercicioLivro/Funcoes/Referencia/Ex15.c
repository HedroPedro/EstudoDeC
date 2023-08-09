#include <stdio.h>

void maiormenor(int *vetor, int len, int *maior, int *menor);

int main(void){
    int vetor[5], ma, mn;
    for(int i = 0; i < 5; i++){
        scanf("%i", &vetor[i]);
    }
    maiormenor(vetor, 5, &ma, &mn);
    printf("O maior numero foi %i e o menor foi %i", ma, mn);
}

void maiormenor(int *vetor, int len, int *maior, int *menor){
    *maior = vetor[0], *menor = vetor[0];
    for(int i = 1; i < len; i++){
        if(vetor[i] > *maior){
            *maior = vetor[i];
        }else if(vetor[i] < *menor){
            *menor = vetor[i];
        }
    }
}
