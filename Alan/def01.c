#include <stdio.h>

int main(){
    int num, i, somaMulti = 0;
    printf("Digite um numero: ");
    scanf("%i", &num);
    for(i = 1; i < num; i++){
        if(i % 3 == 0 || i % 5 == 0){
            somaMulti+= i;
        }
    }
    printf("A soma dos multilos foi %i", somaMulti);
}