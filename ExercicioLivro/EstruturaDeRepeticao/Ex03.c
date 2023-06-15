#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%i", &num);
    for(int i = 1; i < num+1; i+=2){
        printf("%i ", i);
    }
}