#include <stdio.h>

int main(){
    int i;
    int contador = 3;
    for(i = 0; i < 50; i++){
        printf("%i ", contador);
        contador+=3;
    }
}