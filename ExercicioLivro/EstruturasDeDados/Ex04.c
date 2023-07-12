#include <stdio.h>
#include <math.h>

typedef struct{
    int x, y;
} coordenada;

typedef struct{
    coordenada p1, p2;
} retangulo;


int main(){
    retangulo r1;
    int distancia, area;
    scanf("%i%i%i%i", &r1.p1.x, &r1.p1.y, &r1.p2.x, &r1.p2.y);
    area = (r1.p1.x - r1.p2.x) * (r1.p1.x - r1.p2.x);
    distancia  = sqrt(pow(r1.p1.x - r1.p2.x, 2) + pow(r1.p1.x - r1.p2.x, 2));
    printf("Distancia da diagonal principal %i e area %i", distancia, area);
}
