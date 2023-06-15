#include <stdio.h>

int main(){
    int num, maiornum, menornum;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
    maiornum, menornum = num;

    while(num > 0){
        printf("Digite um numero inteiro: ");
        scanf("%i", &num);
        if(num < 0){
            break;
        }

        if(num > maiornum){
            maiornum = num;
        }
        if (num < menornum){
            menornum = num;
        }
    }

    printf("O menor numero foi %i e o maior %i", menornum, maiornum);
}