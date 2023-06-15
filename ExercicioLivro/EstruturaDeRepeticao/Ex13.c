#include <stdio.h>

int main(){
    int soma = 0;
    for(int i; i < 1000; i++){
        if((i%3) == 0 || (i%5) == 0){
            soma += i;
        }
    }
    printf("A soma e de %i", soma);
}