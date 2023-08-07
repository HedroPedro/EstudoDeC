#include <stdio.h>
#include <ctype.h>

int main(){
    char opc;
    int pixCount = 0, maisNova = 100, idade;
    float mediaPix = 0, maiorCompra  = 0, compra, totCompra = 0;
    do{
        printf("Digite o tipo de pagamento: P - Pix C - Cartao: ");
        scanf(" %c", &opc);
        if(toupper(opc) != 'C' && toupper(opc) != 'P'){
            printf("ERRO\n");
            continue;
        }
        printf("Digite sua idade e compra: ");
        scanf("%i %f", &idade, &compra);
        if(idade < maisNova)
            maisNova = idade;
        if(maiorCompra < compra)
            maiorCompra = compra;
        if(toupper(opc) == 'P'){
            mediaPix += compra;
            pixCount++;
        }
        totCompra += compra;
        printf("Digite....... S se quer sair......: ");
        scanf(" %c", &opc);
    }while(toupper(opc) != 'S');
    mediaPix /= pixCount;
    printf("A pessoa mais nova a comprar foi %i\n", maisNova);
    printf("A maior compra foi %.2f\n", maiorCompra);
    printf("O total de compras foi %.2f\n", totCompra);
    printf("A media do Pix e: %.2f", mediaPix);
    return 0;
}