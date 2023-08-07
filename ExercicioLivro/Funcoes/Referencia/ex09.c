#include <stdio.h>
#include <string.h>

typedef struct{
    int matricula;
    char nome[20];
    float notas[3];
}aluno;

int maiorNota(aluno *vetorAluno, int len);

int main(int argc, char *argv[]){
    int n, maiorMat;
    scanf("%i", &n);
    aluno alunoVec[n];
    for(int i = 0; i < n; i++){
        printf("Digite a matricula: ");
        scanf("%i", &alunoVec[i].matricula);
        printf("Digite o nome do aluno: ");
        setbuf(stdin, NULL);
        gets(alunoVec[i].nome);
        printf("Digite as notas: ");
        scanf("%f %f %f", &alunoVec[i].notas[0], &alunoVec[i].notas[1], &alunoVec[i].notas[2]);

    }
    maiorMat = maiorNota(alunoVec, n);
    printf("O aluno com maior maior nota e o de matricula: %i", maiorMat);
}

int maiorNota(aluno *vetorAlunos, int len){
    int matricula = vetorAlunos[0].matricula;
    float maiorMedia = (vetorAlunos[0].notas[0] + vetorAlunos[0].notas[1] + vetorAlunos[0].notas[2]) / 3;
    float mediaTemp;

    for(int i = 1; i < len; i++){
        mediaTemp = (vetorAlunos[i].notas[0] + vetorAlunos[i].notas[1] + vetorAlunos[i].notas[2]) / 3 ;
        if(mediaTemp > maiorMedia){
            matricula = vetorAlunos[i].matricula;
            maiorMedia = mediaTemp;
        }
    }

    return matricula;
}