#include <stdio.h>
#include <stdlib.h>

long *escreveVetor(int size);

int main(void){
    int tam;
    long *vetor = NULL;
    printf("Digite o tamanho: ");
    scanf("%i", &tam);
    vetor = escreveVetor(tam);
    printf("%p", vetor);
    free(vetor);
    vetor = NULL;
}

long *escreveVetor(int size){
    if(size < 1)
        return NULL;
    return (long *) malloc(sizeof(long) * size);
}