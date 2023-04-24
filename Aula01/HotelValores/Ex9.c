#include <stdio.h>

int main(){
    float diaria, diariaDesconto, total, totalDescOcupcao;
    int ocupacao = 45*0.35;//Pessoas ocupando o hotel
    printf("Digite o preco da diaria: ");
    scanf("%f", &diaria);
    diariaDesconto = diaria*0.7;
    totalDescOcupcao = diariaDesconto*(ocupacao*2);
    total = ocupacao*diaria; 
    printf("O preco da diaria com desconto e %.2f", diariaDesconto);
    printf("\nO total arrecadado com o dobro de ocupacao e com desconto foi %.2f", totalDescOcupcao);
    printf("\nO total arrecadado com a ocupacao base e sem desconto foi de %.2f", total);
}