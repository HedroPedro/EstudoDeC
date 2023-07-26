#include <stdio.h>

int soma1ateN(int n);

int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
    printf("A soma dele e: %i", soma1ateN(num));
}

int soma1ateN(int n){
    for(int i = n-1; i > 0; i--){
        n += i;
    }
    return n;
}