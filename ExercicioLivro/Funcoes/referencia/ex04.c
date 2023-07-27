#include <stdio.h>

float mediaDeAluno(float *alunos, int len);

int main(){

}

float mediaDeAluno(float *alunos, int len){
    int i = 0;
    float media = 0;
    for(i; i < len; i++){
        media += alunos[i];
    }
    return media/i;
}