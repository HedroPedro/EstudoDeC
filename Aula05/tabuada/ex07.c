#include <stdio.h>

void tabuada(int num);

int main(){
    int num;
    printf("Digite um numero inteiro para gerar sua tabuada: ");
    scanf("%i", &num);
    tabuada(num);

}

void tabuada(int num){
    for(int i = 0; i < 11; i++){
        printf("%i*%i=%i\n",num, i, num*i);
    }
}