#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, raiz1, raiz2, delta;
    printf("Digite o a, b e c de uma equacao quadrada: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0){
        printf("Isso e um funcao linear");
    }else{
        delta = (b*b) - (4*a*c);
        if(delta < 0){
            printf("Nao existe raizes reais");
        }else{
            raiz1 = (-b + sqrt(delta))/(2*a);
            raiz2 = (-b - sqrt(delta))/(2*a);
            printf("A raizes sao %.2f e %2.f", raiz1, raiz2);
        }
    }
}