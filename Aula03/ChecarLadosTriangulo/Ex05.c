#include <stdio.h>

int main(){
    float lado1, lado2, lado3;
    printf("Digite os tres lados de um triangulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    if((lado1 == lado2) && (lado2 == lado3) && (lado3 == lado1)){
        printf("Triangulo equilatero");
    }else if((lado1 != lado2) && (lado2 != lado3) && (lado3 != lado1)){
        printf("Triangulo escaleno");
    }else{
        printf("Triangulo isosceles");
    }
    
}