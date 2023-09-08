#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *inverterString(char *string, int tam);

int main(void){
    char string[255];
    fgets(string, 255, stdin);
    char *stringInvertida = inverterString(string, strlen(string)-1);
    for(int i = 0; i < strlen(stringInvertida); i++){
        printf("%c", stringInvertida[i]);
    }
}

char *inverterString(char *string, int tam){
    char *stringInver = (char *) malloc(sizeof(char) * (tam+1));
    int i = 0;
    for(tam; tam > -1; tam--){
        stringInver[i] = string[tam];
        i++;
    }
    stringInver[i] = '\0';
    return stringInver;
}