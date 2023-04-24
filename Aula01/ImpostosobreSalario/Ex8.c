#include <stdio.h>

int main(){
    float salario;
    printf("Digite o salário base: ");
    scanf("%f", &salario);
    salario = (salario*0.88)+50;
    printf("O seu salario a receber e %.2f", salario);
}