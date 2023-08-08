#include <stdio.h>

#define TEMP 5

int ultnumcount(int vetor[], int len);

int main(int argc, char *argv[]){
    int vetor[TEMP], i;
    for(i = 0; i < TEMP; i++){
        scanf("%i", &vetor[i]);
    }
    printf("O total dos utlimo numero (%i) e: %i", vetor[TEMP-1], ultnumcount(vetor, TEMP));
}

int ultnumcount(int vetor[], int len){
    int ultiNum = vetor[len-1], numcount = 0;
    for(int i = 0; i < len; i++){
        if(vetor[i] == ultiNum)
            numcount++;
    }
    return numcount;
}