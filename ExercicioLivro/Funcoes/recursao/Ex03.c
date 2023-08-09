#include <stdio.h>

void ordemCres(int num);

int main(void){
    ordemCres(3);
}

void ordemCres(int num){
    static int i = 0;
    if(i == num)
        printf("%i\n", i);
    else{
        printf("%i ", i);
        i++;
        return ordemCres(num);
    }
}