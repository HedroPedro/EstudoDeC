#include <stdio.h>

void posultimonum(int vetor[], int len);

int main(void){
    int vetor[21];

    for(int i = 0; i < 21; i++){
        scanf("%i", &vetor[i]);
    }

    posultimonum(vetor, 21);
}

void posultimonum(int vetor[], int len){
    int ultimonum = vetor[len-1];
    printf("%i", ultimonum);
    for(int i = 0; i < len-1; i++){
        if(vetor[i] == ultimonum)
            printf("O numero %i esta presente na posicao %i.", ultimonum, i+1);
        printf(" %i\n", vetor[i]);
    }
}