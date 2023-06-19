#include <stdio.h>

int main(){
    int idade;
    float altura;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if(altura >= 1.5 && idade > 11){
        printf("Pode andar na Barca Viking\n");
    }

    if(altura >= 1.4 && idade > 13){
        printf("Pode ir no Elevator of Death\n");
    }

    if(altura >= 1.7 || idade > 15){
        printf("Pode ir no Final Killer");
    }
}