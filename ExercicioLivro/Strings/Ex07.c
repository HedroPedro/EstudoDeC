#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[20], strInver[20];
    int j = 0;
    fgets(string, 20, stdin);
    for(int i = strlen(string)-1;i > -1; i--){
        strInver[j] = string[i];
        j++;
    }
    fputs(strInver, stdout);
    if(strcmp(strInver, string) == 0){
        printf("E palassindromos");
    }else{
        printf("Nao e palassindromo");
    }
}