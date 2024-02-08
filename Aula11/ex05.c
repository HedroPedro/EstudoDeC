#include <stdio.h>
#include <stdlib.h>

int buscaNumero(int numero, int **array, int linha, int coluna);

/*int main(void){
    int linha, coluna, **array, *vet, n;
    printf("Digite a linha e coluna: ");
    scanf("%i %i", &linha, &coluna);
    array = (int **) malloc(linha * sizeof(int *));
    /*vet = (int *) malloc(linha * coluna * sizeof(int));
    for(int i = 0; i < linha; i++){
        array[i] = vet + i*coluna;
        for(int j = 0; j < coluna; j++){
            printf("Digite um numero para [%i %i]: ", i, j);
            scanf("%i", *(array+i)+j);
            printf("%i\n", *(*(array+i)+j));
        }
    }
    for(int i = 0; i < linha; i++){
        array[i] = (int *) malloc(sizeof(int) * coluna);
        for(int j = 0; j < coluna; j++){
            printf("Digite um numero para [%i %i]: ", i, j);
            scanf("%i", *(array+i)+j);
        }
    }

    printf("Digite um numero para procurar no array: ");
    scanf("%i", &n);
    if(buscaNumero(n, array, linha, coluna)){
        printf("Esta dentro do array!");
        goto EXIT;
    }
    printf("Nao esta dentro do array!");
    EXIT:
        free(vet);
        free(array);
        exit(0);
}

int buscaNumero(int numero, int **array, int linha, int coluna){
    int j = 0;
    for(int i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(*(*(array+i)+j) == numero)
                return 1;
        }
    }
    return 0;
}*/

int buscaNumero(int numero, int **array, int linha, int coluna) {
    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if (*( *(array+i)+j) == numero){
                    return 1;
            }
        }
    }
    return 0;
}

int main(){

    int lin, col;
    int **matriz, num;

    printf("Quantas linhas e colunas terao as matrizes?\n");
    scanf("%d %d", &lin, &col);

    matriz = (int **) malloc(lin*sizeof(int *));
    for (int i = 0; i < lin; i++){
        matriz[i] = (int *) malloc(col*sizeof(int));
    }

    if (matriz == NULL){
        printf("Memoria insuficiente!");
        exit(1);
    }
    
    for(int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            printf("Insira um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Insira um numero para ver se ele está na matriz\n");
    scanf("%d", &num);

    printf("A resposta da funcao e: %d", buscaNumero(num, matriz, lin, col));

    return 0;
}