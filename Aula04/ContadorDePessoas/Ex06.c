#include <stdio.h>

int main(){
    int idade;
    int totalPessoas, menor18, maior30 = 0;
    do
    {
        printf("Digite a idade de uma pessoa (0 para sair): ");
        scanf("%i", &idade);
        if(idade == 0){
            break;
        }
        if(idade < 18){
            menor18++;
        }if(idade > 30){
            maior30++;
        }
        totalPessoas++;
    }while(idade != 0);
    printf("Foi digitado um total de %i pessoas, ", totalPessoas);
    printf("%i pessoas tinham menos que 18 anos e %i tinham mais que 30 anos", menor18, maior30);
}