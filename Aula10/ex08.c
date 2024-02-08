#include <stdio.h>
#define SIZE 44
#define MAXSTR 101

typedef unsigned int uint;

typedef struct{
    uint dia, mes, ano;
} data;

typedef struct{
    uint numeroPassagem, poltrona;
    char nome[MAXSTR];
    char destino[MAXSTR];
    uint idade;
    data registOrigin, registDest;
    uint horario;
} registro;


int main(void){
    
}