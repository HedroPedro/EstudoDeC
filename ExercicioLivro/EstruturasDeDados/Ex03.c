#include <stdio.h>
#include <math.h>

typedef struct{
    int x, y;
} coordenada;

int main(){
    coordenada c1, c2;
    float dist;
    printf("Digite a coordenada da primeira: ");
    scanf("%i%i", &c1.x, &c1.y);
    printf("Digite a coordenada da segunda: ");
    scanf("%i%i", &c2.x, &c2.y);
    dist = sqrt(pow(c1.x-c2.x, 2) + (c1.y-c2.y, 2));
    printf("A distancia dos dois pontos e: %.2f", dist);
}