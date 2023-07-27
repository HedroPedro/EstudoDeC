#include <stdio.h>

int main(){
    int n, prod = 1;
    while(1){
        printf("Digite um numero: ");
        scanf("%i", &n);
        if(n == 0){
            break;
        }
        prod *= n;
    }
    printf("O produto e: %i", prod);   
}