#include <stdio.h>

/////////////////////////////////////////////////////////////////////////
// Programa que verifica se um determinado numero inteiro e primo      //
// É inserido um número que dentro de um loop (while) e verificado     // 
//se o iterador é divisor do número digitado, caso seja é              //
//adicionado na contagem de divisores e ao final mostra se ele é primo //
/////////////////////////////////////////////////////////////////////////
int main(){
    int c = 1, divCount = 0, num; //Iterador, contador de divisores e numero, respectivamente
    printf("Digite um numero inteiro: ");
    scanf("%i", &num); //Escaneia resposta do teclado do numero
    while(c <= num){ 
        if(num%c == 0){ //Verifica se c é um divisor de num
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