#include <stdio.h>

int main(){
    float soma = 0;
    int denom = 1;
    int numerador = 1;
    while(denom != 55 && numerador != 99){
        soma+= numerador/(float)denom;
        denom++;
        numerador+=2;
        printf("%i %i ", denom, numerador);
    }
    printf("A soma total e: %.2f", soma);
}