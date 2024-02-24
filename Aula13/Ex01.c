#include <stdio.h>
#include <string.h>

void gravarDados(char *titulo, int *numero, float *preco, FILE *file);
void lerDados(FILE *file);

int main(void){
    FILE *file;
    char titulo[30];
    int numeroRegistro;
    float preco;
    int sair;
    while(1){
        printf("Digite o titulo: ");
        setbuf(stdin, NULL);
        fgets(titulo, 30, stdin);
        printf("Digite o numero do registro: ");
        scanf("%i", &numeroRegistro);
        printf("Digite o preco: ");
        scanf("%f", &preco);
        gravarDados(titulo, &numeroRegistro, &preco, file);
        printf("Digite se deseja sair (0 para continuar inserindo): ");
        scanf("%i", &sair);
        if(sair)
            break;
    }
    lerDados(file);
}

void gravarDados(char *titulo, int *numero, float *preco, FILE *file){
    file = fopen("ex01.txt", "a");
    printf("%i\n", *numero);
    fprintf(file, "%s", titulo);
    fprintf(file, "%i\n", (*numero));
    fprintf(file, "%f\n", (*preco));
    fclose(file);

}

void lerDados(FILE *file){
    file = fopen("ex01.txt", "r");
    int numero;
    float preco;
    char titulo[30];
    if(!file){
        printf("Arquivo nao encontrado");
        fclose(file);
        return;
    }

    while(!feof(file)){
        fscanf(file, "%s", titulo);
        fscanf(file, "%i", &numero);
        fscanf(file, "%f", &preco);
        printf("%s\n", titulo);
        printf("%i\n", numero);
        printf("%.2f\n", preco);
    }
    
    fclose(file);
}