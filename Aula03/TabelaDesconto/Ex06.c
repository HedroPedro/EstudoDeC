#include <stdio.h>

int main(){
    int opcao, quantd;
    float preco;
    printf("|Cod.|Preco un.|\n|1   |R$ 3,50  |\n|2   |R$ 6,00  |\n|3   |R$ 3,20  |\n|4   |R$ 2,50  |"); 
    printf("\nDigite o codigo do produto: ");
    scanf("%i", &opcao);
    printf("Digite a quantidade de produtos: ");
    scanf("%i", &quantd);
    switch(opcao){
        case 1:
            preco = 3.5*quantd;
            break;
        case 2:
            preco = 6*quantd;
            break;
        case3:
            preco = 3.2*quantd;
            break;
        case 4:
            preco = 2.5*quantd;
            break;
        default:
            printf("ERRO! Produto inexistente");
            break;
    }
    if(preco > 13.99 || preco > 39.99){
        preco *= 0.85;
    }
    printf("O preco e de %.2f", preco);
}