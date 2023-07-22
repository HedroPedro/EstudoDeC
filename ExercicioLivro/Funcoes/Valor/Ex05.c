#include <stdio.h>
#define PI 3.1414592


float calcVolume(float raio);

int main(){
    float raio, area;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    area = calcVolume(raio);
    printf("Area = %fm3", area);
    return 0;
}

float calcVolume(float raio){
    return (4/3)*PI*raio*raio*raio;
}