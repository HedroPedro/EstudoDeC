#include <stdio.h>

void howMaxNumAppear(int *vetor, int len);

int main(){
    int n;
    printf("Digite o tamanho: ");
    scanf("%i", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &vetor[i]);
    }
    howMaxNumAppear(vetor, n);
}

void howMaxNumAppear(int *vetor, int len){
    int count = 1, maxNum = vetor[0];
    for(int i = 0; i < len; i++){
        if(maxNum == vetor[i])
            count++;
        else if(maxNum < vetor[i]){
            maxNum = vetor[i];
            count = 1;
        }
    }

    printf("A quantidade de vezes que o maior numero aparece (%i): %i", maxNum, count);
}