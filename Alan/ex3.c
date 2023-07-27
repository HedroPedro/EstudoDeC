#include <stdio.h>

int main(){
    int c = 1, divCount = 0, num;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
    while(c <= num){
        if(num%c == 0){ //Verifica se c e um divisor
            divCount++;
        }
        c++;
    }
    if(divCount == 2){
        printf("E primo");
    }else{
        printf("Nao e primo");
    }
}