#include <stdio.h>

void contarvetor(int *vetori, int len);

int main(){
    int n;
    printf("Digite quantas pessoas serao lidas: ");
    scanf("%i", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &vetor[i]);
    }
    contarvetor(vetor, n);
}

void contarvetor(int *vetori, int len){
    int maior30 = 0, menor18 = 0;
    for(int i = 0; i < len; i++){
        if(vetori[i] == 0)
            break;
        if(vetori[i] < 18)
            menor18++;
        if(vetori[i] > 30)
            maior30++;
    }
    printf("Menores que 18 anos: %i\n", menor18);
    printf("Maiores que 30 anos: %i", maior30);
}