#include <stdio.h>

void eQudradoPerfeito(int num){
    for(int i = 1; i <= num; i++){
        if(i*i == num){
            printf("E quadrado perfeito");
            return;
        }
    }
        printf("Nao e um quadrado perfeito");
}

int main(){
    int num;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%i", &num);
    eQudradoPerfeito(num);
}
