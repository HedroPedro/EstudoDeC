#include <stdio.h>

int main(){
    int horas, minutos, segundos;
    printf("Digite as horas: ");
    scanf("%i",&horas);
    printf("Digite os minutos: ");
    scanf("%i", &minutos);
    printf("Digite os segundos: ");
    scanf("%i", &segundos);
    segundos += (horas*3600) + (minutos*60);
    printf("O tempo total em segundos foi de %i", segundos);
}