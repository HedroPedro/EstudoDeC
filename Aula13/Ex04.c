#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXPATH 129

int main(){
    char filePath[MAXPATH], *content = (char *) malloc(sizeof(char));
    FILE *currentFile;
    int qtd = 1;
    printf("Digite o nome do primeiro arquivo: ");
    setbuf(stdin, NULL);
    fgets(filePath, MAXPATH, stdin);
    filePath[strcspn(filePath, "\n")] = '\0';
    currentFile = fopen(filePath, "r");
    if(!currentFile){
        return 0;
    }
    while(!feof(currentFile)){
        content[qtd-1] = fgetc(currentFile);
        printf("%i", content[qtd-1]);
        qtd++;
        content = (char *) realloc(content, sizeof(char) * qtd);
    }
    content[strcspn(filePath, "\r")] = '\0';
    fclose(currentFile);
    currentFile = fopen("Ex04.txt", "a");
    if(!currentFile){
        return 0;
    }
    fputs(content, currentFile);
    fclose(currentFile);
    content = realloc(content, sizeof(char));
    strcpy(content, "\0");
    printf("Digite o nome do segundo arquivo: ");
    setbuf(stdin, NULL);
    fgets(filePath, MAXPATH, stdin);
    filePath[strcspn(filePath, "\n")] = '\0';
    qtd = 1;
    currentFile = fopen(filePath, "r");
    while(!feof(currentFile)){
        content[qtd-1] = fgetc(currentFile);
        printf("%i", content[qtd-1]);
        qtd++;
        content = (char *) realloc(content, sizeof(char) * qtd);
    }
    content[strcspn(filePath, "\r")] = '\0';
    fclose(currentFile);
    currentFile = fopen("Ex04.txt", "a");
    fputs(content, currentFile);
    fclose(currentFile);
    free(content);
}