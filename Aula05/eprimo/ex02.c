#include <stdio.h>

int ePrimo(int num);

int main(){
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    if(ePrimo(numero)){
        printf("O numero %i e primo", numero);
    }else{
        printf("O numero %i nao e primo", numero);
    }
}

int ePrimo(int num){
    int divscount = 0;
    for(int i = 1; i < num+1; i++){
        if(num % i == 0){
            divscount++;
        }
    }
    if(divscount == 2){
        return 1;
    }
    return 0;

}