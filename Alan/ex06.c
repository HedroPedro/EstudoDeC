#include <stdio.h>

int main(){
    int num, i = 1;
    printf("Digite um numero para a tabuada: ");
    scanf("%i", num);
    while(num <= 10){
        printf("%i*%i = %i\n", i, num, num*i);//Exemplode saida: 1*5 = 5, sendo que i = 1, num = 5 e i*num
    }
    
}