#include <stdio.h>

int main(void){
    int placaCar, i = 1;
    float horas, preco, totalPreco = 0;
    do{
        printf("Digite a placa do carro: ");
        scanf("%i", &placaCar);
        printf("Digite a quantidade de horas que o carro ficou: ");
        scanf("%f", &horas);
        preco = horas <= 2 ? 2 : 2 + 3*(horas-2);
        totalPreco += preco;
        printf("O carro de placa [%i] pagara %.2f\n", placaCar, preco);
        printf("Digite 0 para parar: ");
        scanf("%i", &i);
    }while(i != 0);
    printf("O total pago pelos carros foi: %.2f", totalPreco);
}