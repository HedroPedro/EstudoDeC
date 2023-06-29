#include <stdio.h>

int main(){
    float soma = 0;
    int num, i;
    printf("Digite um numero positivo e maior que 0: ");
    scanf("%i", &num);
    for(i = 1; i < num+1; i++){
        soma += 1/i;
    }
    printf("A soma e %.2f", soma);
}