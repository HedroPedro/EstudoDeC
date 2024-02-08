#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertStr(char *str, int tam){
    int j = 0;
    char *invertedStr = malloc((tam+1) * sizeof(char));
    for(int i = tam-1; i > -1; i--){
        invertedStr[j] = str[i];
        j++;
    }
    invertedStr[j] = '\0';
    printf("A string invertia e: %s\n", invertedStr);
}

int main(void){
    int size;
    char *str;
    printf("Digite o tamanho da string: ");
    scanf("%i", &size);
    str = (char *) malloc(size * sizeof(char));
    printf("Digite a string: ");
    setbuf(stdin, NULL);
    gets_s(str, size);
    str = realloc(str, sizeof(char) * (strlen(str)+1));
    invertStr(str, strlen(str));
    
}