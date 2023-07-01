#include <stdio.h>

int main(){
    int notas[10][3], i, j, menorNota;
    int classificador[3] = {0, 0, 0};
    int n = 0;
    for(i = 0; i < 10; i++){
        printf("Digite as notas do %i. aluno: ");
        scanf("%i %i %i", &notas[i][0], &notas[i][1], &notas[i][2]);
    }
    for(i = 0; i < 10; i++){
        menorNota = notas[i][0];
        for(j = 1; j < 3; j++){
            if(menorNota > notas[i][j]){
                menorNota = notas[i][j];
                n = j;
            }
        }
        classificador[n] += 1;
        n = 0;
    }

    for(i = 0; i < 3; i++){
        printf("A quantidade de alunos que tiveram a pior nota na %i prova: \n", classificador[i]);
    }
}