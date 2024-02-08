#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TMPSIZE 101

typedef struct livro{
    int cod;
    char *titulo, *autor, *assunto;
} livro;

int exitsLivroById(int cod, livro *livros, int size){
    for(int i = 0; i < size; i++){
        if(livros[i].cod == cod)
            return 1;
    }
    return 0;
}

int main(void){
    int size, cod;
    char tmpStr[TMPSIZE];
    livro *livros;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &size);
    livros = (livro *) malloc(size * sizeof(livro));
    for(int i = 0; i < size; i++){
        printf("Digite o codigo do %i. livro: ", i+1);
        scanf("%i", &livros[i].cod);
        printf("Digite o titulo do %i. livro: ", i+1);
        setbuf(stdin, NULL);
        gets_s(tmpStr, TMPSIZE);
        livros[i].titulo = malloc((strlen(tmpStr)+1) * sizeof(char));
        strcpy(livros[i].titulo, tmpStr);
        printf("Digite o autor do %i. livro: ", i+1);
        setbuf(stdin, NULL);
        gets_s(tmpStr, TMPSIZE);
        livros[i].autor = malloc((strlen(tmpStr)+1) * sizeof(char));
        strcpy(livros[i].autor, tmpStr);
        printf("Digite o assunto do %i. livro: ", i+1);
        setbuf(stdin, NULL);
        gets_s(tmpStr, TMPSIZE);
        livros[i].assunto = malloc((strlen(tmpStr)+1) * sizeof(char));
        strcpy(livros[i].autor, tmpStr);
    }

    printf("Digite o codigo que deseja procurar: ");
    scanf("%i", &cod);
    if(exitsLivroById(cod, livros, size)){
        printf("Existe o livro de cod %i\n", cod);
        goto EXIT;
    }
    printf("Nao existe o livro de cod %i\n", cod);
    EXIT:
    for(int i = 0; i < size; i++){
        free(livros[i].titulo);
        free(livros[i].autor);
        free(livros[i].assunto);
    }
    free(livros);
}