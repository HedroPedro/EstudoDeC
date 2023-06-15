#include <stdio.h>

int main(){
    int soma = 0;
    for(int i = 1; i < 51; i++){
        soma += i*2;
    }
    printf("A soma %i", soma);
}