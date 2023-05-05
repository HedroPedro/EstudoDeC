#include <stdio.h>

int main(){
    int cod;
    float salario;
    printf("|Cod | Cargo\n|1   | Vendendor(a)\n|2   | Auxiliar de escritorio\n|3   | Auxiliar de enfermagem\n|4   | Bibliotecario\n");
    printf("Digite o codigo: ");
    scanf("%i", &cod);
    printf("Digite o salario: ");
    scanf("%f", &salario);
    switch (cod){
    case 1:
        salario = salario * 1.1;
        break;
    case 2:
        salario = salario * 1.07;
        break;
    case 3:
        salario = salario * 1.12;
        break;
    case 4:
        salario = salario * 1.11;
        break;
    default:
        printf("ERRO! Codigo nao encontrado\n");
        break;
    }
    printf("O novo salario e de: %.2f", salario);

}