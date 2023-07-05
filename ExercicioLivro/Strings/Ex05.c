#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[20], strTemp[20], temp;
    int count, i = 0;
    fgets(string, 20, stdin);

    count = strlen(string);

    for(count; count > -1; count--){
        fputs(strTemp, stdout);
        strTemp[i] = string[count];
        i++;
    }
    fputs(strTemp, stdout);
    strcpy(string, strTemp);
}