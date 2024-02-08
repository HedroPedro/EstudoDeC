#include <stdio.h>

#define MAXSIZE 257
#define MAXSTRING 5

int strtam(char *str);

void showifisinmaxtrix(int tM, char s1[][MAXSIZE], char s2[]);

int main(void){
    char strings[MAXSTRING][MAXSIZE], str2[MAXSIZE];
    for(int i = 0; i < 5; i++){
        printf("Digite a %i frase: ", i+1);
        setbuf(stdin, NULL);
        fgets(strings[i], MAXSIZE-2, stdin);
    }
    printf("Digite outra string: ");
    fgets(str2, MAXSIZE, stdin);
    showifisinmaxtrix(MAXSTRING, strings, str2);
}

int strtam(char *str){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}

void showifisinmaxtrix(int tM, char s1[][MAXSIZE], char s2[]){
    int j, sum1, sum2 = 0, i;
    for(i = 0; i < strtam(s2); i++){
        sum2 += s2[i];
    }

    for(i = 0; i < tM; i++){
        sum1 = 0;
        for(j = 0; j < strtam(s1[i]); j++){
            sum1 += s1[i][j];
        }
        
        if(sum1 == sum2){
            printf("A string %s esta na matrix na %i. posicao", s2, i+1);
            return;
        }
    }
    printf("A string %s nao esta na matrix", s2);
}