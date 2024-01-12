#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showcharposition(char desiredChar, char string[]);

int main(void){
    int i;
    char desired_char;
    printf("Digite o tamanho da string: ");
    scanf("%i", &i);
    char str[i];
    setbuf(stdin, NULL);
    printf("Agora digite a string: ");
    fgets(str, i, stdin);
    setbuf(stdin, NULL);
    printf("Digite o caractere para procurar: ");
    setbuf(stdin, NULL);
    desired_char = getc(stdin);
    showcharposition(desired_char, str);
}

void showcharposition(char desiredChar, char string[]){
    printf("A letra %c esta nas posicoes: ", desiredChar);
    for(int i = 0; i < strlen(string); i++){
        if(string[i] == desiredChar){
            printf("%i ", i);
        }
    }
}