#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq;
    char string[100];
    int i;
    arq = fopen("arquivo.txt", "w");
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    printf("Digite uma string para ser gravada no arquivo: ");
    fgets(string, 98, stdin);

    for(i = 0; i < strlen(string)-1; i++)
        fputc(string[i], arq);

    fclose(arq);
    return 0;
}