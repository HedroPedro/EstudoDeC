#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, resultado;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);    
    resultado = (a*b)/c;
    printf("O resultado da formula (a*b)/c e = %.2f\n", resultado);
    resultado = (a*a)+b+5*c;
    printf("a*a + b + 5*c = %.2f\n", resultado);
    resultado = a*b*c + b + (c/3) * 5 - 1;
    printf("a*b*c + b + (c/3) * 5 - 1 = %f\n", resultado);
    resultado = pow((a*b*c), 3)/2;
    printf("O resultado do cubo do produto de a,b e c dividido por 2, %.2f", resultado);
