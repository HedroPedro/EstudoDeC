#include <stdio.h>

int somacubica(int n);

int main(){
    printf("A soma cubica foi: %i", somacubica(3));
}

int somacubica(int n){
    if(n == 1)
        return 1;
    return n*n*n+somacubica(n-1);
}