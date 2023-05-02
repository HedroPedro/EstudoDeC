#include  <stdio.h>

int main(){
    int dias;
    float km, totalPagar;
    printf("Digite o total de dias que voce utilizou o carro (1 a 30): ");
    scanf("%i", &dias);
    printf("Digite os kilometros rodados (1 a 1000): ");
    scanf("%f", &km);
    totalPagar = ((dias*30) + (km*0.01))*0.9;
    printf("Voce ira pagar um total de R$%.2f", totalPagar);
}