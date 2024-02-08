#include <stdio.h>
#include <math.h>

typedef struct ponto{
    float x;
    float y;
} ponto;

float calcularDistancia(ponto *p1, ponto *p2);

int main(void){
    ponto p1, p2;
    printf("Digite o x e y do primeiro ponto: ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Digite o x e y do segundo ponto: ");
    scanf("%f %f", &p2.x, &p2.y);
    printf("A distancia entre os dois pontos e: %.2f", calcularDistancia(&p1, &p2));
}

float calcularDistancia(ponto *p1, ponto *p2){
    return sqrtf((p1->x-p2->x)*(p1->x-p2->x)+(p1->y-p2->y)*(p1->y-p2->y));
}