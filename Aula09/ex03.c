#include <stdio.h>
#include <string.h>

#define MAXSIZE 257

int count_spaces(const char string[]);

int main(){
    char str[MAXSIZE];
    puts("Digite uma frase: ");
    fgets(str, MAXSIZE-2, stdin);
    printf("Existe %i espaços vazios", count_spaces(str));
}

int count_spaces(const char string[]){
    unsigned int count = 0;
    for(size_t i = 0; i < strlen(string); i++)
        if(string[i] == ' ')
            count++;
    return count;
}