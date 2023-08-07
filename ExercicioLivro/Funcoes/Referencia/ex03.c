#include <stdio.h>

int somaArray(int * array, int len);

int main(){
    int array[10], soma;
    for(int i = 0; i < 10; i++){
        scanf("%i", &array[i]);
    }
    soma = somaArray(&array, 10);
    printf("%i", soma);
    return 0;
}

int somaArray(int *array, int len){
    int soma = 0;
    for(int i = 0; i < len; i++){
        soma += array[i];
    }
    return soma;
}