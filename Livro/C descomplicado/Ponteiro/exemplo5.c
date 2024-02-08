#include <stdio.h>
#include <stdlib.h>

int main(){
    void *ptr_generico;
    int *p1, p2 = 10;
    p1 = &p2;
    ptr_generico = &p2;
    printf("Conteudo de p1: %d; endereço de p1: %p\n", p1, p1);
    printf("Conteudo de ptr_generico: %d; emdreço de ptr_generica:%p\n", ptr_generico, ptr_generico);
    printf("Acessando valor dentro de um ponteiro de inteiro: %i\n", *p1);
    printf("Acessando valor dentro de um ponteiro generico: %i\n", *(int*)ptr_generico);
}