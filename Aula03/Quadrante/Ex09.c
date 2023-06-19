#include <stdio.h>

int main(){
    int x, y;
    printf("Digite uma coordenada (x, y): ");
    scanf("%i %i", &x, &y);
    if(x == 0 && y == 0){
        printf("Centro");
    }else if(x != 0 && y == 0){
        printf("Eixo X");
    }else if(x == 0 && y != 0){
        printf("Eixo Y");
    }else if(x > 0 && y > 0){
        printf("Primeiro quadrante");
    }else if(x < 0 && y > 0){
        printf("Segundo quadrante");    
    }else if(x < 0 && y < 0){
        printf("Terceiro quadrante");
    }else{
        printf("Quarto quadrante");
    }
}