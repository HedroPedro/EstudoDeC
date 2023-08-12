#include <stdio.h>
#include <stdlib.h>

int main(void){
    int val, val2;
    printf("Digite dois numeros: ");
    scanf("%i%i", &val, &val2);
    if(&val > &val2)
        printf("%i", val);
    else
        printf("%i", val2);
}
