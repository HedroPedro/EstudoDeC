#include <stdio.h>

int main(){
    float vetor[10], temp;
    int i, j;
    for(i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
    }
    for(i = 0; i < 10; i++){
        for(j = i+1; j < 10; j++){
            if(vetor[j] < vetor[i]){
                temp = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = temp;
            }
        }
        
    }

    for(i = 0; i < 10; i++){
        printf("%.2f ", vetor[i]);
    }
}