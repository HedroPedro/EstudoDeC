#include <stdio.h>

int main(){
    int vetor[10], contadorPar, i;
    for(i = 0; i < 10; i++){
        printf("Digite %i. numero: ", i+1);
        scanf("%i", &vetor[i]);
        if(!(vetor[i] & 1)){
            contadorPar++;
        }
    }
    printf("Voce digitou %i numeros pares", contadorPar);
}