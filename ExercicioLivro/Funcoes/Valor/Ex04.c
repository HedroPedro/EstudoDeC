#include <stdio.h>

#define PI 3.1414592

float areaCirculo(float r);

int main(){
    float r, area;
    printf("Digite o raio de um circulo: ");
    scanf("%f", &r);
    area = areaCirculo(r);
    printf("A area e %.2f", area);

}

float areaCirculo(float r){
    return r*r*PI;
}