#include <stdio.h>

int main(void){
    int x = 10;
    int *p = &x;
    int **p2 = &p;
    printf("Endreco em p2: %p\n", p2);
    printf("Conteudo em p2: %p\n", *p2);

    printf("Endereco em p: %p\n", p);
    printf("Conteudo em p: %d", *p);
}