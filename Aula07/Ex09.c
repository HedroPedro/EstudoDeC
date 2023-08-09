#include <stdio.h>

void organizavetor(int *vetor, int len);

int main(void){
    int n;
    scanf("%i", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Digite o %i.: ", i+1);
        scanf("%i", &vetor[i]);
    }
    organizavetor(vetor, n);
    for(int i = 0; i < n; i++)
        printf("%i ", vetor[i]);
}

void organizavetor(int *vetor, int len){
    int temp;
    for(int i = 0; i < len; i++)
        for(int k = 0; k < len; k++){
            if(vetor[k] > vetor[i]){
                temp = vetor[i];
                vetor[i] = vetor[k];
                vetor[k] = temp;
            }
        }
}