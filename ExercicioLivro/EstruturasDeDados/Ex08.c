#include <stdio.h>
#include <string.h>
#include <time.h>

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
    for(int i = 0; i < 6; i++){
        fgets(listaPessoas[i].nome, 20, stdin);
        scanf();
        );
    }
    maisNova = listaPessoas[0];
    maisVelha = listaPessoas[0];
    printf("A pessoa mais nova e %s e a mais velha e %s", maisNova.nome, maisVelha.nome);
}