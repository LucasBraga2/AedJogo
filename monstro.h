#include "fila.h"
#include "pilha.h"


void cria_carta_monstro(carta_monstro *c_m){

    //CARTA_M 0
    c_m[0].n = 0; // IDENTIFICADOR DA CARTA
    c_m[0].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[0].v = 5; // Valor

    //CARTA_M 1
    c_m[1].n = 1; // IDENTIFICADOR DA CARTA
    c_m[1].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[1].v = 14; // Valor

    //CARTA_M 2
    c_m[2].n = 2; // IDENTIFICADOR DA CARTA
    c_m[2].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[2].v = 5; // Valor

    //CARTA_M 3
    c_m[3].n = 3; // IDENTIFICADOR DA CARTA
    c_m[3].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[3].v = 13; // Valor

    //CARTA_M 4
    c_m[4].n = 4; // IDENTIFICADOR DA CARTA
    c_m[4].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[4].v = 8; // Valor

    //CARTA_M 5
    c_m[5].n = 5; // IDENTIFICADOR DA CARTA
    c_m[5].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[5].v = 12; // Valor

    //CARTA_M 6
    c_m[6].n = 6; // IDENTIFICADOR DA CARTA
    c_m[6].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[6].v = 8; // Valor

    //CARTA_M 7
    c_m[7].n = 7; // IDENTIFICADOR DA CARTA
    c_m[7].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[7].v = 15; // Valor

    //CARTA_M 8
    c_m[8].n = 8; // IDENTIFICADOR DA CARTA
    c_m[8].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[8].v = 9; // Valor

     //CARTA_M 9
    c_m[9].n = 9; // IDENTIFICADOR DA CARTA
    c_m[9].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[9].v = 10; // Valor

     //CARTA_M 10
    c_m[10].n = 10; // IDENTIFICADOR DA CARTA
    c_m[10].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[10].v = 10; // Valor

     //CARTA_M 11
    c_m[11].n = 11; // IDENTIFICADOR DA CARTA
    c_m[11].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[11].v = 9; // Valor

     //CARTA_M 12
    c_m[12].n = 12; // IDENTIFICADOR DA CARTA
    c_m[12].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[12].v = 10; // Valor

     //CARTA_M 13
    c_m[13].n = 13; // IDENTIFICADOR DA CARTA
    c_m[13].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[13].v = 8; // Valor

     //CARTA_M 14
    c_m[14].n = 14; // IDENTIFICADOR DA CARTA
    c_m[14].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[14].v = 8; // Valor

    //CARTA_M 15
    c_m[15].n = 15; // IDENTIFICADOR DA CARTA
    c_m[15].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[15].v = 10; // Valor

    //CARTA_M 16
    c_m[16].n = 16; // IDENTIFICADOR DA CARTA
    c_m[16].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[16].v = 10; // Valor

    //CARTA_M 17
    c_m[17].n = 17; // IDENTIFICADOR DA CARTA
    c_m[17].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[17].v = 8; // Valor

    //CARTA_M 18
    c_m[18].n = 18; // IDENTIFICADOR DA CARTA
    c_m[18].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[18].v = 9; // Valor

    //CARTA_M 19
    c_m[19].n = 19; // IDENTIFICADOR DA CARTA
    c_m[19].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[19].v = 10; // Valor

    //CARTA_M 20
    c_m[20].n = 20; // IDENTIFICADOR DA CARTA
    c_m[20].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[20].v = 12; // Valor

    //CARTA_M 21
    c_m[21].n = 21; // IDENTIFICADOR DA CARTA
    c_m[21].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[21].v = 12; // Valor

    //CARTA_M 22
    c_m[22].n = 22; // IDENTIFICADOR DA CARTA
    c_m[22].t = 1; //Tipo 1-ATQ 2-DEF
    c_m[22].v = 12; // Valor

    //CARTA_M 23
    c_m[23].n = 23; // IDENTIFICADOR DA CARTA
    c_m[23].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[23].v = 10; // Valor

    //CARTA_M 24
    c_m[24].n = 24; // IDENTIFICADOR DA CARTA
    c_m[24].t = 2; //Tipo 1-ATQ 2-DEF
    c_m[24].v = 10; // Valor


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

void sequencia_monstro(carta_monstro *c_m *seqmons1, tp_fila *seqmons2, tp_fila *seqmons3, tp_fila *seqmons4, tp_fila *seqmons5){

    inicializa_fila(seqmons1);
    insere_fila(seqmons1, c_m[0].n);
    insere_fila();
    insere_fila();
    insere_fila();
    insere_fila();
    inicializa_fila(seqmons2);
    insere_fila(seqmons2, c_m[2].n);
    insere_fila();
    insere_fila();
    insere_fila();
    insere_fila();
    inicializa_fila(seqmons3);
    insere_fila(seqmons3, c_m[5].n);
    insere_fila();
    insere_fila();
    insere_fila();
    insere_fila();
    inicializa_fila(seqmons4);
    insere_fila(seqmons4, c_m[4].n);
    insere_fila();
    insere_fila();
    insere_fila();
    insere_fila();
    inicializa_fila(seqmons5);
    insere_fila(seqmons5, c_m[7].n);
    insere_fila();
    insere_fila();
    insere_fila();
    insere_fila();


}
void print_carta_monstro(){

}

void print_fila(){

}