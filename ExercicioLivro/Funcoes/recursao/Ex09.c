#include <stdio.h>

int fatorial(int n);

int main(){
    printf("%i", fatorial(3));
}

int fatorial(int n){
    if(n == 1)
        return 1;
    return n*fatorial(n-1);
}