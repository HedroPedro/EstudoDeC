#include <stdio.h>

#define TAM 12

int checaintervalo(int vetor[], int len);

int main(void){
    int vetor[TAM], resultado;
    for(int i = 0; i < TAM; i++){
        scanf("%i", &vetor[i]);
    }
    resultado = checaintervalo(vetor, TAM);
    printf("Teve %i numeros entre o intervalo de 10 e 50", resultado);
}

int checaintervalo(int vetor[], int len){
    int j = 0;
    for(int i = 0; i < len; i++){
        if(vetor[i] == -1){
            break;
        }
        if((vetor[i] > 9) && (vetor[i] < 51)){
            j++;
        }
    }
    return j;
}

