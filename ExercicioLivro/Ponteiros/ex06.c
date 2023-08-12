#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[5];
    printf("Digite o 1. numero: ");
    scanf("%i", array);
    for(int i = 1; i < 5; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", array+i);
    }
    for(int i = 0; i < 5; i++){
        printf("O dobro de %i e %i\n", *(array+i), (*(array+i))<<1);
    }
}