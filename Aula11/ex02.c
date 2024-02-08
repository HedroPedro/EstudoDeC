#include <stdio.h>
#include <stdlib.h>

int main(){
    int prog1, prog2, size, *vet;
    printf("Digite o codigo de progI e progII: ");
    scanf("%i %i", &prog1, &prog2);
    printf("Digite o tamanho das turmas: ");
    scanf("%i", &size);
    vet = (int * ) malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
        printf("Digite a matricula do %i. aluno: ", i+1);
        scanf("%i", vet+i);
    }
    
}