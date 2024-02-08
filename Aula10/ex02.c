#include <stdio.h>
#define MAXSIZE 100

typedef struct loja{
    char telefone[15];
    char endereco[MAXSIZE];
    char nome[MAXSIZE];
    float preco;
}loja;

int main(void){
    int i;
    float media = 0;
    loja lojas[100];
    char resp = ' ';
    for(i = 0; i < MAXSIZE; i++){
        printf("Digite o nome da loja: ");
        setbuf(stdin, NULL);
        gets_s(lojas[i].nome, MAXSIZE);
        printf("Digite o endereco: ");
        setbuf(stdin, NULL);
        gets_s(lojas[i].endereco, MAXSIZE);
        printf("Digite o telefone: ");
        setbuf(stdin, NULL);
        gets_s(lojas[i].telefone, 15);
        printf("Digite o preco do produto: ");
        scanf("%f", &lojas[i].preco);
        media += lojas[i].preco;
        printf("Deseja continuar? (S para continuar): ");
        setbuf(stdin, NULL);
        resp = getc(stdin);
        if(resp != 'S'){
            i++;
            break;
        }
    }
    media /= i;

    for(int j = 0; j < i; j++){
        if(lojas[j].preco < media){
            printf("A loja %s no endreco %s de telefone %s esta com produto abaixo da media", 
            lojas[j].nome, lojas[j].endereco, lojas[j].telefone);
        }
    }
}