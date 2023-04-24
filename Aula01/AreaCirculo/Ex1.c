#include <stdio.h>
#define PI 3.1415

int main(){
    float raio, area, perimetro;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    perimetro = 2*raio*PI;
    area = (raio*raio)*PI;
    printf("O perimetro e de %f\nA area e %f", perimetro, area);
    
}