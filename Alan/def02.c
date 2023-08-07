#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////// 
// A ideia desse código é montar um somador de pares dentro de um fibbonaci que vai ate 4000000            //
// Utilizamos inteiros para somar, passar o fibbonaci e os valores nescessarios para continuar o fibbonaci //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    int n1 = 1, n2 = 1, fibbo = 0, somaPar = 0;
    while(fibbo < 4000000){
        fibbo = n1 + n2; //Soma do anterior e o atual
        n1 = n2; //Passa o valor anterior
        n2 = fibbo; //Torna n2 o valor recente
        if(!(fibbo&1)){ //Verifica se o numero e par converte todos os bits para 0 caso seja par e entao inverte
            somaPar += fibbo;
        }
    }
    printf("A soma e %i", somaPar);
}
