#include <stdio.h>

int main(){
    int max = 6;
    int i, j, c = 0;
    for(i; i < max; i++){
        for(int j = 1; j <= i; j++){
            c++;
            printf("%i ", c);
        }
        printf("\n");
    }
}