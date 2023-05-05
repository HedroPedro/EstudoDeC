#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    printf("Digite tres numero flutuantes: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3)/3;
    printf("A media e %.2f", media);
    if(n1 > media){
        printf("\nO %.2f e acima da media", n1);
    }
    if(n2 > media){
        printf("\nO %.2f e acima da media", n2);
    }
    if(n3 > media){
        printf("\nO %.2f e acima da media", n3);
    }

}