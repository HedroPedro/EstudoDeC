#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char mercadoria[30];
    float preco, precoDesconto;
    gets(mercadoria);
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    precoDesconto = preco*0.9;
    printf("A mercadoria: \"%s\" tera, com desconto, R$%.2f", mercadoria, precoDesconto);
}