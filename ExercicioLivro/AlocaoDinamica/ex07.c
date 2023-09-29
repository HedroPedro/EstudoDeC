#include <stdlib.h>
#include <stdio.h>

void preencheVetor(int *vetor, int tam);

int main(void){
    int tam, *vetor = NULL;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tam);
    vetor = (int *) malloc(sizeof(int) * tam);
    preencheVetor(vetor, tam);
    for(int i = 0; i < tam; i++)
        printf("%i ", vetor[i]);
}

void preencheVetor(int *vetor, int tam){
    for(int i = 0; i < tam; i++)
        vetor[i] = i;
}
