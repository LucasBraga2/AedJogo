#include "fila.h"
#include "pilha.h"


void cria_carta_monstro(carta_monstro *c_m){

    //CARTA_M 0
    c_m[0].n = 0; // IDENTIFICADOR DA CARTA
    c_m[0].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[0].v = 5; // Valor

    //CARTA_M 1
    c_m[1].n = 1; // IDENTIFICADOR DA CARTA
    c_m[1].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[1].v = 5; // Valor



}
void cria_monstro(monstro *m)
{

    // MONSTRO 1
    int vida1 = 20; // VIDA DO PRIMEIRO MONSTRO
    strcpy(m[0].nome, "Homem Gosma"); // NOME DO MONSTRO 1
    m[0].h = vida1;

    // MONSTRO 2
    int vida2 = 30; // VIDA DO SEGUNDO MONSTRO
    strcpy(m[1].nome, "Gaviao Feroz"); // NOME DO MOSNTRO 2
    m[1].h = vida2;

    // MONSTRO 3
    int vida3 = 40; // VIDA DO TERCEIRO MONSTRO
    strcpy(m[2].nome, "Gigante de Pedra"); // NOME DO MOSNTRO 3
    m[2].h = vida3;

    // MONSTRO 4
    int vida4 = 50; // VIDA DO QUARTO MONSTRO
    strcpy(m[3].nome, "Cobra de Duas Cabecas"); // NOME DO MOSNTRO 4
    m[3].h = vida4;
   

    // MONSTRO 5 (BOSS FINAL)
    int vida5 = 60; // VIDA DO QUINTO MONSTRO
    strcpy(m[4].nome, "Mob Dick(Boss Final)"); // NOME DO MOSNTRO 5
    m[4].h = vida5;
}

void mostra_monstro(monstro *m)
{

    printf("Mosntros:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("-----------------------------------\n");
        printf("Nome: %s\n", m[i].nome);
        printf("Vida: %d Hp\n", m[i].h);
    }
    printf("-----------------------------------\n");
}

