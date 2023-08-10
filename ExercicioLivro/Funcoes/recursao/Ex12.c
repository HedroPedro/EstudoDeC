#include <stdio.h>

void imprimeBinario(int bin);

int main(void){
    imprimeBinario(5);
}

void imprimeBinario(int bin){
    if(bin != 1){
        printf("%i", bin % 2);
        return imprimeBinario(bin >> 1);
    }
    printf("1");
}