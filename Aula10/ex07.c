#include <stdio.h>
#define MAXSIZE 255

typedef unsigned int uint;

typedef struct{
    int cod;
    char descricao[MAXSIZE];
    float preco;
} produto;

int main(){
    uint n, i;
    int qtd, cod = 1, temCod;
    printf("Digite quantos produtos serao cadastrados: ");
    scanf("%u", &n);
    produto produtos[n];
    for(i = 0; i < n; i++){
        printf("Digite o codigo: ");
        scanf("%i", &produtos[i].cod);
        printf("Digite a descricao do produto: ");
        setbuf(stdin, NULL);
        gets_s(produtos[i].descricao, MAXSIZE);
        printf("Digite o preco do produto: ");
        scanf("%f", &produtos[i].preco);
    }

    while(1){
        printf("Digite o codigo: ");
        scanf("%i", &cod);
        if(!cod)
            break;
        printf("Digite a quantidade: ");
        scanf("%i", &qtd);
        for(i = 0; i < n; i++){
            if(produtos[i].cod == cod){
                temCod = 1;
                break;
            }
        }
        if(!temCod || qtd < 0)
            printf("Pedido invalido!\n");
        temCod = 0;
    }
}