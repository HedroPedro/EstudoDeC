#include <stdio.h>
#include <ctype.h>

float calMedia(char opc, float notas[3]);

int main(){
    char opc;
    float notas[3];
    printf("A - Media aritmetica\nP - Media Ponderada\n");
    printf("Digite a opcao: ");
    scanf("%c", &opc);
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &notas[0], &notas[1], &notas[2]);
    printf("A media foi de %.2f", calMedia(tolower(opc), notas));
}

float calMedia(char opc, float notas[3]){
    switch (opc){
    case 'A':
        return (notas[0]+notas[1]+notas[2])/3;
    
    case 'P':
        return (notas[0]*5+notas[1]*3+notas[2]*2)/10;

    default:
        printf("ERRO!");
        return -1;
        break;
    }
}