#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int *vetor, int tam);

int main(void){
    int tam = 0, *vetor = NULL;
    while(tam < 1){
        printf("Digite o tamanho do vetor: ");
        scanf("%i", &tam);
    }
    preencheVetor(vetor = (int *) malloc(sizeof(int) * tam), tam);
    for(int i = 0; i < tam; i++){
        printf(" %i", vetor[i]);
    }
}

void preencheVetor(int *vetor, int tam){
    for(int i = 0; i < tam; i++)
        vetor[i] = i+2;


}