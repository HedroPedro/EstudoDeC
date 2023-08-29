#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *vetor = NULL;
    vetor = (int*) malloc(sizeof(int) * 100);
    for(int i = 0; i < 100; i++)
        vetor[i] = i;
    for(int i = 0; i < 100; i++)
        printf("%i\n", vetor[i]);
    free(vetor);
    vetor = NULL;
}