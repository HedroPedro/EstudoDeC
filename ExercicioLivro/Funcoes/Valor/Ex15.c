#include <stdio.h>

void geraPiramide(int n);

int main(int argc, char *argv[]){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
    geraPiramide(num);
}

void geraPiramide(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("!");
        }
        printf("\n");
    }    
}