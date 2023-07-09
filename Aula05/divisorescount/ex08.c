#include <stdio.h>

int divCount(int num);

int main(){
    int numero, divContador;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    divContador = divCount(numero);
    printf("O numero %i e divisivel %i vezes", numero, divContador);
}

int divCount(int num){
    int count;
    for(int i = 1; i < num+1; i++){
        if(num % i == 0){
            count++;
            printf("O numero %i e um divisor\n", i);
        }
    }
    return count;
}