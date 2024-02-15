#include <stdio.h>

int maiorElemento(int *vet, int tam);

int main(){
    int tam, mElemento = 0;
    printf("Digite o tamnho do vetor: ");
    scanf("%i", &tam);
    int vet[tam];
    for(int i  = 0; i < tam; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", vet+i);
    }
    mElemento = maiorElemento(vet, tam);
    printf("Maior elemento: %i", mElemento);

}

int maiorElemento(int *vet, int tam){
    if(tam == 2){
        if(vet[tam-1] < vet[tam-2]){
            return vet[tam-2];
        }
        return vet[tam-1];
    }

    if(vet[tam-1] > maiorElemento(vet, tam-1)){
        return vet[tam-1];
    }
    return maiorElemento(vet, tam-1);
}