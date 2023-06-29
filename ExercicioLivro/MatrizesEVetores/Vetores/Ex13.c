#include <stdio.h>

int main(){
    int vetor[10], num, i;
    int count = 0;
    while(count < 10){
        inicio:
        printf("Digite o %i. numero: ", count+1);
        scanf("%i", &num);
        for(i = 0; i < count; i++){
            if(num == vetor[i]){
                printf("Erro! Digite outro numero\n");
                goto inicio;
            }    
        }
        vetor[count] = num;
        count++;
        }
    
}