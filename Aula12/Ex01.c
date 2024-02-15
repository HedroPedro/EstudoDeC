#include <stdio.h>

void mostraNumeroPar(int n);

int main(){
    int n;
    printf("Digite um numero par: ");
    scanf("%i", &n);
    mostraNumeroPar(n);
}

void mostraNumeroPar(int n){
    if(n == 0){
        printf("%i\n", n);
        return;
    }
    printf("%i\n", n);
    return mostraNumeroPar(n-2);
}