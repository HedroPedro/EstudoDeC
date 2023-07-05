#include <stdio.h>
#include <string.h>
//TODO: terminar esse
int main(){
    char string[20], string2[10], substring[10];
    int pos, j, totalLetra, existeSub, count = 0;
    fgets(string, 20, stdin);
    fgets(string2, 10, stdin);
    totalLetra = strlen(string2)-1;

    for(pos = 0; pos < strlen(string)-1; pos++){
        while(count < totalLetra){
            substring[count] = string[pos+count];
            count++;
        }
        substring[count] = '\0';
        printf("%s == %s\n", substring, string2);
        count = 0;
        strstr
    }
}