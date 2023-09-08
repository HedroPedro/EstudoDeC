#include <stdio.h>
#include <stdlib.h>

#define MACROMALLOC(type, var, num) \
        var = (type*) malloc(sizeof(type) * num)

void imprimeOla(){
    printf("OLAR");
    int *a = NULL;
    MACROMALLOC(int, a, 2);
    a[0] = 10;
    a[1] = 0;
    for(size_t i = 0; i < 2; i++)
        printf("\n%i", *(a+i));
    free(a);
    a = NULL;
}