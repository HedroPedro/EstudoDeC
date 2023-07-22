#include <stdio.h>

int conversorTempo(int horas, int min, int segun){
    return horas*3600 + min*60 + segun;
}

int main(){
    int horas, min, seg;
    printf("Digite a hora, minuto e segundo: ");
    scanf("%i %i %i", &horas, &min, &seg);
    seg = conversorTempo(horas,min, seg);
    printf("O tempo convertido em %is", seg);
}

