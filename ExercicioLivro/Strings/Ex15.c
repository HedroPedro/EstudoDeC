#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    char string1[30], string2[30];
    gets(string1);
    gets(string2);
    if(strcmp(string1, string2) < 0){
        printf("%s\n%s",string1,string2);
    }else{
        printf("%s\n%s",string2,string1);
    }
}