#include <stdio.h>
#define MAXSTR 255
#define SIZE 2

typedef struct aluno{
    char nome[MAXSTR];
    unsigned int idade;
    float altura, peso;
} aluno;

void mostraMaisNovoEMaisPeso(aluno *alunos, int size);

int main(void){
    aluno alunos[SIZE];
    for(int i = 0; i < SIZE; i++){
        printf("Digite o nome: ");
        setbuf(stdin, NULL);
        gets_s(alunos[i].nome, MAXSTR);
        printf("Digite a idade: ");
        scanf("%u", &alunos[i].idade);
        printf("Digite a altura: ");
        scanf("%f", &alunos[i].altura);
        printf("Digite o peso: ");
        scanf("%f", &alunos[i].peso);
    }

    mostraMaisNovoEMaisPeso(alunos, SIZE);
}

void mostraMaisNovoEMaisPeso(aluno *alunos, int size){
    aluno alunoPesoM = alunos[0], alunoNovo = alunos[0];
    for(int i = 1; i < size; i++){
        if(alunoNovo.idade > alunos[i].idade)
            alunoNovo = alunos[i];
        if(alunoPesoM.peso < alunos[i].peso)
            alunoPesoM = alunos[i];
    }

    printf("O aluno com maior peso e: %s\n", alunoPesoM.nome);
    printf("O aluno mais novo e: %s\n", alunoNovo.nome);
}