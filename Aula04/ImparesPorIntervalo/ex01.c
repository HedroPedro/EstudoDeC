#include <stdio.h>

int main(){
    int inicio, fim;
    printf("Digite o inicio e o fim de um intervalo: ");
    scanf("%i%i", &inicio, &fim);
    int count = inicio+1;
    while(count < fim){
        if(count & 1){
            printf("%i ", count);
        }
        count++;
    }
}