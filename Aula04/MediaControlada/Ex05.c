#include <stdio.h>

int main(){
    int count, num, somaNum;
    int somaNum = 0;
    float media;
    printf("Digite quantos numeros voce vai digitar: ");
    scanf("%i", &count);
    for (int i = 0; i < count; i++)
    {
        printf("Digite o %i. numero: ", i+1);
        scanf("%i", &num);
        somaNum += num;
    }

    media = somaNum/(float)count;
    printf("A media e %.2f", media);
}