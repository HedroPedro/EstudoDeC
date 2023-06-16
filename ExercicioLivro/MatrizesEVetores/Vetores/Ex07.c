#include <stdio.h>

int main(){
    int x[10];
    int maior, menor, i;
    printf("Digite o 1. numero: ");
    scanf("%i", &x[0]);
    maior, menor = x[0];
    for(i = 1; i < 10; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &x[i]);
        if(maior < x[i]){
            maior = x[i];
        }else if(menor > x[i]){
            menor = x[i];
        }
    }
    printf("O menor foi %i e o maior %i", menor, maior);
}