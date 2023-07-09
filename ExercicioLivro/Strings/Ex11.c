#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[30];
    fgets(str, 30, stdin);
    for(int  i = 0; i < strlen(str); i++){
        if(str[i]>64 && str[i]<89){
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);
}
