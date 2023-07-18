#include <stdio.h>
#include <string.h>
#include "estrutura/atleta.h"

int main(){
    atleta listaAtleta[3], atletaTemp;
    int anoTemp, i, j;
    for(i = 0; i < 3; i++){
        printf("Digite o nome do atleta: ");
        fgets(listaAtleta[i].nome, 20, stdin);
        printf("Digite o esporte que pratica: ");
        fgets(listaAtleta[i].esporte, 20, stdin);
        scanf("%i %i %i", &listaAtleta[i].nasc.tm_sec,
        &listaAtleta[i].nasc.tm_min, &listaAtleta[i].nasc.tm_hour);
        scanf("%i %i %i", &listaAtleta[i].nasc.tm_mday,
        &listaAtleta[i].nasc.tm_mon, &anoTemp);
        printf("Digite a altura do atleta: ");
        scanf("%f", &listaAtleta[i].altura);
        listaAtleta[i].nasc.tm_year = anoTemp - 1900;
        listaAtleta[i].nasc.tm_yday = 0;
        listaAtleta[i].nasc.tm_wday = 0;
        listaAtleta[i].nasc.tm_isdst = 0;
        setbuf(stdin, NULL);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < i+1; j++){
            if(difftime(mktime(&listaAtleta[i].nasc), mktime(&listaAtleta[j].nasc)) < 0){
                atletaTemp = listaAtleta[j];
                listaAtleta[j] = listaAtleta[i];
                listaAtleta[i] = atletaTemp;
                printf("\nAtletas %s e %s", listaAtleta[i].nome, listaAtleta[j].nome);
            }
        }
    }

    for(i = 0; i < 3; i++){
        printf("%s", listaAtleta[i].nome);
    }

}