#include <stdio.h>
#include <stdlib.h>

struct livro {
    char titulo[30];
    int numRegistro;
    double preco;
};


void gravarDadosFormatados(struct livro *livroPtr);
void lerDadosFormatados();

int main(){
    struct livro livroTmp;
    char opcao;
    while(1){
        printf("Digite o titulo: ");
        setbuf(stdin, NULL);
        fgets(livroTmp.titulo, 30 , stdin);
        printf("Digite o numero de registro: ");
        scanf("%i", &livroTmp.numRegistro);
        printf("Digite o preco do livro: ");
        scanf("%lf", &livroTmp.preco);
        printf("Deseja continuar digitando? (N para nao): ");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
        gravarDadosFormatados(&livroTmp);
        if(opcao == 'N' || opcao == 'n')
            break;
    }

    lerDadosFormatados();
}

void gravarDadosFormatados(struct livro *livroPtr){
    FILE *file = fopen("Ex02.txt", "a"); 
    if(!file){
        printf("Erro ao criar arquivo");
        fclose(file);
        return;
    }

    fprintf(file, "Titulo: %s", livroPtr->titulo);
    fprintf(file, "Numero de Registro: %i\n", livroPtr->numRegistro);
    fprintf(file, "Preco: %lf\n", livroPtr->preco);

    fclose(file);
}

void lerDadosFormatados(){
    struct livro livroHolder;
    FILE *file = fopen("Ex02.txt", "r");
    if(!file){
        fclose(file);
        return;
    }
    while(!feof(file)){
        fscanf(file, "Titulo: %s\n", livroHolder.titulo);
        fscanf(file, "Numero de Registro: %i\n", &livroHolder.numRegistro);
        fscanf(file, "Preco: %lf\n", &livroHolder.preco);
        printf("Titulo: %s\n", livroHolder.titulo);
        printf("Numero de Registro: %i\n", livroHolder.numRegistro);
        printf("Preco: %lf\n", livroHolder.preco);
    }

    fclose(file);
}