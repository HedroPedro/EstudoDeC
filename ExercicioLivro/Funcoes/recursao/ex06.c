#include <stdio.h>

float somarVetor(float vetor[], int pos);

int main(){
    float vetor[4] = {4, 4, 6, 2};
    printf("A media foi %.2f",somarVetor(vetor, 4)/4);
    return 0;
}

float somarVetor(float vetor[], int pos){
    if(pos > -1)
        return vetor[pos] + somarVetor(vetor, pos-1);
    return 0;
}