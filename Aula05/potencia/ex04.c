#include <stdio.h>

float potencia(float num, int vezes);


int main(){
    int num, vezes;
    float resul;
    printf("Digite o numero e a potencia: ");
    scanf("%i%i", &num, &vezes);
    resul = potencia((float)num, vezes);
    printf("%i^%i = %f", num, vezes, resul);
}

float potencia(float num, int vezes){
    int c;
    if(vezes == 0){
        return 1;
    }

    for(vezes; vezes > 0; vezes--){
            num *= num;
    }

    if(c != 0){
        return 1/num;
    }

    return num;
}