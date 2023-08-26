#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    long matricula;
    char nome[20];
    float n1, n2, n3;
}aluno;

int main(void){
    printf("A struct aluno ocupa um total de %ld bytes", sizeof(aluno));
}