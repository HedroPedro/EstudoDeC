#include <stdio.h>

int main(){
    int i, numero;
    int count = 0;
    printf("Digite um numero positivo maior que 1: ");
    scanf("%i", &numero);
    for(i = 1; i < numero+1; i++){
        if(numero % i == 0){
            count++;
        }
    }
    if(count < 3){
        printf("Esse numero e primo");
    }else{
        printf("Esse numero nao e primo");
    }
}