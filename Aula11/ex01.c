#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, i, *vet1, *vet2, *vetSoma;
    printf("Digite o tamanho de n: ");
    scanf("%i", &n);
    vet1 = (int *) malloc(sizeof(int) * n);
    vet2 = (int *) malloc(sizeof(int) * n);
    vetSoma = (int *) malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
        printf("digite um valor para o primeiro vetor: ");
        scanf("%i", vet1+i);
    }

    for(i = 0; i < n; i++){
        printf("digite um valor para o segundo vetor: ");
        scanf("%i", vet2+i);
    }

    for(i = 0; i < n; i++){
        vetSoma[i] = vet1[i] + vet2[i];
        printf("%i ", vetSoma[i]);
    }
}