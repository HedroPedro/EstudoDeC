#include <stdio.h>
#include <ctype.h>

int main(){
    char vogal;
    printf("Digite uma vogal: ");
    scanf("%c", &vogal);
    vogal = tolower(vogal);  
    if((vogal == 'a') || (vogal == 'e') || (vogal == 'i') 
    || (vogal == 'o') || (vogal == 'u')){
        printf("E uma vogal");
    }else{
        printf("E uma consoante");
    }
}