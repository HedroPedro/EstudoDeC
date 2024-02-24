#include <stdio.h>

#define SIZE 20

void gravarDados(int *vet, int size){
    FILE *fp = fopen("Ex7.bin", "wb");
    if(!fp){
        return;
    }

    fwrite(vet, sizeof(int), size, fp);

    fclose(fp);
}

void lerDados(int *vetStore, int size){
    FILE *fp = fopen("Ex7.bin", "rb");
    if(!fp){
        return;
    }

    int j = fread(vetStore, sizeof(int), size, fp);
    fclose(fp);
}

int main(void){
    int vet[SIZE], vetResult[SIZE], i;

    for(i = 0; i < SIZE; i++){
        printf("Digite um numero para a posicao %i.: ", i+1);
        scanf("%i", vet+i);
    }

    gravarDados(vet, SIZE);
    lerDados(vetResult, SIZE);
    for(i = 0; i < SIZE; i++){
        printf("%i\n", vetResult[i]);
    }
}