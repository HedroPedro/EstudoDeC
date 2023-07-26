#include <stdio.h>

float calculadora(char opc, int n1, int n2);

int main(){
    char opc;
    int n1, n2;
    printf("Digite uma opcao de calculadora: ");
    scanf("%c", &opc);
    printf("Digite dois numeros: ");
    scanf("%i %i", &n1, &n2);
    printf("O resultado e: %.2f", calculadora(opc, n1, n2));
}

float calculadora(char opc, int n1, int n2){
    switch (opc){
    case '+':
        return n1 + n2;

    case '-':
        return n1 - n2;

    case '*':
        return n1 * n2;

    case '/':
        return (float) n1/n2;
    }
    return 0.0;
}