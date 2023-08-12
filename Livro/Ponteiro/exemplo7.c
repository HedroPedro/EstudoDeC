#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[5][5];
    int *mat_ptr = mat;
    for(int i = 0; i < 25; i++){
        *(mat_ptr+i) = i;
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            printf("%i ", mat[i][j]);
        printf("\n");
    }
}