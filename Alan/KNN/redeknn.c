#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// A ideia desse código é montar um KNN
// Utilizamos um struct para agrupar os dados de 

typedef struct knn{
    float p[4];
    int classeR;
} knn;

int main(int agrc, char **argv){
    FILE *arquivoTeste =  fopen("IrisTeste.txt", "r");
    FILE * arquivoTreino = fopen("IrisTreino.txt", "r");
    float menorDist = 1, dist = 0;
    knn knnTeste, knnTreino;
    int totAcerto = 0, classeP, i;

    if(arquivoTeste == NULL || arquivoTreino == NULL)
        return 1;

    while(!feof(arquivoTeste)){
        for(i = 0; i < 4; i++)
            fscanf(arquivoTeste,"%f,", &knnTeste.p[i]); //Inicializa os pontos de KNN Teste
        fscanf(arquivoTeste,"%d", &knnTeste.classeR);
        while(!feof(arquivoTreino)){
            for(i = 0; i < 4; i++)
                fscanf(arquivoTreino,"%f,", &knnTreino.p[i]); //Inicializa os pontos de KNN Treino
            dist = sqrtf(powf(knnTeste.p[0]-knnTreino.p[0], 2) + 
            powf(knnTeste.p[1]-knnTreino.p[1], 2) + 
            powf(knnTeste.p[2]-knnTreino.p[2], 2) + powf(knnTeste.p[3]-knnTreino.p[3], 2));
            fscanf(arquivoTreino,"%d,", &knnTreino.classeR);
            if(dist < menorDist){
                menorDist = dist;
                classeP = knnTreino.classeR;
            }
        }
        fclose(arquivoTreino);
        arquivoTreino = fopen("IrisTreino.txt", "r");
        menorDist = 1;
        if(classeP == knnTeste.classeR)
            totAcerto++;
    }

    fclose(arquivoTeste);
    fclose(arquivoTreino);

    float porcAcer = (float) totAcerto*100/45;
    printf("%i\n%.2f%%", totAcerto, porcAcer);
    return 0;
}