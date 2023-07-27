#include <stdio.h>

int main(){
    int n1 = 1, n2 = 1, fibbo = 0, somaPar = 0;
    while(fibbo < 4000000){
        fibbo = n1 + n2;
        n1 = n2;
        n2 = fibbo;
        if(!(fibbo&1)){
            somaPar += fibbo;
        }
    }
    printf("A soma e %i", somaPar);
}