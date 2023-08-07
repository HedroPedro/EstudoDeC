#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct knn{
    float p[4];
    int classeR;
} knn;

int main(void){
    FILE *arquivoTeste =  fopen("IrisTeste.txt", "r");
    FILE *arquivoTreino =  fopen("IrisTreino.txt", "r");
    float menorDist = 2, dist;
    knn knnTeste, knnTreino;
    int i = 0, k = 0, totAcerto = 0, classeRTemp;

    if(arquivoTeste == NULL || arquivoTreino == NULL){
        return 1;
    }
    while(i < 105){ //Hax: feof com problema
        fscanf(arquivoTeste,"%f,%f,%f,%f,%i", &knnTeste.p[0], &knnTeste.p[1], &knnTeste.p[2], &knnTeste.p[3], &knnTeste.classeR);
        while(k < 45){
            fscanf(arquivoTreino, "%f,%f,%f,%f,%i\n", &knnTreino.p[0], &knnTreino.p[1], &knnTreino.p[2], &knnTreino.p[3], &knnTreino.classeR);
            dist = sqrt(pow(knnTeste.p[0]-knnTreino.p[0], 2) + pow(knnTeste.p[1]-knnTreino.p[1], 2)
            + pow(knnTeste.p[2]-knnTreino.p[2], 2) + pow(knnTeste.p[3]-knnTreino.p[3], 2));
            if(dist < menorDist){
                menorDist = dist;
                classeRTemp = knnTreino.classeR;
            }
            k++;
        }
        if(classeRTemp == knnTeste.classeR)
            totAcerto++;
        fclose(arquivoTreino);
        arquivoTreino =  fopen("IrisTreino.txt", "r");
        k = 0;
        menorDist = 1;
        i++;
    }
    float percAcer = (float) totAcerto*100/105;
    printf("%.2f%%", percAcer);
    fclose(arquivoTeste);
    return 0;
}