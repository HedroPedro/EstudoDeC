#include <stdio.h>
#include <string.h>

//Codigo de cesar;

int main(){
    char string[20];
    int i;
    gets(string);
    strlwr(string);
    for(i = 0; i < strlen(string)-1; i++){
        if(string[i] > 119 && string[i] < 123){
            string[i] = string[i] - 23;
        }else{
            string[i] = string[i] + 3;
        }
    }
    fputs(string, stdout);
}