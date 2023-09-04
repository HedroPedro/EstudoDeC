#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[5] = {2, 1, 4, 3, 6};
    for(int i = 0; i < 5; i++){
        if(((intptr_t) array+i) & 1)
            printf("%i ", array[i]);
    }
}