#include <stdio.h>

void somaparimpar(int *array, int len, int *sompar, int *somimpar);

int main(void){
    int somapar = 0, somaimpar = 0;
    int vetor[5];
    for(int i = 0; i < 5; i++){
        scanf("%i", &vetor[i]);
    }
    somaparimpar(vetor, 5, &somapar, &somaimpar);
    printf("%i %i",somapar, somaimpar);
}

void somaparimpar(int *array, int len, int *sompar, int *somimpar){
    for(int i = 0; i < len; i++){
        if(array[i]&1)
            *somimpar += array[i];
        else
            *sompar += array[i];
    }
}