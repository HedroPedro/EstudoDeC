#include <stdio.h>

int main(){
    float soma = 0;
    float i, j = 1;
    while(i != 101 && j != 56){
        soma = i/j;
        i += 2;
        j += 1;
    }
    printf("%f, %f ", i, j);
    printf("A soma e: %f", soma);
}