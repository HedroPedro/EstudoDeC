#include "atleta.h"
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    atleta listaAtleta[5];
    atleta atletaAlto, atletaVelho;
    int anoTemp;
    for(int i = 0; i < 5; i++){
        fgets(listaAtleta[i].nome, 20, stdin);
        fgets(listaAtleta[i].esporte, 20, stdin);
        scanf("%i %i %i", &listaAtleta[i].nasc.tm_sec,
        &listaAtleta[i].nasc.tm_min, &listaAtleta[i].nasc.tm_hour);
        scanf("%i %i %i", &listaAtleta[i].nasc.tm_mday,
        &listaAtleta[i].nasc.tm_mon, &anoTemp);
        scanf("%f", &listaAtleta[i].altura);
        listaAtleta[i].nasc.tm_year = anoTemp - 1900;
        listaAtleta[i].nasc.tm_yday = 0;
        listaAtleta[i].nasc.tm_wday = 0;
        listaAtleta[i].nasc.tm_isdst = 0;
    }
    atletaAlto = listaAtleta[0], atletaVelho = listaAtleta[0];

    for(int i = 1; i < 5; i++){
        if((difftime(mktime(&atletaVelho.nasc), mktime(&listaAtleta[i].nasc)) < 0))
            atletaVelho = listaAtleta[i];
        if(atletaAlto.altura < listaAtleta[i].altura)
            atletaAlto = listaAtleta[i];
    }
    printf("O atleta mais alto e %s enquanto que o mais velho e %s", atletaAlto.nome, 
    atletaVelho.nome);
}