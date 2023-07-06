#include <stdio.h>
#include <string.h>
#include <string.h>

int main(){
    char string[20], strOutra[20];
    int somaDifs, estaContida = 0;
    int i, j;
    printf("Digite uma palavra: ");
    fgets(string, 20, stdin);
    printf("Digite outra palavra: ");
    fgets(strOutra, 20, stdin);
    for(i = 0; i < strlen(string)-1; i++){
        for(j = 0; j < strlen(strOutra)-1; j++){
                somaDifs +=  string[j+i] - strOutra[j];
        }
        printf("%i\n", somaDifs);
        if(somaDifs == 0){
            estaContida++;
        }
        somaDifs = 0;
    }
    if(estaContida > 0){
        printf("A string %s esta dentro de %s", strOutra, string);
    }else{
        printf("A string %s nao esta dentro de %s", strOutra, string);
    }
}