#include <stdio.h>

int area(int lado1, int lado2){
    return lado1*lado2;
}

int main(){
    int n, lado1, lado2;
    printf("Digite quantas vezes voce quer calcular a area: ");
    scanf("%i", &n);
    for(int i = 0; i < n; i++){
        printf("Digite os dois lados: ");
        scanf("%i%i", &lado1, &lado2);
        printf("A %i. area e %i\n", i+1, area(lado1, lado2));
    }
}