#include <stdio.h>

void medias(float nota1, float nota2, char tipo);

void menu();

int main(){
    float nota1, nota2;
    char opcao;
    printf("Digite as duas notas: ");
    scanf("%f%f", &nota1, &nota2);
    menu();
    setbuf(stdin, NULL);
    scanf("%c", &opcao);
    medias(nota1, nota2, opcao);
    
}

void medias(float nota1, float nota2, char tipo){
    switch(tipo){
        case 'a':
        printf("A media aritmetica e: %f", (nota1+nota2)/2);
        break;

        case 'p':
        printf("A media ponderada e: %f", (nota1*3+nota2*2)/5);
        break;


        case 'h':
        printf("A media harmonica e: %f", (1/nota1+1/nota2));
        break;

        default:
        printf("Opcao nao reconhecida");
        break;
    }
}

void menu(){
    printf("/---------------------------\\\n");
    printf("| OPCOES  | O que faz       |\n");
    printf("| p       | Media ponderada |\n");
    printf("| a       | Media aritmetica|\n");
    printf("| h       | Media harmonica |\n");
    printf("\\---------------------------/\n");
}