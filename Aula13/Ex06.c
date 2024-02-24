#include <stdio.h>

void gravarDados(int tamL, int tamC, int matriz[][tamC]){
    int i, j;
    FILE *fp = fopen("Ex06.txt", "w");
    if(!fp){
        return;
    }

    for(i = 0; i < tamL; i++){
        for(j = 0; j < tamC; j++){
            fprintf(fp, "%i ", matriz[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
}

int main(void){
    int lin, col, i, j;
    printf("Digite o tamanho da linha e coluna: ");
    scanf("%i %i", &lin, &col);
    int matrix[lin][col];
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Digite o valor de [%i %i]: ", i, j);
            scanf("%i", &matrix[i][j]);
        }
    }

    gravarDados(lin, col, matrix);
}