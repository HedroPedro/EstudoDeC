#include <stdio.h>

int main(){
    int x[10], i;
    int negativosCount = 0;
    int soma = 0;
    for(i = 0; i < 10; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &x[i]);
        if(x[i] < 0){
            negativosCount += 1;
        }else if(x[i] > 0){
            soma = soma + x[i];
        }
    }
    printf("Voce digitou %i numeros negativo, a soma dos positivos e %i ", negativosCount, soma);
}