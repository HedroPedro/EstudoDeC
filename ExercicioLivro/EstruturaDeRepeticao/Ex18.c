#include <stdio.h>

int main(){
    int numero, contador;
    printf("Digite um numero maior que 1: ");
    scanf("%i", &numero);
    if(numero > 1){
        for(int i = 1; i <= numero; i++){
            if(numero % i == 0){
                contador++;
            }
        }
        if(contador < 3){
            printf("Primo");
        }else{
            printf("Não e primo");
        }
    }
}