#include <stdio.h>
#include <stdlib.h>

int main(void){
    int size, *vet, *vetResul = (int *) malloc(0), sizeVetResul = 0, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &size);
    vet = (int *) malloc(size * sizeof(int));
    for(i = 0; i < size; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", vet+i);
        if(vet[i] & 1 && vet[i] % 7 == 0){
            sizeVetResul++;
            vetResul = (int *) realloc(vetResul, sizeof(int) * sizeVetResul);
            vetResul[sizeVetResul-1] = vet[i];
        }
    }

    for(i = 0; i < sizeVetResul; i++){
        printf("%i ", vetResul[i]);
    }
    
}