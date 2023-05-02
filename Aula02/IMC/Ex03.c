#include <stdio.h>

int main(){
    float peso, altura, IMC;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    IMC = peso/(altura*altura);
    printf("Seu IMC e de: %.2f", IMC);
}