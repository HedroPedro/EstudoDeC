#include <stdio.h>


int main(){
    int vet[10], i, x, count = 0;

    for(i = 0; i<10; ++i){
        scanf("%i", &vet[i]);
    }

    printf("Entre com o numero x: ");
    scanf("%i", &x);

    for(i = 0; i < 10; ++i){
        if(vet[i] == x)
            ++count;
    }
    printf("%i apareceu %i vezes", x, count);
}