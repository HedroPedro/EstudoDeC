#include <stdio.h>

int main(){
    float km, litro, litroPorKm;
    printf("Digite a quantidade de kilometros rodado: ");
    scanf("%f", &km);
    printf("Digite a quantidade de litros gastos: ");
    scanf("%f", &litro);
    litroPorKm = km/litro;
    printf("O razao e de %.2fKm/L", litroPorKm);
}