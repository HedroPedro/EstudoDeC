#include <stdio.h>

int main(){
    int num, i = 1;
    printf("Digite um numero para a tabuada: ");
    scanf("%i", num);
    while(num <= 10){
        printf("%i*%i = %i\n", i, num, num*i);
    }
    
}