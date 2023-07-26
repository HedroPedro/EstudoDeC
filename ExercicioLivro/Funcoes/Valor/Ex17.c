#include <stdio.h>
#include <math.h>


float soma(int n);

int main(){
    int n;
    float s;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%i", &n);
    s = soma(n);
    printf("%.2f", s);
}

float soma(int n){
    float soma = 0;
    int i = 1;
    while(((i*i)+1)/(i+3) < ((n*n)+1)/((n+3))){
        soma += (float) ((i*i)+1)/(i+3);
        i++;
    }
    soma += (float) ((i*i)+1)/(i+3);
    return soma;
}