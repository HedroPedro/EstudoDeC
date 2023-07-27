#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/////// A ideia desse código é montar um KNN

typedef struct knn{
    float p1, p2, p3, p4;
    int classeR;
} knn;

int main(int agrc, char **argv){
    FILE *arquivos[2] =  {fopen("IrisTeste.txt", "r"), fopen("IrisTreino.txt", "r")};
    float menorDist = 2, dist;
    knn knnTeste, knnTreino;
    int totAcerto = 0, classeRTemp;

    if(arquivos[0] == NULL || arquivos[1] == NULL){
        return 1;
    }

    /*while(!feof(arquivoTeste)){
        fscanf(arquivoTeste,"%f,%f,%f,%f,%i", &knnTeste.p[0], &knnTeste.p[1], &knnTeste.p[2], &knnTeste.p[3], &knnTeste.classeR);
        while(!feof(arquivoTreino)){
            fscanf(arquivoTreino, "%f,%f,%f,%f,%i\n", &knnTreino.p[0], &knnTreino.p[1], &knnTreino.p[2], &knnTreino.p[3], &knnTreino.classeR);
            dist = sqrtf(powf(knnTeste.p[0]-knnTreino.p[0], 2) + powf(knnTeste.p[1]-knnTreino.p[1], 2)
            + powf(knnTeste.p[2]-knnTreino.p[2], 2) + powf(knnTeste.p[3]-knnTreino.p[3], 2));
            if(dist < menorDist){
                menorDist = dist;
                classeRTemp = knnTreino.classeR;
            }
        }
        if(classeRTemp == knnTeste.classeR)
            totAcerto++;
        classeRTemp = 0; 
        fclose(arquivoTreino);
        arquivoTreino =  fopen("IrisTreino.txt", "r");
        menorDist = 1;
    }*/

    for(int i = 0; i < 45; i++){
        fread(&knnTeste, sizeof(knn), 5, arquivoTeste);
        for(int j = 0; j < 105; j++){
            fread(&knnTreino, sizeof(knn), 5, arquivoTeste);
        }
    }

    float porcAcer = (float) totAcerto*100/45;
    printf("%i\n%.2f%%", totAcerto, porcAcer);
    fclose(arquivoTeste);
    return 0;
}