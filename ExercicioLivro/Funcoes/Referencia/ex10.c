#include <stdio.h>
#include <string.h>

void ePalindromo(char *string, int len);

int main(){

    ePalindromo("osse", strlen("osse"));
}

void ePalindromo(char *string, int len){
    char strinver[len];
    int i = 0;
    for(int j = len-1; j > -1; j--){
        strinver[i] = string[j];
        i++;
    }
    strinver[i] = '\0';
    if(strcmp(string, strinver) == 0)
        printf("E palindromo");
    else
        printf("Nao e palindromo");
}