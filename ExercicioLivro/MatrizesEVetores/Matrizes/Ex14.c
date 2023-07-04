#include <stdio.h>

int main(){
    int matriz[5][5], i, j, dif;
    int somaPouS, somaNPOuS = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o %i. numero da coluna %i.: ", j+1, i+1);
            scanf("%i", &matriz[i][j]); 
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if((j != i) && !((i == 0 && j == 4) || (i == 1 && j == 3)
            || (i == 2 && j == 2) || (i == 3 && j == 1) || (i == 4 && j ==0))){
                somaPouS += matriz[i][j];
            }else{
                somaNPOuS += matriz[i][j];
            }
        }
    }
    dif = somaPouS - somaNPOuS;
    printf("A difrenca e: %i", dif);
}