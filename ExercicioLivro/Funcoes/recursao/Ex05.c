#include <stdio.h>

int somaVetor(int *vetor, int pos);

int main(){
    int paraSomar[4] = {1, 0, 0, 4};
    printf("A soma foi %i", somaVetor(paraSomar, 3));
}

int somaVetor(int *vetor, int pos){
    if(pos > -1){
        return vetor[pos] + somaVetor(vetor, pos-1);
    }
    return 0;
}