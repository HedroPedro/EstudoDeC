#include <stdio.h>

int main(){
    char s[20];
    int i, j;
    gets(s);
    printf("Digite a posiçao que voce quer começar: ");
    scanf("%i", &i);
    printf("Digite a posiçao que voce quer terminar: ");
    scanf("%i", &j);
    for(i; i < j++; i++){
        printf("%c", s[i]);
    }
}