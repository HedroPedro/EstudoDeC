#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero positivo e inteiro: ");
    scanf("%i", &n);

    for(n; n > -1; n--){
        printf("%i ", n);
    }
}