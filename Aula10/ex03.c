#include <stdio.h>
#define MAXBUFF 255

typedef struct usuario{
    char nome[MAXBUFF];
    unsigned int idade;
    char sexo;
    char estadoCivil;
    unsigned int qtdAmigos;
    unsigned int qtdFotos;
} usuario;

int main(void){
    int size;
    printf("Digite quantos usuarios deseja cadastrar: ");
    scanf("%i", &size);
    usuario usuarios[size];
    for(int i = 0; i < size; i++){
        printf("Digite o nome do usuario: ");
        setbuf(stdin, NULL);
        gets_s(usuarios[i].nome, MAXBUFF);
        printf("Digite a idade do usuario: ");
        scanf("%u", &usuarios[i].idade);
        printf("Digite o sexo (f - Mulher | m - Homem): ");
        getchar();
        usuarios[i].sexo = getc(stdin);
        printf("Digite o estado civil (s - Solteiro | c - Casado | n - Namorando | d - Divorciado): ");
        getchar();
        usuarios[i].estadoCivil = getc(stdin);
        printf("Digite a quantidade de amigos: ");
        scanf("%u", &usuarios[i].qtdAmigos);
        printf("Digite a quantidade de fotos: ");
        scanf("%u", &usuarios[i].qtdFotos);
    }

    for(int i = 0; i < size; i++){
        printf("---------\n"); 
        printf("Nome: %s\nIdade: %u\n", usuarios[i].nome, usuarios[i].idade);
        printf("Sexo: %c\nEstado civil: %c\n", usuarios[i].sexo, usuarios[i].estadoCivil);
        printf("Quantidade de amigos: %u\nQuantidade de fotos: %u\n", usuarios[i].qtdAmigos, usuarios[i].qtdFotos);
        printf("---------\n");    
    }

}