#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    char c;
    arq = fopen("arquivo.txt", "r");

    if(arq == NULL){
        printf("Erro na abertura de arquivo");
        system("pause");
        exit(1);
    }

    while((c = fgetc(arq)) != EOF)
        printf("%c", c);
    printf("\n");
    fclose(arq);
    system("pause");
    return 0;
}