#include <stdio.h>

typedef struct{
    int horas, minutos, segundos;
} horario;

int main(){
    horario vetorHoras[5];
    int i, maiorHora, j;
    for(i = 0; i < 5; i++){
        printf("Digite os segundos: ");
        scanf("%i", &vetorHoras[i].segundos);
        printf("Digite os minutos: ");
        scanf("%i", &vetorHoras[i].minutos);
        printf("Digite as horas: ");
        scanf("%i", &vetorHoras[i].horas);
        vetorHoras[i].minutos += (int) vetorHoras[i].segundos/60;
        vetorHoras[i].segundos %= 60;
        vetorHoras[i].horas += (int) vetorHoras[i].minutos/60;
        vetorHoras[i].minutos %= 60;
    }
    maiorHora = vetorHoras[0].horas;
    j = 1;
    for(i = 1; i < 5; i++){
        if(vetorHoras[i].horas > maiorHora){
            maiorHora = vetorHoras[i].horas;
            j = i+1; 
        }
    }
    printf("A maior hora foi %ih na %i. posicao do vetor", maiorHora, j);
}