#include <stdio.h>

int main(){
    int array[100], i;
    int count = 0;
    for(i = 1;i < 101;i++){
        if((i % 7) != 0){
            array[count] = i;
            count++;
        }
    }
    printf("Os numeros que nao sao multiplos de 7 e: ");
    for(i = 0; i < count; i++){
        printf("%i, ", array[i]);
    }
}