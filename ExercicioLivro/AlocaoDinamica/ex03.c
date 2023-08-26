#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cadastro{
    char nome[20], end[20];
    int idade;
}Cadastro;

Cadastro* criaVetor(int n);

int main(void){
    int n;
    Cadastro *cadas = NULL;
    printf("Digite um numero: ");
    scanf("%i", &n);
    cadas = criaVetor(n);
    for(int i = 0; i < n; i++){
        printf("Nome: %s\n", cadas[i].nome);
        printf("Endereco: %s\n", cadas[i].end);
        printf("Idade: %i\n", cadas[i].idade);
    }
}

Cadastro* criaVetor(int n){
    Cadastro *c = (Cadastro *) malloc(sizeof(Cadastro) * n);
    for(int i = 0; i < n; i++){
        printf("Digite o nome: ");
        setbuf(stdin, NULL);
        gets(c[i].nome);
        printf("Digite o endereco: ");
        setbuf(stdin, NULL);
        gets(c[i].end);
        printf("Digite a idade: ");
        scanf("%i", &c[i].idade);
    }
    return c;
}