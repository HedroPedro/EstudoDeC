#include <stdio.h>

int main(){
    int contador, numero, maiornum, quantidade;
    printf("Digite quantas vezes voce quer digitar numeros: ");
    scanf("%i", &contador);
    for(contador; contador > 0; contador--){
        printf("Digite um numero: ");
        scanf("%i", &numero);
        if(numero > maiornum){
            quantidade = 1;
            maiornum = numero;
        }else if(numero & maiornum){
            quantidade++;
        }
    }
    printf("O maior numero foi %i e foi digitado %i", maiornum, quantidade);
}