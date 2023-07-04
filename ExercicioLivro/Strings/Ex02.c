#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[10];
    fgets(string, 10, stdin);
    for(int i = 0; i < 4; i++){
        printf("%c", string[i]);
    }
}