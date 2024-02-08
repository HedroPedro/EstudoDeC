#include <stdio.h>
#include <string.h>
#define MAXTAM 50

typedef struct cadastro{
    int matricula;
    char nome[50];
    float nota;
} cadastro;

void mostraStatus(cadastro *cadastros, unsigned int size);

float calculaMedia(cadastro *cadastros, unsigned int size);

void maiorNota(cadastro *cadastros, unsigned int size);

int main(){
    cadastro cadastrosAlunos[MAXTAM];
    unsigned int i;
    char opcao;
    for(i = 0; i < MAXTAM; i++){
        printf("Digite a matricula: ");
        scanf("%i", &cadastrosAlunos[i].matricula);
        printf("Digite o nome: ");
        setbuf(stdin, NULL);
        gets_s(cadastrosAlunos[i].nome, MAXTAM);
        printf("Digite a sua nota: ");
        scanf("%f", &cadastrosAlunos[i].nota);
        printf("Deseja continuar cadastrando? (S para sim): ");
        setbuf(stdin, NULL);
        opcao = getc(stdin);
        if(opcao != 'S')
            break;
    }
    i++;
    mostraStatus(cadastrosAlunos, i);
    printf("Nota media foi: %.2f\n", calculaMedia(cadastrosAlunos, i));
    maiorNota(cadastrosAlunos, i);

}

void mostraStatus(cadastro *cadastros, unsigned int size){
    for(unsigned int i = 0; i < size; i++){
        printf("Nota: %.2f; Situação: ", cadastros[i].nota);
        if(cadastros[i].nota >= 7){
            printf("aprovado\n");
        }else if(cadastros[i].nota < 4){
            printf("reprovado\n");
        }else{
            printf("exame\n");
        }
    }
}

float calculaMedia(cadastro *cadastros, unsigned int size){
    float media = 0;
    for(unsigned int i =0; i < size; i++){
        media += cadastros[i].nota;
    }
    return ((float) media/size);
}

void maiorNota(cadastro *cadastros, unsigned int size){
    char alunoComMaiorNota[50];
    float maiorNota = cadastros[0].nota;
    strcpy(alunoComMaiorNota, cadastros[0].nome);
    for(unsigned int i = 1; i < size; i++){
        if(maiorNota < cadastros[i].nota){
            strcpy(alunoComMaiorNota, cadastros[i].nome);
        }
    }
    printf("A maior nota foi do aluno(a) %s\n", alunoComMaiorNota);
}