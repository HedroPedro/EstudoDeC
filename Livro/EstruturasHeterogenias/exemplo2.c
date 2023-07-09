#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union numEChar{
    short int x;
    unsigned char c[2];
};

int main(){
    union numEChar i;
    i.x = 1545;
    printf("x = %d\n", i.x);
    printf("c = %c\n", i.c);
    i.c[0] = 69;
    i.c[1] = 0;
    printf("\nx = %d\n", i.x);
    printf("c = %c\n", i.c);
}