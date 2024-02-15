#include <stdio.h>

void mostraNumeroPar(int n, int start);

int main(){
    int n;
    printf("Digite um numero par: ");
    scanf("%i", &n);
    mostraNumeroPar(n, 0);
}

void mostraNumeroPar(int n, int start){
    if(n == start){
        printf("%i\n", start);
        return;
    }
    printf("%i\n", start);
    return mostraNumeroPar(n, start+2);
}