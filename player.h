#include "fila.h"
#include "pilha.h"
#include "cartas_deck.h"
void cria_jogador(jogador *j)
{

    printf("\nInsira o nome do jogador:\n");
    scanf(" %[^\n]s", &j->nome);
    j->h = 20; // Vida
    j->e = 5; // Energia
}

void print_jogador(jogador *j){

    printf("#####################################\n");
    printf("Nome: %s \nVida: %d Hp \nEnergia: %d/5 \n", j->nome, j->h, j->e);
    printf("#####################################\n");
}

void recupera_energia(jogador *j){
    j->e = 5; // Energia
}
void verifica_energia(jogador *j){
    if(j->e != 5){
        recupera_energia(j);
    }
}