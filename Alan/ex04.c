#include <stdio.h>

int main(){
    int num, menorNum, maiorNum, count = 1;
    printf("Digite o 1. numero: ");
    scanf("%i", &num);
    menorNum = num;
    maiorNum = num;
    while(count < 15 && num > 0){
        printf("Digite o %i. numero: ", count+1);
        scanf("%i", &num);
        count++;
        if(num < 0){
            break;
        }
        if(num < menorNum){
            menorNum = num;
        }
        if(num > maiorNum){
            maiorNum = num;
        }
    }
    printf("O maior numero foi %i\nO menor numero foi %i", maiorNum, menorNum);

}