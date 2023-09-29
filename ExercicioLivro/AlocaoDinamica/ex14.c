#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

int *vector_sum_of_two_vectors(int *vectorA, int *vectorB, int tam);

int main(void){
    uint tam, i;
    int *vetorA = NULL, *vetorB = NULL, *vetorC = NULL;
    printf("Digite o tamanho do seu vetor: ");
    scanf("%i", &tam);
    vetorA = (int*) malloc(sizeof(int) * tam), vetorB = (int *) malloc(sizeof(int) * tam);
    for(i = 0; i < tam; i++)
        vetorA[i] = i, vetorB[i] = i<<2;
    vetorC = vector_sum_of_two_vectors(vetorA, vetorB, tam);
    for(i = 0; i < tam; i++)
        printf(" %i ", vetorC[i]);
    free(vetorA);
    free(vetorB);
    free(vetorC);
}

int *vector_sum_of_two_vectors(int *vectorA, int *vectorB, int tam){
    int *vectorC = malloc(sizeof(int) * tam);
    for(int i = 0; i < tam; i++){
        vectorC[i] = vectorA[i] + vectorB[i];
    }
    return vectorC;
}