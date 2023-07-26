#include <stdio.h>

int maiorFatorPrim(int num);

int main(){
    int n, maiorPrim;
    printf("Digite um numero: ");
    scanf("%i", &n);
    maiorPrim =  maiorFatorPrim(n);
    printf("O maior primo e %i", maiorPrim);
}

int maiorFatorPrim(int num){
    int maiorPrim = 0;
    for(int i = 1; i < num; i++){
        if(i*i == num)
            if(i > maiorPrim)
                maiorPrim = i;
    }
    return maiorPrim;
}