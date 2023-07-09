#include <stdio.h>
#include <math.h>

void calcRaiz(int a, int b, int delta);

int calcDelta(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Digite a, b e c: ");
    scanf("%i%i%i", &a, &b, &c);
    if(a != 0){
        calcRaiz(a, b, calcDelta(a, b, c));
    }
}

void calcRaiz(int a, int b, int delta){
    float r1, r2;
    if(delta > -1){
        r1 = (-b + sqrt(delta))/2.;
        r2 = (-b - sqrt(delta))/2.;
        printf("Raiz 1: %.2f", r1);
        printf("Raiz 2: %.2f", r2);  
    }
}

int calcDelta(int a, int b, int c){
    return b*b -4*a*c;
}