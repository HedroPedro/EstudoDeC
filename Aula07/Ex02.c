#include <stdio.h>

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Digite o numero do %i.: ", i+1);
        scanf("%i",&vetor[i]);
    }
    mostrarvetorinver(vetor, n);

}

void mostrarvetorinver(int vetor[], int len){
    len--;
    printf("[");
    for(len; len > -1; len--)
        printf(" %i ", vetor[len]);
    printf("]");
}