#include <stdio.h>
#include <ctype.h>

void eVogal(char c);

int main(){
    char caract;
    printf("Digite um caractere: ");
    scanf("%c", &caract);
    caract = tolower(caract);
    eVogal(caract);
}

void eVogal(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("E uma vogal");
    }else{
        printf("Nao e uma vogal");
    }
}