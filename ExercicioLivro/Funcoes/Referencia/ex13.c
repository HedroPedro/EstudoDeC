#include <stdio.h>

void ordenavetor(int *array, int len);

int main(void){
    int vetor[5];
    for(int i = 0; i < 5; i++)
        scanf("%i", &vetor[i]);
    ordenavetor(vetor, 5);
    for(int i = 0; i < 5; i++)
        printf("%i\n", vetor[i]);
}

void ordenavetor(int *array, int len){
    int temp;
    for(int i = 0; i < len; i++){
        for(int k = 0; k < len; k++){
            if(array[i] > array[k]){
                temp = array[i];
                array[i] = array[k];
                array[k] = temp;
            }
        }
    }
}