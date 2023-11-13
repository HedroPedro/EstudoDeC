#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAXSIZE 257

bool str_Are_They_Equals(char str1[], char str2[]);

int main(){
    char str1[MAXSIZE], str2[MAXSIZE];
    printf("Digite uma string: ");
    fgets(str1, MAXSIZE-2, stdin);
    printf("Digite outra string: ");
    fgets(str2, MAXSIZE-2, stdin);
    if(str_Are_They_Equals(str1, str2))
        printf("As strings sao iguais");
    else
        printf("As strings nao sao iguais");
}

bool str_Are_They_Equals(char str1[], char str2[]){
    if(strlen(str1) != strlen(str2))
        return false;
    
    if(!strcmp(str1, str2))
        return true;

    return false;
}