#include <stdio.h>
#include <stdlib.h>

int somaVetDecre(int *vet, int size);

int main(){
    int size, *vet, resul;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &size);
    vet = (int *) malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", vet+i);
    }
    resul = somaVetDecre(vet, size);
    printf("%i", resul);
    free(vet);
    vet = NULL;
}

int somaVetDecre(int *vet, int size){
    if(size == 1)
        return vet[size-1];
    return vet[size-1] + somaVetDecre(vet, size-1);
}
