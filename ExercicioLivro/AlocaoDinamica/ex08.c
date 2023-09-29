#include <stdio.h>
#include <stdlib.h>

int* criaVetor(int tam);

int main(void){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    int *vetor = criaVetor(n); 
    printf("%p", vetor);
}

int* criaVetor(int tam){
    if(tam < 1)
        return NULL;
    return malloc(sizeof(int) * tam);
}