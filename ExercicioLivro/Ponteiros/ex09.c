#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void imprimeVetor(int *vetor, int len);

int main(void){
    int vet[TAM];
    for(int i = 0; i < TAM; i++)
        *(vet+i) = i << 1;
    imprimeVetor(vet, TAM);

}

void imprimeVetor(int *vetor, int len){
    for(int i = 0; i < len; i++)
        printf("%i ", *(vetor+i));
}