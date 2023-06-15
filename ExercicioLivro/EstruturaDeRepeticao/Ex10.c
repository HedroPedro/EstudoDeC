#include <stdio.h>

int main(){
    int n, soma, contador;
    float media = 0.;
    for(int i = 0; i < 10; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &n);
        if(n < 1){
            continue;
        }
        soma += n;
        contador++;
    }

    media = soma/contador;
    printf("A media dos numeros positivos e de: %.2f", media);

}