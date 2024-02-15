#include <stdio.h>

int coverterDecimalToBin(int number);

int main(){
    int num, numBin;
    printf("Digite um numero para ser convertido: ");
    scanf("%i", &num);
    numBin = coverterDecimalToBin(num);
    printf("%i", numBin);
}

int coverterDecimalToBin(int number){
    if(number < 1)
        return 0;

    return number % 2 + 10 * (coverterDecimalToBin(number >> 1));    
}