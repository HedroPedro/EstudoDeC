#include <stdio.h>
#include <string.h>

#define MAXSIZE 257

int main(void){
    float valor, valor_vista;
    char nome[MAXSIZE];
    printf("Digite o nome do produto: ");
    fgets(nome, MAXSIZE-2, stdin);
    printf("Digite o preco do produto: ");
    scanf("%f", &valor);
    valor_vista = valor * 0.90;
    printf("O nome do produto e: %s\nValor: %.2f\nValor a vista: %.2f\n", nome, valor, valor_vista);
}