#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TMPSIZE 101

typedef struct aluno{
    char *nome, *sobrenome;
    float nota;
} aluno;

void alunoMaiorNota(aluno *vetAlunos, int tam);

int main(void){
    char tmpStr[TMPSIZE], opcao;
    aluno *vetAlunos;
    int n = 1;
    vetAlunos = (aluno *) malloc(n * sizeof(aluno));
    while(1){
        printf("Digite o nome do aluno: ");
        setbuf(stdin, NULL);
        gets_s(tmpStr, TMPSIZE);
        vetAlunos[n-1].nome = (char *) malloc((strlen(tmpStr)+1) * sizeof(char));
        strcpy(vetAlunos[n-1].nome, tmpStr);
        printf("Digite o sobrenome do aluno: ");
        setbuf(stdin, NULL);
        gets_s(tmpStr, TMPSIZE);
        vetAlunos[n-1].sobrenome = (char *) malloc((strlen(tmpStr)+1) * sizeof(char));
        strcpy(vetAlunos[n-1].sobrenome, tmpStr);
        printf("Digite a nota do aluno: ");
        scanf("%f", &vetAlunos[n-1].nota);
        printf("Deseja inserir mais alunos? (S para continuar inserindo:) ");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
        if(opcao != 'S')
            break;
        n++;
        vetAlunos = (aluno *) realloc(vetAlunos, sizeof(aluno) * n);
    }

    alunoMaiorNota(vetAlunos, n);
}

void alunoMaiorNota(aluno *vetAlunos, int tam){
    aluno alunoMNota = vetAlunos[0];
    for(int i = 1; i < tam; i++){
        if(alunoMNota.nota < vetAlunos[i].nota)
            alunoMNota = vetAlunos[i];
    }  
    printf("%s %s teve a maior nota", alunoMNota.nome, alunoMNota.sobrenome);
}