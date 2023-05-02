#include <stdio.h>

int main(){
    int numFunc, horasTrab;
    float salario, valorHora;
    printf("Digite o numero desse funcionario: ");
    scanf("%i", &numFunc);
    printf("Quanto ele recebe por hora? R$");
    scanf("%f", &valorHora);
    printf("Digite a quantidade de horas que ele trabalhou: ");
    scanf("%i", &horasTrab);
    salario = horasTrab * valorHora;
    printf("O funcionario de numero %i ira ganhar %.2f", numFunc, salario);
}