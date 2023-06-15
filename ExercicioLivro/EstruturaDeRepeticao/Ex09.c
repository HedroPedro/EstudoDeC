#include <stdio.h>

int main(){
    int num, maiornum, menornum;
    printf("Digite o 1. numero:");
    scanf("%i", &num);
    maiornum, menornum = num;
    for(int i = 1; i < 10; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &num);
        if(num > maiornum){
            maiornum = num;
        }
        if(num < menornum){
            menornum = num;
        }
    }
    printf("O menor numero e %i e o maior e %i", menornum, maiornum);
}