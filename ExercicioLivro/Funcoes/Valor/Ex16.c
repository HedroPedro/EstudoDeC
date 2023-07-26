#include <stdio.h>

void piramidebonita(int n);

int main(int argc, char *argv[]){
    int num;
    printf("Digite um numero: ");
    scanf("%i", &num);
    piramidebonita(num);
}

void piramidebonita(int n){
    int i;
    int j;
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }    
    for(i = n; i > 0; i--){
        for(j = 0; j < i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}