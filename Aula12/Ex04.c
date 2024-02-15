#include <stdio.h>

int multiplicarBySoma(int number, int mult);

int main(){
    int n, mult, soma;
    printf("Digite o numero e o multiplicador: ");
    scanf("%i %i", &n, &mult);
    soma = multiplicarBySoma(n, mult);
    printf("A multiplicacao e: %i", soma);
}

int multiplicarBySoma(int number, int mult){
    if(mult == 1)
        return number;
    return number + multiplicarBySoma(number, mult-1);
}