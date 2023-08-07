#include <stdio.h>
#include <math.h>

#define PI 3.1414592

float seno(float grau);

int main(int argc, char *argv[]){
    float grau, sen;
    scanf("%f", &grau);
    grau = grau*PI/180;
    sen = seno(grau);
    printf("%.2f", sen);
}

float seno(float grau){
    float soma = 0, valorTemp;
    int fat = 1;
    for(int i = 0; i < 6; i++){
        for(int j = 1; j < 2*i+1; j++){
            fat *= i;
        }
        valorTemp = (float) pow(-1, i)* pow(grau, 2*i+1)/fat;
        soma += valorTemp;
        fat = 1;
    }
    return soma;
}