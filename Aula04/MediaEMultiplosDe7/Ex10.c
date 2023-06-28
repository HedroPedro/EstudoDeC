#include <stdio.h>

int main(){
    int count, multiplo7, soma, numsEntre10e50 = 0;
    int num;
    float media;
    while(1){
        printf("Digite um numero: (0 para sair): ");
        scanf("%i", &num);
        if(num == 0){
            break;
        }
        if(num > 10 && num < 50){
            numsEntre10e50 += 1;
            soma += num;
            count++;
        }
        if(num % 7 == 0){
            multiplo7 += 1;
        }
    }
    media = soma/(float)count;
    printf("A media foi: %i\n", media);
    printf("A quantidade de numeros entre 10 e 50: %i\n", numsEntre10e50);
    printf("A quantidade de numeros multiplos de 7: %i", multiplo7);
}