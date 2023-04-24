#include <stdio.h>
#include <math.h>

int main(){
    float dis, xA, xB, yB, yA;
    printf("Insira o x de A: ");
    scanf("%f", &xA);
    printf("Insira o y de A: ");
    scanf("%f", &yA);
    printf("Insira o x de B: ");
    scanf("%f", &xB);
    printf("Insira o y de B: ");
    scanf("%f", &yB);

    dis = sqrt(pow((xB - xA), 2)+pow((yB - yA), 2));
    printf("A distancia do ponto A ate o B e: %.2f", dis);
    
}