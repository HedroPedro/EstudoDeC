#include <stdio.h>

int main(){
    int matriz[6][6], i, j;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
           printf("Digite o %i. numero da coluna %i.: ", j+1, i+1);
           scanf("%i", &matriz[i][j]); 
        }
    }
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(!(j == i) && !((i == 0 && j == 5) || (i == 1 && j == 4)
            || (i == 2 && j == 3) || (i == 3 && j == 2) || (i == 4 && j ==1)
            || (i == 5 && j == 0))){
                printf(" %i ", matriz[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}