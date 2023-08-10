#include <stdio.h>

int soma(int x, int y);

int main(int argc, char * argv[]){
    printf("%i", soma(2, 4));
}

int soma(int x, int y){
    if(y == 1)
        return x;
    return x + soma(x,y-1);        
}