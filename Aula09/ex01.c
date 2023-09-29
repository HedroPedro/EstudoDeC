#include <stdio.h>
#include <string.h>

#define MAXSIZE 257

void inverterString(char str[], char strInver[]);

int main(void){
    char string[MAXSIZE];
    printf("Digite uma string");
    setbuf(stdin, NULL);
    fgets(string,  MAXSIZE-2, stdin);
    char strInver[strlen(string)+1];
    inverterString(string, strInver);
    puts(strInver);
}

void inverterString(char str[], char strInver[]){
    int j = 0;
    for(int i = strlen(str)-1; i >= 0; i--){
        strInver[j] = str[i];
        j++;
    }
    strInver[j] = '\0';
}