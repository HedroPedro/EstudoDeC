#include <stdio.h>

int main(){
    int vetor[20], quadradoVetor[20], i;
    for(i = 0; i < 20; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &vetor[i]);
        quadradoVetor[i] = vetor[i] * vetor[i];
    }
    for(i; i > -1; i--){
        printf("%i^2 = %i\n", vetor[i], quadradoVetor[i]);
    }
}