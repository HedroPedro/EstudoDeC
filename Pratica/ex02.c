#include <stdio.h>

int main(){
    int coluna, linha, i, j;
    printf("Digite a quantidade de alunos: ");
    scanf("%i", &coluna);
    printf("Digite a quantidade de notas: ");
    scanf("%i", &linha);
    float notas[coluna][linha];
    for(i = 0; i < coluna; i++){
        for(j = 0; j < linha; j++){
            printf("Digite a %i. nota do %i. aluno: ", j+1, i+1);
            scanf("%f", &notas[i][j]);
            notas[i][j] *= 5;
        }
    }
    for(i = 0; i < coluna; i++){
        printf("%i. aluno: ", i+1);
        for(j = 0; j < linha; j++){
            printf("%.2f  ", notas[i][j]);
        }
        printf("\n");
    }
}