#include <stdio.h>

void maiorNum(int n1, int n2);

int main(){
    int n1, n2;
    printf("Digite dois numeros inteiros: ");
    scanf("%i %i", &n1, &n2);
    maiorNum(n1, n2);
}

void maiorNum(int n1, int n2){
    if(n1 > n2){
        printf("O maior numero e: %i", n1);
    }else{
        printf("O maior numero e: %i", n2);
    }
}