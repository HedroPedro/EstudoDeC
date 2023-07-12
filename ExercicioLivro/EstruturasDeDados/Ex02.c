#include <stdio.h>
#include <math.h>

typedef struct{
    int x,y;
}coordenada;

int main(){
    coordenada c1;
    double dist;
    printf("Digite as cordenadas x e y de um ponto: ");
    scanf("%i%i", &c1.x, &c1.y);
    dist = sqrt(pow(c1.x, 2) + pow(c1.y, 2));
    printf("A distancia e: %.2f", dist);
}