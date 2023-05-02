#include <stdio.h>

int main(){
    int valor1, valor2, valor3, valor4;
    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%i", &valor3);
    printf("Digite o quarto valor: ");
    scanf("%i", &valor4);
    int resultado = (valor1*valor2) - (valor3*valor4);
    printf("O resultado e %i", resultado);
    
}