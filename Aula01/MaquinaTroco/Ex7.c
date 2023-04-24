#include <stdio.h>

int main(){
    int dinheiro, troco;
    printf("Insira o dinheiro (apenas multiplos de 5): ");
    scanf("%i", &dinheiro);
    troco = dinheiro%5;
    printf("O troco que nao podera ser dado: %i", troco);
}