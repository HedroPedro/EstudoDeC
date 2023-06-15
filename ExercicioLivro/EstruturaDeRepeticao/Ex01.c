#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero positivo e inteiro: ");
    scanf("%i", &n);

    for(int i = 0; i < (n+1); i++){
        printf("%d ", i);
    }
}