#include <stdio.h>

int fibbo(int count, int n1, int n2, int fibbo);

int fibboStart(int n);

int main(){
    printf("%i", fibboStart(1));
}

int fibboStart(int n){
    return n == 0 ? 0 : fibbo(n, 0, 1, 0);
}

int fibbo(int count, int n1, int n2, int fibo){
    n1 = n2;
    n2 = fibo;
    fibo = n1 + n2;
    if(count == 0){
        return fibo;
    }
    return fibbo(count-1, n1, n2, fibo);
    
}