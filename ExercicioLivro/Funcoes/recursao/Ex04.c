#include <stdio.h>

void ordemDecres(int num);

int main(void){
    ordemDecres(4);
}

void ordemDecres(int num){
    if(num != 0){
        printf("%i ", num);
        return ordemDecres(num-1); 
    }
    printf("0\n");
}