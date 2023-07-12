#include <stdio.h>

typedef struct{
    int x, y;
} coordenada;

typedef struct{
    coordenada p1, p2, p3, p4;
} retangulo;

int main(){
    retangulo ret;
    coordenada c;
    scanf("%i%i %i%i %i%i %i%i", &ret.p1.x, &ret.p1.y, &ret.p2.x, &ret.p2.y
    , &ret.p3.x, &ret.p3.y, &ret.p4.x, &ret.p4.y);
    scanf("%i%i", &c.x, &c.y);
    if((ret.p1.x > c.x  && ret.p2.x < c.x && (ret.p1.y < c.y || ret.p2.y < c.y)) && 
    (ret.p3.x < c.x && ret.p3.y > c.y && ret.p4.x < c.x && ret.p4.y > c.y)){
        printf("Nao esta contido dentro do retangulo");
    }else{
        printf("Esta contido dentro do retangulo");
    }
}