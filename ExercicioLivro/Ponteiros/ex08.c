#include <stdio.h>
#include <stdlib.h>

#define T 5

int main(void){
    float vetor[T], num = 0.8;
    for(int i = 0; i < T; i++){
        *(vetor+i) = num;
        printf("Valor na pos %i: %.2f\n", i, *(vetor+i));
    }
}