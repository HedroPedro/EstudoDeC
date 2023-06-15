#include <stdio.h>

int main(){
    int soma, numresp;
    for(int i = 1; i < 11; i++){
        printf("Digite o %i numero: ", i);
        scanf("%i", &numresp);
        soma += numresp;
    }
    printf("A soma dos 10 primeiros numero e: %i", soma);
}