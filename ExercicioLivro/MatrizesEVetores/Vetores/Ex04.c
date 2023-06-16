#include <stdio.h>

int main(){
    int a[6] = {1, 0, 5, -2, -5, 7};
    int soma = a[0] + a[1] + a[5];
    printf("A soma de %i+%i+%i=%i", a[0], a[1], a[5], soma);
    a[4] = 100;
    printf("\nOs numeros da na lista a sao: ");
    for(int i = 0; i < 6; i++){
        printf("%i ", a[i]);
    }
}