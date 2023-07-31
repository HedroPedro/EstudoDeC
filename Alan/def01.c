#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////// 
// A ideia desse código é montar um somador de numeros divisiveis por 3 ou 5                      //
// Utilizamos inteiros e para determinar o loop e soma                                            //
////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    int num, i, somaMulti = 0;
    printf("Digite um numero: ");
    scanf("%i", &num);
    for(i = 1; i < num; i++){
        if(i % 3 == 0 || i % 5 == 0) //Checa se e multiplo e soma, caso seja
            somaMulti+= i;
    }
    printf("A soma dos multiplos foi %i", somaMulti);
}