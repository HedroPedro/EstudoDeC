#include <stdio.h>

int main(){
    float saldo, credito;
    printf("Digite o seu saldo: ");
    scanf("%f", &saldo);
    if(saldo <= 200){
        credito = saldo * 0.1;
    }else if(saldo > 400){
        credito = saldo * 0.3;
    }else if(300 < saldo && saldo >= 400){
        credito = saldo * 0.25;
    }else{
        credito = saldo * 0.2;
    }
    printf("O credito sera de: %.2f", credito);
}