#include <stdio.h>

int main(){
    int numero, multiplication = 1;
    float resultado = 0;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    for(int i = 1; i <= numero; i++){
        multiplication = i * multiplication;
        resultado += 1/(float)multiplication;
    }
    printf("O resultado e: %.2f", resultado);
}