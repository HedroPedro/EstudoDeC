#include <stdio.h>

int main(){
    int numero;
    float resultado;
    printf("Digite um numero inteiro e positivo para se calcular a medida harmonica: ");
    scanf("%i", &numero);
    for(numero; numero > 0; numero--){
        resultado += 1/(float)numero;
    }

    printf("O resultado e %.2f", resultado);
}