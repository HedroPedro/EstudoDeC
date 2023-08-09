#include <stdio.h>
#define PI 3.1414592

void calVolEsfera(float *raio, float* vol);

int main(int argc, char *argv[]){
    float r, resul;
    scanf("%f", &r);
    calVolEsfera(&r, &resul);
    printf("%.2f", resul);
}

void calVolEsfera(float *raio, float* vol){
    *vol = 4/3*PI + (*raio)*(*raio)*(*raio);
}