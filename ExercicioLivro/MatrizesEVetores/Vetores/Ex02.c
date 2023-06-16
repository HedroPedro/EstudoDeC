#include <stdio.h>

int main(){
    int array[6];
    int i;
    for(i = 0; i < 6; i++){
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &array[i]);
    }
    printf("Os numero que voce digitou na ordem inversa: ");
    for(i = 5; i >= 0; i--){
        printf("%i ", array[i]);
    }
}