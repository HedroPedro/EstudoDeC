#include <stdio.h>

int main(void){
    char ePub;
    int matricula, i = 1, tot1= 0, tot2 = 0, tot3 = 0, tot4 = 0, opcao, k= 0;
    float horas, preco, totalPreco = 0;
    do{
        printf("Digite a matricula %i. aluno: ", i);
        scanf("%i", &matricula);
        printf("Digite qual opcao vai ser: ");
        scanf("%i", &opcao);
        if(opcao < 1 || opcao > 4)
            continue;
        printf("E de escola publica? S ou N: ");
        scanf(" %c", &ePub);
        preco = ePub == 'S' ? (35 + 15*opcao)*0.5 : 35 + 15*opcao;
        
        switch (opcao) {
        case 1:
            tot1++;
            break;
        
        case 2:
            tot2++;
            break;
        
        case 3:
            tot3++;
            break;
        
        case 4:
            tot4++;
            break;
        }
        printf("0 para sair: ");
        scanf("%i", &k);
        i++;
    }while(k != 0);
    printf("O total arrecadado foi: %.2f", totalPreco);
}