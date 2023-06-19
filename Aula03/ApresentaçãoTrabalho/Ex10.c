#include <stdio.h>

int main(){
    int temInterface, temAI, temIdentacao, temEncapsulamento, temStructs;

    printf("O programa tem interface grafica?: ");
    scanf("%i", &temInterface);
    printf("O programa tem inteligencia interficial?: ");
    scanf("%i", &temAI);
    printf("O programa tem identecao? ");
    scanf("%i", &temIdentacao);
    printf("O programa tem encapsulamento? ");
    scanf("%i", &temEncapsulamento);
    printf("O programa usa structs? ");
    scanf("%i", &temStructs);
    if((temInterface || temInterface) || (temEncapsulamento && temIdentacao) || temStructs){
        printf("Pode ser avaliado");
    }else{
        printf("Ficou com 0");
    }
}