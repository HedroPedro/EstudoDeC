#include <stdio.h>

float raiz(int x, int y);

int main(void){
    printf("%.2f\n", raiz(2, 0));
    printf("%.2f\n", raiz(2, 3));
    printf("%.2f\n", raiz(2, -1));
}

float raiz(int x, int y){
    if(y == 0)
        return 1;
    else if(y < 0)
        return (float) 1/ x*raiz(x, y+1);
    return x *raiz(x, y-1);
}