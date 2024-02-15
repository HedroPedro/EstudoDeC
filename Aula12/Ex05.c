#include <stdio.h>

int calcExpo(int num, int n);

int main(){
    int num, expo, resul;
    printf("Digite o numero e expoente: ");
    scanf("%i %i", &num, &expo);
    resul = calcExpo(num, expo);
    printf("%i", resul);
}

int calcExpo(int num, int n){
    if(n == 1)
        return num;
    return num * calcExpo(num, n-1);
}