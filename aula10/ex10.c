#include <stdio.h>

int main(){
    int matrix[4][4] = {{}}, x, count = 0, i;
    for(i = 0; i < 16; i++){
       *(*(matrix+i)) = i+1;
    }

    printf("Digite um numero: ");
    scanf("%i", &x);
    for(i = 0; i < 16; i++){
       if(*(*(matrix+i)) == x)
            count++;
    }
    printf("O numero %i apareceu %i vez", x, count);
}