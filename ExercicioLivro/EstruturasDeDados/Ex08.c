#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct{
    char nome[20];
    struct tm nasc;
} pessoa;


int main(){
    pessoa listaPessoas[3];
    pessoa maisNova, maisVelha;
    int idadeTemp;
    for(int i = 0; i < 3; i++){
        fgets(listaPessoas[i].nome, 20, stdin);
        scanf("%i %i %i", &listaPessoas[i].nasc.tm_hour, 
        &listaPessoas[i].nasc.tm_min, &listaPessoas[i].nasc.tm_sec);
        scanf("%i %i %i", &listaPessoas[i].nasc.tm_mday, 
        &listaPessoas[i].nasc.tm_mon, &idadeTemp);
        listaPessoas[i].nasc.tm_year = idadeTemp - 1900;
        listaPessoas[i].nasc.tm_isdst = 0;
        listaPessoas[i].nasc.tm_wday = 0;
        setbuf(stdin, NULL);
    }
    maisNova = listaPessoas[0];
    maisVelha = listaPessoas[0];
    for(int i = 1; i < 3; i++){
        if((difftime(mktime(&listaPessoas[i].nasc), mktime(&maisNova.nasc)) > 0))
            maisNova = listaPessoas[i];
        else if((difftime(mktime(&maisVelha.nasc), mktime(&listaPessoas[i].nasc)) < 0))
            maisVelha = listaPessoas[i];
        printf("%lf, %lf\n", difftime(mktime(&listaPessoas[i].nasc), mktime(&maisNova.nasc)),
        (difftime(mktime(&maisVelha.nasc), mktime(&listaPessoas[i].nasc))));
    }
    printf("A pessoa mais nova e %s e a mais velha e %s", maisNova.nome, maisVelha.nome);

}