#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
// O proposito desse codigo e multiplicar numeros até que seja digitado um número negativo //
// O programa multiplica os números e impede o zero de ser multiplicado                    //
// Ao final o programa mostra o valor total da multiplicação                               //
/////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    int n, prod = 1;
    while(1){//While infito
        printf("Digite um numero: ");
        scanf("%i", &n);
        if(n == 0){
            break;
        }
        prod *= n;
    }
    printf("O produto e: %i", prod);   
}