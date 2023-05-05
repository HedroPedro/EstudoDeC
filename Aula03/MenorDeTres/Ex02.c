#include <stdio.h>

int main(){
    int n1, n2, n3, menor;
    printf("Digite tres numeros: ");
    scanf("%i %i %i", &n1, &n2, &n3);
    menor = n1;
    if(menor > n2){
        menor = n2;
    }
    if(menor > n3){
        menor = n3;
    }

    printf("O menor numero e %i", menor);
}