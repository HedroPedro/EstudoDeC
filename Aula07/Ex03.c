#include <stdio.h> 
#define TAM 50

void separarvetor(int *vetor, int *vetorpar, int *vetorimpar, int* lenvetor, int len);

int main(){
    int vetor[TAM], vetorpar[TAM] = {0}, vetorimpar[TAM] = {0}, vetorresul[2] = {0, 0};
    for(int i = 0; i < TAM; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &vetor[i]);
    }
    separarvetor(vetor, vetorpar, vetorimpar, vetorresul, TAM);
    for(int i = 0; i < vetorresul[0]; i++){
        printf("%i ", vetorpar[i]);
    }
    printf("\n");
    for(int i = 0; i < vetorresul[1]; i++){
        printf("%i ", vetorimpar[i]);
    }
}

void separarvetor(int *vetor, int *vetorpar, int *vetorimpar, int* lenvetor, int len){
    int j = 0, k = 0;
    for(int i = 0; i < len; i++){
        if(vetor[i]&1){
            vetorimpar[j] = vetor[i];
            j++;
        }else{
            vetorpar[k] = vetor[i];
            k++;
        }
    }
    lenvetor[0] = j++;
    lenvetor[1] = k++;
}