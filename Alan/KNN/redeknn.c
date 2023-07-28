#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//////////////////////////////////////////////////////////////////////////////////////////////////// 
// A ideia desse código é montar um KNN                                                           //
// Utilizamos um struct para agrupar os dados Iris considerando                                   //
//que todos os dados do arquivo possuem 4 pontos reais e a sua classe representada por um inteiro //
// Entramos em um loop dentro de outro loop para calcular a distancia e verificarmos se a         //
//distancia e caso seja menor que a menor distancia, inicialmente 1, uma variavel armazena a      //
//classe de treino e adiante checa se a classe armazenada e igual a classe de teste               //
////////////////////////////////////////////////////////////////////////////////////////////////////


typedef struct knn{
    float p[4];
    int classeR;
} knn;

int main(int agrc, char **argv){
    FILE *arquivoTeste =  fopen("IrisTeste.txt", "r");
    FILE * arquivoTreino = fopen("IrisTreino.txt", "r");
    float menorDist = 1, dist = 0, porcAcer;
    knn knnTeste, knnTreino;
    int totAcerto = 0, classeP, i;

    if(arquivoTeste == NULL || arquivoTreino == NULL) //Checa se um dos arquivos esta vazio
        return 1;

    while(!feof(arquivoTeste)){
        for(i = 0; i < 4; i++)//Inicializa os pontos do KNN teste
            fscanf(arquivoTeste,"%f,", &knnTeste.p[i]);
        fscanf(arquivoTeste,"%d", &knnTeste.classeR);
        while(!feof(arquivoTreino)){
            for(i = 0; i < 4; i++) //Inicializa os pontos do KNN treino
                fscanf(arquivoTreino,"%f,", &knnTreino.p[i]); 
            fscanf(arquivoTreino,"%d,", &knnTreino.classeR);
            dist = sqrtf(powf(knnTeste.p[0]-knnTreino.p[0], 2) + 
            powf(knnTeste.p[1]-knnTreino.p[1], 2) + 
            powf(knnTeste.p[2]-knnTreino.p[2], 2) + powf(knnTeste.p[3]-knnTreino.p[3], 2)); //Calculo da distancia
            if(dist < menorDist){
                menorDist = dist;
                classeP = knnTreino.classeR;
            }
        }
        rewind(arquivoTreino); //Reinicia o arquivo
        menorDist = 1;
        if(classeP == knnTeste.classeR)
            totAcerto++;
    }

    //Fechamento de arquivos e calculo de porcentagem
    fclose(arquivoTeste);
    fclose(arquivoTreino);
    porcAcer  = (float) totAcerto*100/45;

    printf("%i\n%.2f%%", totAcerto, porcAcer);
    return 0;
}