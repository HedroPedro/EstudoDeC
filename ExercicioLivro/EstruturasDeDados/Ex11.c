#include <stdio.h>

typedef struct{
    int dia, mes, ano;
} time;

int main(){
    time tempo1, tempo2;
    int timeDiff;
    printf("Digite o dia, mes e ano: ");
    scanf("%i %i %i", &tempo1.dia, &tempo1.mes, &tempo1.ano);
    printf("Digite o dia, mes e ano: ");
    scanf("%i %i %i", &tempo2.dia, &tempo2.mes, &tempo2.ano);
    timeDiff = ((tempo1.ano*365)+(tempo1.mes*30)+tempo1.dia) - ((tempo2.ano*365)+(tempo2.mes*30)+tempo2.dia);
    if(timeDiff < 0)
        timeDiff *= -1;
    printf("A difrenca e %i dias", timeDiff);
}
