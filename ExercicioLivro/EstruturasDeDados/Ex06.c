#include <stdio.h>
#include <string.h>

typedef struct{
    char matricula[20];
    int notas[3];
    float media;
} aluno;

int main(){
    aluno alunos[3];
    float media3;
    for(int i = 0; i < 3; i++){
        printf("Digite o codigo do %i aluno: ", i+1);
        setbuf(stdin, NULL);
        gets(alunos[i].matricula);
        printf("Digite as notas desse aluno: ");
        scanf("%i %i %i", &alunos[i].notas[0], &alunos[i].notas[2], &alunos[i].notas[3]);
        alunos[i].media =  (alunos[i].notas[0]+alunos[i].notas[2]+alunos[i].notas[3])/3.0;
    }
    media3 = (alunos[0].media + alunos[1].media + alunos[2].media)/3.0;
    for(int i = 0; i < 3; i++){
        if(alunos[i].media > media3){
            printf("A media do aluno %i esta acima da media geral, %.2f \n", i+1,  alunos[i].media);
        }
    }
}