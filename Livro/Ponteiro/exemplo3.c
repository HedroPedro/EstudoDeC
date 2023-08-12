#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = 0x5FF;
    printf("P: %p, %d\n", p,p);
    p = p-5;
    printf("P: %p, %d\n", p, p);
    p++;
    printf("P: %p, %d", p, p);
}