#include <stdio.h>

int biggestValueInVect(int *vect, int size, int *pos){
    int val = vect[0];
    for(int i = 1; i < size; i++){
        if(val < vect[i]){
            val = vect[i];
            *pos = i;
        }
    }
    return val;
}

int main(){
    int size, pos = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &size);
    int vect[size];
    for(int i = 0; i < size; i++){
        printf("Digite o %i. valor: ", i+1);
        scanf("%i", (vect + i));
    }

    printf("O maior valor no vetor foi: %i", biggestValueInVect(vect, size, &pos));
    printf("\nA posicao foi %i", pos);
}