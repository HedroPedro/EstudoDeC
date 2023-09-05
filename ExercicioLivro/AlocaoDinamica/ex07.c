#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTAM 512

int tamanhoString(char *string);

int compareString(char *str1, char *str2);

int umaStringEstaNaOutra(char *str1, char *str2);

int main(){
    char *string1 = (char * ) malloc(sizeof(char) * 512), *string2 = (char * ) malloc(sizeof(char) * 512);
    fgets(string1, 512, stdin);
    fgets(string2, 512, stdin);
    if(umaStringEstaNaOutra(string1, string2) == 1)
        printf("Esta presente na outra");
    else
        printf("Nao esta presente na outra");
}

int tamanhoString(char *string){
    int count = 0;
    while(*(string+count) != '\0')
        count++;

    return count;
}

int compareString(char *str1, char *str2){
    int soma1 = 0, soma2 = 0, i = 0;
    for(i; i < tamanhoString(str1); i++)
        soma1 += (int) *(str1+i);

    for(i = 0; i < tamanhoString(str2); i++)
        soma2 += (int) *(str2+i);
    
    return soma1-soma2;
}

int umaStringEstaNaOutra(char *str1, char *str2){
    int tamStr1 = tamanhoString(str1), tamStr2 = tamanhoString(str2);
    
    return 0;
}