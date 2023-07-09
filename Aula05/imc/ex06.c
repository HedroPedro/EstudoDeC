#include <stdio.h>

void IMC(float peso, float altura);

int main(){
    float peso, altura;
    printf("Digite seu peso e altura: ");
    scanf("%f%f", &peso, &altura);
    IMC(peso, altura);
}

void IMC(float peso, float altura){
    float resultado = peso/(altura*altura);
    printf("%f\n", resultado);
    if(resultado < 18.5){
        printf("Abaixo do peso");
    }else if (resultado >= 30){
        printf("Obeso");
    }else if(25 <= resultado && 29.9 <= resultado){
        printf("Sobrepeso");
    }else{
        printf("Peso normal");
    }
    
}