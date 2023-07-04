#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[20];
    fgets(string, 20, stdin);
    int count = strlen(string);
    for(count; count > -1; count--){
        printf("%c", string[count]);
    }
}