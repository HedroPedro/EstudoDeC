#include <stdio.h>

enum semana{
    domingo = 1, segunda, terca, quarta , quinta, sexta, sabado 
};

int main(){
    int n;
    printf("Digite um dia da semana: ");
    scanf("%i", &n);
    n = n/7;
    
    switch (n)
    {
    case domingo:
        printf("Domingo");
        break;
    
    case segunda:
        printf("Segunda");
        break;

    case terca:
        printf("Terca");
        break;
    
    case quarta:
        printf("Quarta");
        break;

    case quinta:
        printf("Quinta");
        break;

    case sexta:
        printf("Sexta");
        break;

    case sabado:
        printf("Sabado");
        break;

    default:
        break;
    }
}