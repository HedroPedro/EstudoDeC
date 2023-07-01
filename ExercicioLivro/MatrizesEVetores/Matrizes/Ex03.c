#include <stdio.h>

int main(){
    int matriz[4][4], i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(j == i){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }    
}