#include <stdio.h>

#define NUMERO 3121

int main(){
    int n;
    while(n != NUMERO){
        printf("Digite um numero de 4 digitos: ");
        scanf("%i", &n);
        if(n > NUMERO)
            printf("Numero maior que o da loteria\n");
        if(n < NUMERO)
            printf("Numero menor que o da loteria\n");
    }
    printf("PARABENS VOCE GANHOU NA LOTERIA!!! :)");
}