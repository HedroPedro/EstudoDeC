#include <stdio.h>
#include <string.h>

#define MAXSIZE 256

int count_char(const char desiredChar, const char string[]);

int main(void){
    char desiredChar, str[MAXSIZE-2];
    printf("Digite um caratere: ");
    scanf("%c", &desiredChar);
    setbuf(stdin, NULL);
    printf("Digite uma string: ");
    scanf("%255[^\n]s", str);
    printf("Foi digitado '%c' %i vezes", desiredChar, count_char(desiredChar, str));
}

int count_char(const char desiredChar, const char string[]){
    unsigned int count = 0;
    for(size_t i = 0; i < strlen(string); i++)
        if(string[i] == desiredChar)
            count++;
    return count;
}