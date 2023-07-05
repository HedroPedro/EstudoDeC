#include <stdio.h>
#include <string.h>

int main(){
    char string[20], string2[10];
    int i, j, totalLetra;
    int soma= 0;
    fgets(string, 20, stdin);
    fgets(string2, 10, stdin);
    totalLetra = strlen(string2)-1;
    printf("%i", totalLetra);

    for(i = 0; i < strlen(string); i++){
        for(j = totalLetra; j < -1; j--){

        }
    }

    if(soma != 0){
        printf("A string %s esta contida na string %s", string2, string);
    }else{
        printf("A string %s nao esta contida na string %s", string2, string);
    }
}