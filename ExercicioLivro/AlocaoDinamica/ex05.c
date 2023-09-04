#include <stdio.h>
#include <stdlib.h>


int main(void){
    int n, num, *vetor = NULL;
    printf("Digite um numero inteiro para o vetor: ");
    scanf("%i", &n);
    while(n < 1){
        printf("Erro! Digite novamente: ");
        scanf("%i", &n);
    }
    vetor = (int *) calloc(n, sizeof(int));

    for(int i = 0;i < n; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &num);
        while(num < 2){
            printf("ERRO! Digite um numero maior ou igual a 2: ");
            scanf("%i", &num);
        }
        vetor[i] = num;
    }
    printf("\n");
    for(int i = 0;i < n; i++)
        printf(" %i", vetor[i]);

    free(vetor);
    vetor = NULL;
}