#include <stdio.h>

int main(){
    int soma, numresp = 0;
    float media;
    for(int i; i < 10; i++){
        printf("Digite o %i numero: ",i+1);
        scanf("%i", &numresp);
        soma += numresp;
    }
    media = soma/10;
    printf("A media e: %f", media);
}