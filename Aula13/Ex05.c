#include <stdio.h>

void gravarDados(int *vect, int qtd);

int main(){
    int qtd;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &qtd);
    int vet[qtd];
    for(int i = 0; i < qtd; i++){
        printf("Digite o numero na posicao %i: ", i+1);
        scanf("%i", vet+i);
    }
    gravarDados(vet, qtd);
}

void gravarDados(int *vect, int qtd){
    FILE *fp = fopen("Ex05.txt", "w");
    if(!fp){
        return;
    }
    for(int i = 0; i < qtd; i++)
        fprintf(fp, "%i\n", vect[i]);
    fclose(fp);
}