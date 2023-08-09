#include <stdio.h>

int maiorval(int vetor[], int len);

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    int vetor[n];
    for(int i = 0; i < n; i++)
        scanf("%i", &vetor[i]);
    printf("O maior valor foi: %i", maiorval(vetor, n));
    return 0;
}

int maiorval(int vetor[], int len){
    int val = vetor[0];
    for(int i = 1; i < len; i++){
        if(val < vetor[i])
            val = vetor[i];
    }
    return val;
}