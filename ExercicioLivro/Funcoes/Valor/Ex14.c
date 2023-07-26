#include <stdio.h>

int fatorial(int n);

int main(int argc, char *argv[]){
    int num;
    printf("Digite um numero: ");
    scanf("%i", &num);
    printf("O fatorial e: %i", fatorial(num));
    return 0;
}

int fatorial(int n){
    int fat = 1;
    for(int i = 0; i < n; i++){
        fat *= (n-i);
    }
    return fat;
}