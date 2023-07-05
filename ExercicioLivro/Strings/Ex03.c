#include <stdio.h>

int main(){
    char string[21];
    int i, total = 0;
    fgets(string, 21, stdin);
    for(i = 0; i < 21; i++){
        if(string[i] == '\0'){
            break;
        }
        total++;
    }
    
    printf("O total de caracteres e %i caracteres", total);
}