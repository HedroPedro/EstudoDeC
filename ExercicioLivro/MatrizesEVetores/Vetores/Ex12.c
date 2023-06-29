#include <stdio.h>

int main(){
    int vetor[10] = {12, 5, 4, 3, 1, 4, 7, 8, 5, 12};
    int i, j;
    for(i = 0; i < 10; i++){
        for(j = 9; j > -1; j--){
            if(vetor[i] == vetor[j] && i != j){
                printf("O numero %i se repetiu\n", vetor[i]);
            }
        }
    }
}