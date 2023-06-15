#include <stdio.h>

int main(){
    int numero, soma = 0;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%i", &numero);
    for(int i = 1; i < numero; i++){
        soma = numero%i==0 ? soma + i : soma + 0;
    }
    printf("A soma e: %i", soma);
}