#include <stdio.h>

void dividNum(float numr, int *numint, float *numDec);

int main(int arc, char **argv){
    
    return 0;
}

void dividNum(float numr, int *numint, float *numDec){
    *numint = numr;
    *numDec = numr - (float)  *numint;
}
