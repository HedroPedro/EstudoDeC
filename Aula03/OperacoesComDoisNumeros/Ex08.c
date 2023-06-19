#include <stdio.h>

int main(){
    int x, y, cod, prod, dif;
    float media, divsao;
    printf("|Cod | Operacao\n|1   | Media aritmetica entre x e y\n|2   | Diferenca do maior pelo menor numero\n|3   | Produto entre x e y\n|4   | Divisao entre x e y\n");
    printf("Digite o codigo da operacao: ");
    scanf("%i", &cod);
    printf("Digite dois numeros: ");
    scanf("%i %i", &x, &y);
    switch(cod){
        case 1:
            media = (x+y);
            media = media/2;
            printf("A media e de: %f", media);
            break;
        case 2:
            dif = x - y;
            if(dif < 0){
                dif *= -1;
            }
            printf("A difrenca e %i", dif);
            break;
        case 3:
            prod = x * y;
            printf("O produto e igual a %i", prod);
            break;
        case 4:
            divsao = x/y;
            printf("X/Y e igual a %.2f", divsao);
            break;
        default:
            printf("ERRO! Abortando programa");
            break; 
    }
}