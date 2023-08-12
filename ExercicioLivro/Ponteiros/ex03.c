#include <stdio.h>
#include <stdlib.h>

int main(void){
    float array[10];
    for(int i = 0; i < 10; i++){
        printf("%p\n", &array[i]);
    }
}