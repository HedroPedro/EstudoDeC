#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
    char rua[50];
    int numero;
};

struct cadastro{
    char nome[50];
    int idade;
    struct endereco end;
};

int main(){
    struct cadastro c[4];
    for(int i = 0; i < 4; i++){
        gets(c[i].nome);
        scanf("%d", &c[i].idade);
        gets(c[i].end.rua);
        scanf("%d", &c[i].end.numero);
    }


}