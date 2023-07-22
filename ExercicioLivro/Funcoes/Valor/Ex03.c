#include <stdio.h>

float conversosrF(float Fahren);

int main(){
    float temp, tempConvert;
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &temp);
    tempConvert = conversosrF(temp);
    printf("A temperatura em Celsius e: %.2f", tempConvert);
}

float conversosrF(float Fahren){
    return (Fahren-32) * 5/9;
}