#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b){
    return a+b;
}

int multiplicar(int a, int b){
    return a*b;
}

int main(void){
    int (*calc)(int, int) = somar;
    printf("%i\n", calc(10, 10));
    calc = multiplicar;
    printf("%i", calc(10, 10));
}