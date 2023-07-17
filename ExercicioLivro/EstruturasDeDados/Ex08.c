#include <stdio.h>
#include <string.h>

typedef struct{
    int ano, mes, dia;
    int hora, min, seg;
} nascimento;

typedef struct{
    char nome[20];
    nascimento dataNasc;
} pessoa;


int main(){
    pessoa listaPessoas[6];
    pessoa maisNova, maisVelha;
    long long idadeNovS, idadeVeS, idadeListaS;
    for(int i = 0; i < 6; i++){
        fgets(listaPessoas[i].nome, 20, stdin);
        scanf("%i %i %i", &listaPessoas[i].dataNasc.dia,
        &listaPessoas[i].dataNasc.mes, &listaPessoas[i].dataNasc.ano);
        scanf("%i %i %i", &listaPessoas[i].dataNasc.hora,
        &listaPessoas[i].dataNasc.min, &listaPessoas[i].dataNasc.seg);
        setbuf(stdin, NULL);
    }
    maisNova = listaPessoas[0];
    maisVelha = listaPessoas[0];
    for(int i = 0; i < 6; i++){
        idadeNovS = ((maisNova.dataNasc.ano*365)*24);
    }
    printf("A pessoa mais nova e %s e a mais velha e %s", maisNova.nome, maisVelha.nome);
}