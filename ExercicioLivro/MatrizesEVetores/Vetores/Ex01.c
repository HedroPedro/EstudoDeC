#include <stdio.h>

int main(){
    int array[6];
    int i, j;
    for(i = 0; i < 6; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &array[i]);
    } 
    printf("Voce digitou: ");
    for(j = 0; j < 6; j++){
        printf("%i ", array[j]);
    }

}