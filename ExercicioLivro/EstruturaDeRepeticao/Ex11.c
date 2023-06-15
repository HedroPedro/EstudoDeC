#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &numero);
    printf("Seus divisores sao: ");
    for(int i = 1; i < numero; i++){
        if((numero % i) == 0){
            printf("%i ", i);
        }
    }
}