#include <stdio.h>

int main(){
    printf("Os 5 primeiros numeros multiplos de 3 sao: ");
    for(int i = 3; i < 16; i+=3){
        printf("%i, ", i);
    }
}