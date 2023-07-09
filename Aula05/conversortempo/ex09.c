#include <stdio.h>

int converterSegundo(int hora, int minuto, int segundo);

int main(){
    int hora, minuto, segundo;
    printf("Digite as horas, minutos e segundos: ");
    scanf("%i%i%i", &hora, &minuto, &segundo);
    printf("O total em segundos e: %i", converterSegundo(hora, minuto, segundo));
}

int converterSegundo(int hora, int minuto, int segundo){
    return hora*3600+minuto*60+segundo;
}