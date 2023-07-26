#include <stdio.h>

float pot(int x, int y);

int main(){
    int base, expo;
    float resul;
    printf("Digite a base e o expoente: ");
    scanf("%i %i", &base, &expo);
    resul = pot(base, expo);
    printf("O resultado e: %.2f", resul);

}

float pot(int x, int y){
    int eNeg = 0, i, xTemp = x;
    if(y == 0)
        return 1;
    if(y < 0){
        y *= -1;
        eNeg= 1;
    }
    for(i = 1; i < y; i++){
        x *= xTemp; 
    }
    if(eNeg)
        return (float)1/x;
    return x;
    
}