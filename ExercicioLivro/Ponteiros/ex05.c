#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[5];
    for(int i = 0; i < 5; i++){
        *(array+i) = i;
    }
    for(int i = 0; i < 5; i++){
        printf("Dobro de %i e %i\n", *(array+i), (*(array+i))<<1);
    }
}