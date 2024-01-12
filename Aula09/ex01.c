#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 257

int main(){
    char string[MAXSIZE];
    int i = 0;
    printf("Digite uma string: ");
    fgets(string, MAXSIZE-2, stdin);
    for(i; i < strlen(string); i++){
        if((string[i] == 'A' || string[i] == 'E' || string[i] == 'I'|| string[i] == 'O' || string[i] == 'U') 
        || (string[i] == 'a' || string[i] == 'e' || string[i] == 'i'|| string[i] == 'o' || string[i] == 'u')){
            string[i] = '*';
        }
    }
    for(i = 0; i < strlen(string); i++){
        putchar(string[i]);
    }
}