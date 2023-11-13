#include <stdio.h>
#include <string.h>

#define ABC "abcdefghijklmnopqrstuvwxyz"
#define MAXSIZE 257

void inverterString(char str[], char strInver[]);
void cripografarStr(char str[], char charSet[]);

int main(){
    char string[MAXSIZE];
    char charSet[strlen(ABC)+1];
    inverterString(ABC, charSet);
    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    fgets(string, MAXSIZE-2, stdin);
    setbuf(stdin, NULL);
    cripografarStr(string, charSet);
    puts(string);
}

void cripografarStr(char str[], char charSet[]){
    for(size_t i = 0; i < strlen(str); i++){
        for(size_t j = 0; j < strlen(charSet); j++){
            if(str[i] == charSet[j]){
                str[i] = 'a'+j;
                break;
            }
        }
    }
}

void inverterString(char str[], char strInver[]){
    int j = 0;
    for(int i = strlen(str)-1; i >= 0; i--){
        strInver[j] = str[i];
        j++;
    }
    strInver[j] = '\0';
}