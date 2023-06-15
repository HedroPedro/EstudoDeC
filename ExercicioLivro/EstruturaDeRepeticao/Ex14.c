#include <stdio.h>

int main(){
    int num, lastnum, resultnum = 0;
    int tempnum = 1;
    printf("Digite um numero inteiro que nao seja negativo: ");
    scanf("%i", &num);
    for(int i = 0; i < num+1; i++){
        printf("%i... ", resultnum);
        resultnum += tempnum;
        tempnum = lastnum;
        lastnum = resultnum;
    }
}