#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXSIZE 257
#define VOWELS "aeiouAEIOU"

unsigned int count_vowels(const char str[], const char charSet[]);

int main(void){
    char str[MAXSIZE];
    printf("Digite uma palavra: ");
    fgets(str, MAXSIZE, stdin);
    printf("Foram digitados %i vogais", count_vowels(str, VOWELS));
}

unsigned int count_vowels(const char str[], const char charSet[]){
    unsigned int count = 0;
    size_t j;
    for(size_t i = 0; i < strlen(str); i++){
        for(j = 0; j < strlen(charSet); j++){
            if(str[i] == charSet[j]){
                count++;
                break;
            }
        }
    }
    return count;
}