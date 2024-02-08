#include <stdio.h>
#define SIZE 20

typedef struct character{
    char name[SIZE];
    int ID, level, vida, ataque, defesa;
} character;

int main(void){
    unsigned int size, i;
    printf("Digite a quantidade de personagens: ");
    scanf("%u", &size);
    character personagens[size];
    for(i = 0; i < size; i++){
        printf("Digite o nome do personagem: ");
        getchar();
        gets_s(personagens[i].name, SIZE);
        printf("Digite o id: ");
        scanf("%i", &personagens[i].ID);
        printf("Digite o nivel: ");
        scanf("%i", &personagens[i].level);
        printf("Digite a vida: ");
        scanf("%i", &personagens[i].vida);
        printf("Digite a ataque: ");
        scanf("%i", &personagens[i].ataque);
        printf("Digite a defesa: ");
        scanf("%i", &personagens[i].defesa);
    }

    for(i = 0; i < size; i++){
        printf("Nome: %s\n", personagens[i].name);
        printf("ID: %i\n", personagens[i].ID);
        printf("Nivel: %i\n", personagens[i].level);
        printf("Vida: %i\n", personagens[i].vida);
        printf("Ataque: %i\n", personagens[i].ataque);
        printf("Defesa: %i\n", personagens[i].defesa);
    }
}