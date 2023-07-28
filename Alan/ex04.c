#include <stdio.h>

///////////////////////////////////////////////////////////////
// Programa que armazena o valor do menor e maior numeros    //
// Inseri-se um número e depois ele contnua pedindo numeros  //
//até chegar em um numero negativo o contadador passar de 15 //
///////////////////////////////////////////////////////////////


int main(){
    int num, menorNum, maiorNum, count = 1;
    printf("Digite o 1. numero: ");
    scanf("%i", &num);
    menorNum = num; //Passa o primeiro valor como menor e maior
    maiorNum = num;
    while(count < 15 && num > 0){
        printf("Digite o %i. numero: ", count+1);
        scanf("%i", &num);
        count++;
        if(num < 0){ //Verifica se o número é menor que 0, caso seja ele sai do loop
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