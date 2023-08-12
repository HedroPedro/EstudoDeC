#include <stdio.h>
#include <stdlib.h>

int main(){
    int p[5] = {1, 2, 3, 4, 5};
    int *vet_ptr = p;
    for(int i = 0; i < 5; i++){
        printf("%i ", p[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("%i ", *(vet_ptr+i));
    }
}