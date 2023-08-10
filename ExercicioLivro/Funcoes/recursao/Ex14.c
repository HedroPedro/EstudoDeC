#include <stdio.h>

int menorNum(int vetor[], int pos);

int main(void){
    int vetor[4] = {8, 9, 0, 14};
    int outrovet[5] = {8, 9, 0, 14, -1};
    printf("%i\n", menorNum(vetor, 3));
    printf("%i", menorNum(outrovet, 4));
}

int menorNum(int vetor[], int pos){
    static int i = __INT16_MAX__;
    if(i > vetor[pos])
        i = vetor[pos];
    if(pos == 0){
        int menor;
        menor = i;
        i = __INT16_MAX__;
        return menor;
    }
    return menorNum(vetor, pos-1);
}