#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    int idade;
    char rua[30];
    int ruaNum;
} cad;


int main(){
    cad c;
    printf("Digite o seu nome: ");
    gets(c.nome);
    printf("Digite sua idade: ");
    scanf("%i", &c.idade);
    printf("Digite a rua: ");
    setbuf(stdin, NULL);
    gets(c.rua);
    printf("Digite o numero da rua: ");
    scanf("%i", &c.ruaNum);
    printf("Seu nome %s, sua idade %i, endereco %s n%i",c.nome, c.idade, c.rua, c.ruaNum);

}