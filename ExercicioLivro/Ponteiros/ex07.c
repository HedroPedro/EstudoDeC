#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[5];
    for(int i = 0; i < 5; i++){
        printf("Digite um numero para a %i. pos: ", i);
        scanf("%i", array+1);
    }
    for(int i = 0; i < 5; i++)
        if(!((*(array+i)) & 1))
            printf("%p\n", array+i);
}