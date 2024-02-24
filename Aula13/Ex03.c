#include <stdio.h>

#define SIZE 20
#define PATH "Ex03.txt"

int main(void){
    int a[SIZE], b[SIZE], i;
    FILE *fp = fopen(PATH, "w");
    
    if(!fp){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    for(i = 0; i < SIZE; i++){
        printf("Digite um numero para a %i. posicao: ", i+1);
        scanf("%i", a+i);
        fprintf(fp, "%i\n", a[i]);
    }

    fclose(fp);

    fp = fopen(PATH, "r");

    if(!fp){
        return 1;
    }

    for(i = 0; i < SIZE; i++){
        fscanf(fp, "%i\n", &b[i]);
        printf("%i ", b[i]);
    }

    fclose(fp);
}