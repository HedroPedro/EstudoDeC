#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXSTR 255

bool ePalindromo(char *vet, int lenght);

int somaChar(char *letter, int lengh);

void inverterStr(char *strOrigin, int lenght, char *strDestiny);

int main(){
    char str[MAXSTR];
    gets_s(str, MAXSTR);
    if(ePalindromo(str, (strlen(str)+1))){
        printf("E um palindromo");
        return 0;
    }
    printf("Nao e paldindromo");
}

bool ePalindromo(char *vet, int lenght){
    char inversoStr[lenght]; 
    inverterStr(vet, lenght, inversoStr);
    if(somaChar(vet, lenght) == somaChar(inversoStr, lenght))
        return true;
    return false;
}

int somaChar(char *letter, int lenght){
    if(lenght == 1)
        return letter[lenght-1];
    return letter[lenght-1] - somaChar(letter, lenght-1);
}

void inverterStr(char *strOrigin, int lenght, char *strDestiny){
    int i = 0;
    for(--lenght; lenght > 0 ; lenght--){
        strDestiny[i] = strOrigin[lenght-1];
        i++;
    }
    strDestiny[i] = '\0';
}
