#include <stdio.h>
#include <string.h>

int main(){
    char mudador, string[20];
    int contador = 0;
    fgets(string, 20, stdin);
    mudador = fgetc(stdin);
    strlwr(string);
    for(int i = 0; i < strlen(string); i++){
        if(string[i] == 'a' || string[i] == 'e'
        || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            contador++;
            string[i] = mudador;
        }
    }
    printf("Foi digitado %i vogais e a palavra alterada se tornou: %s", contador, string);
}