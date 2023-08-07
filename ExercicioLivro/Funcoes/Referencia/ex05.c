#include <stdio.h>

float calcDesvioPadrao(int *vetor, int len);

int main(int argc, char *argv[]){
    int vetor[4], i;
    float desvio;
    for(i = 0; i < 4; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    desvio = calcDesvioPadrao(vetor, 4);
    printf("O desvio e: %.2f", desvio);
}

float calcDesvioPadrao(int *vetor, int len){
    float soma = 0;
    for(int i = 0; i < len; i++){
        soma += vetor[i]-len;
    }
    soma *=  (float) 1/len-1;
    return soma;
}