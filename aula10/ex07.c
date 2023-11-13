#include <stdio.h>

#define SIZE 20

int main(void){
    int vetor[20] = {};
    int *ptr_inicio = vetor, *ptr_final = vetor+19;
    int i;
    for(i = 0; i < SIZE; i++){
        vetor[i] = i;
    }
    
    for(i = 0; i < SIZE/2; i++){
        printf("%d ", *(ptr_inicio+i));
    }
    printf("\n");

    for(i = 0; i < SIZE/2; i++){
        printf("%d ", *(ptr_final-i));
    }
}