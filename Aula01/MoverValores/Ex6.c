#include <stdio.h>

int main(){
    int x, y;
    
    printf("Digite o valor de x: ");
    scanf("%i", &x);
    printf("Digite o valor de y: ");
    scanf("%i", &y);

    printf("Os valor de x e %i e o y e %i\n", x, y);
    int tempX = x; //armazena x
    x = y;
    y = tempX;

    printf("Agora o valor de x e %i e o de y %i", x, y);
}