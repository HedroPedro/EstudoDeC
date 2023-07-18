#include <stdio.h>

enum listaItens{
    paoFrances = 1, paoForma, presunto, muzzarela
};

int main(){
    int opcao, qtd;
    float total;
    printf("1-Pao frances\n2-Pao de Forma\n3-Presunto\n4-Muzzarela\n");
    scanf("%i", &opcao);
    printf("Digite a quantidade: ");
    scanf("%i", &qtd);
    switch(opcao){
        case paoFrances:
        total = qtd*0.4;
        printf("O total e %.2f", total);
        break;
        case paoForma:
        total = qtd*14;
        printf("O total e %.2f", total);
        break;
        case presunto:
        total = qtd*1.5;
        printf("O total e %.2f", total);
        break;
        case muzzarela:
        total = qtd*2.5;
        printf("O total e %.2f", total);
        break;

        default:
        printf("Opcao nao está no menu");
        return -1;
    }
}