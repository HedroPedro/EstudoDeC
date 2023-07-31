#include <stdio.h>

void mediaDeAluno(float *alunos, float *mediaAl, int len);

int main(){
    float alunos[6], media;
    for(int i = 0; i < 6; i++){
        printf("Digite a nota do %i. aluno: ", i+1);
        scanf("%f", &alunos[i]);
    }
    mediaDeAluno(alunos, &media, 6);
    printf("A media e: %f", media);
}

void mediaDeAluno(float *alunos, float* mediaAl, int len){
    int i = 0;
    float media = 0;
    for(i; i < len; i++){
        media += alunos[i];
    }
    *mediaAl = media/i;
}