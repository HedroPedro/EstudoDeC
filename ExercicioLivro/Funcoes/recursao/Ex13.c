#include <stdio.h>

float soma(int n){
    if(n == 1)
        return 2.;
    return (float) (1+n*n)/n + soma(n-1);
}

int main(void){
    printf("%.2f", soma(2));
}