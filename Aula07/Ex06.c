#include <stdio.h>

void mostrarmulti7(int vetor[], int len);

int main(void){
    int n;
    printf("Quantos numeros serao inseridos: ");
    scanf("%i", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &vetor[i]);
    }
    mostrarmulti7(vetor, n);
}

void mostrarmulti7(int vetor[], int len){
    
}