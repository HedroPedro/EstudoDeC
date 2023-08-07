#include <stdio.h>
//#include <stdlib.h>

/////////////////////////////////////////////////////////////////////
// Um jogo de adivinhação de um bilhete de loteria com 4 digitos  //
// Cada tentativa resulta no programa verificando                //
//se o numero é menor ou maior do que o numero pre definido     //
//retornando uma mensagem para ele ser menor e maior           //
// Caso o usuário acerte ele mostra uma mensagem de vitória   //
///////////////////////////////////////////////////////////////

#define NUMERO 3121 //Definição do número (poderia ser usado um rand() para obter o mesmo efeito)

int main(){
    //int numero = 1000 + (rand()%1000); Um jeito de deixar aleatório
    int n;
    while(n != NUMERO){ //Mantém o jogador preso em um loop até ele acertar
        printf("Digite um numero de 4 digitos: ");
        scanf("%i", &n); //Le a tentativa e comprara depois
        if(n > NUMERO)
            printf("Numero maior que o da loteria\n");
        if(n < NUMERO)
            printf("Numero menor que o da loteria\n");
    }
    printf("PARABENS VOCE GANHOU NA LOTERIA!!! :)");
}