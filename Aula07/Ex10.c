#include <stdio.h>

void separarvetor(int vetor[], int len);

int main(void){
    int vetor[10];
    for(int i = 0; i < 10; i++){
        vetor[i] = i;
    }
    separarvetor(vetor, 10);
    for(int i = 0; i < 10; i++){
        printf("%i ", vetor[i]);
    }
}

void separarvetor(int vetor[], int len){
    int temp, metade = len >> 1;
    for(int i = 0; i < metade; i++){
        temp = vetor[i];
        vetor[i] = vetor[i+metade];
        vetor[i+metade] = temp;
    }
}