#include <stdio.h>

//////////////////////////////////////////////////
// Gera um tabuada de 1 a 10                    //
// É pedido para o usuário digitar um número e  //
//mostrará a tabuada dele até o 10              //
//////////////////////////////////////////////////

int main(){
    int num, i = 1;
    printf("Digite um numero para a tabuada: ");
    scanf("%i", num);// Salva o numero inteiro
    while(num <= 10){
        printf("%i*%i = %i\n", i, num, num*i);//Exemplo de saida: 2*5 = 10, sendo que i = 2, num = 5 e i*num = 5*2
    }
    
}