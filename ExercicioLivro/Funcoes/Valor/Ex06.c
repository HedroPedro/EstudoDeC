#include <stdio.h>

float calcIMC(float peso, float altura);

int main(){
    float peso, altura;
    printf("Digite o peso e altura: ");
    scanf("%f %f", &peso, &altura);
    printf("O IMC e de %f", calcIMC(peso, altura));
}

float calcIMC(float peso, float altura){
    return peso/(altura*altura);
}