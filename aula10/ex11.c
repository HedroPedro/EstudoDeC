#include <stdio.h>

#define MAXSIZE 100

int totalPalavras(char *str);

int main(){
    char str[MAXSIZE];
    printf("Digite uma string de 100 caracteres: ");
    getc(stdin);
    fgets(str, MAXSIZE, stdin);
    printf("Teve %i palavras", totalPalavras(str));
}

int totalPalavras(char *str){
    int palavra = 1;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ' && ( str[i+1] != ' ' || str[i+1] != '\n'))
            palavra++;
    }
    return palavra;
}