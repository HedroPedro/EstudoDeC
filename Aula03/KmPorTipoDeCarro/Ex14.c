#include <stdio.h>

int main(){
    char opcao;
    float km, litro;
    printf("|Cod | Km/L\n|A   | 15km/L\n|B   | 12Km/L\n|C   | 10Km/L\n");
    printf("Escolha o codigo do carro: ");
    scanf("%c", &opcao);
    printf("Digite quantos kilometros foi rodado: ");
    scanf("%f", &km);
    switch(opcao){
        case 'a':
            litro = km/15;
            printf("O veiculo gastou %.2fL", litro);
            break;
        case 'b':
            litro = km/12;
            printf("O veiculo gastou %.2fL", litro);
            break;
        case 'c':
            litro = km/10;
            printf("O veiculo gastou %.2fL", litro);
            break;
        default:
            printf("Erro");
            break;            
    }
    
}