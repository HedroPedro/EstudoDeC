#include <stdio.h>

int main(){
    int x, y, i;
    printf("Digite dois numeros: ");
    scanf("%i%i", &x, &y);
    for(i = x+1; i < y; i++){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%i ", i);
        }
    }
}