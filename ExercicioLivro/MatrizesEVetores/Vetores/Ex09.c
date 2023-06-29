#include <stdio.h>

int main(){
    int a[10] = {0, 10, 8, 9, 3, 12, 1, -9, 9, 44};
    int b[10] = {5, 7, 99, 12, 10, 6, 45, 8, -77, -4};
    int c[10];
    for(int i = 0; i < 10; i++){
        c[i] = a[i] - b[i];
        printf("A subtracao do %i. termo e: %i\n", i+1, c[i]);
    }

}