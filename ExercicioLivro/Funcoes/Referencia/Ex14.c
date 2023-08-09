#include <stdio.h>
#include <math.h>

void calcularraiz(float *a, float *b, float *c);

int main(void){
    float a, b, c;
    printf("Digite o a, b e c: "); // (x-2)(x+2) x^2-4
    scanf("%f %f %f", &a, &b, &c);
    calcularraiz(&a, &b, &c);
}

void calcularraiz(float *a, float *b, float *c){
    float delta = (*b)*(*b) - 4 *(*a)*(*c), raiz[2];
    if(*a == 0){
        printf("Nao e de segundo grau!");
        return;
    }
    if(delta < 0){
        printf("Nao tem raiz real");
        return;
    }
    raiz[0] = (-(*b)+sqrt(delta))/2, raiz[1] = (-(*b)-sqrt(delta))/2;
    printf("As raizes e %.2f %.2f", raiz[0], raiz[1]);
}