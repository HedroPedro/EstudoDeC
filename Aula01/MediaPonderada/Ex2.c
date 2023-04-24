#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, media;
    printf("Digite as notas do aluno: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    media = (nota1*1.5)+(nota2*2)+(nota3*3)+(nota4*3.5)/10;
    printf("A media e de %.2f", media);
    return 0;
}