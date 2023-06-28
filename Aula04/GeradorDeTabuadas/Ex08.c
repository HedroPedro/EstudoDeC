#include <stdio.h>

int main(){
    int i, n;
    for(i = 1; i < 11; i++){
        for(n =1; n < 11; n++){
            printf("%i*%i = %i\n", i, n, n*i);
        }
        printf("\n");
    }
}