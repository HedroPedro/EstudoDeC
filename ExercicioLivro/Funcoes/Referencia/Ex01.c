#include <stdio.h>

void dividNum(float *numr, int *numint, float *numDec);

int main(int arc, char *argv[]){
    int numInt;
    float num, parteDec;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    dividNum(&num, &numInt, &parteDec);
    printf("%i e %f", numInt, parteDec);
    return 0;
}

void dividNum(float* numr, int *numint, float *numDec){
    *numint = (int)*numr;
    *numDec = *numr - (float)  *numint;
}
