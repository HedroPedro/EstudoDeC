#include <stdio.h>

int main(){
    float precoProduto, precoDolar, precoEuro, dolarTaxa, euroTaxa;
    printf("Digite o preco do produto: ");
    scanf("%f", &precoProduto);
    printf("Digite o valor atual do dolar: ");
    scanf("%f", &dolarTaxa);
    printf("Digite op valor atual do euro: ");
    scanf("%f", &euroTaxa);
    precoDolar = precoProduto/dolarTaxa;
    precoEuro = precoProduto/euroTaxa;
    printf("O valor em dolar e %.2f, enquanto que em euro e de %.2f", precoDolar, precoEuro);

}