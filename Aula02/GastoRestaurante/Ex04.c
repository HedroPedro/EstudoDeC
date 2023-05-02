#include <stdio.h>

int main(){
    float gasto, totalPagar;
    printf("Digite  a quantidade que vc gastou R$");
    scanf("%f", &gasto);
    totalPagar = gasto * 1.1;
    printf("O total a se pagar e de %.2f", totalPagar);
}