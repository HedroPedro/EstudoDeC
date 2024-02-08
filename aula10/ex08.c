#include <stdio.h>

int main(){
    char *str = "nao gosto de programar em C";
    for(int i = 4; str[i] != '\0'; ++i){
        printf("%c", str[i]);
    }
}