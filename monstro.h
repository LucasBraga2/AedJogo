#include "fila.h"
#include "pilha.h"
#include "cartas_deck.h"

void print_fila(tp_fila *f, carta_monstro *c_m);
void cria_carta_monstro(carta_monstro *c_m)
{

    // CARTA_M 0
    c_m[0].n = 0; // IDENTIFICADOR DA CARTA
    c_m[0].t = 1; // Tipo 1-ATQ 2-DEF
    c_m[0].v = 5; // Valor

    // CARTA_M 1
    c_m[1].n = 1;  // IDENTIFICADOR DA CARTA
    c_m[1].t = 1;  // Tipo 1-ATQ 2-DEF
    c_m[1].v = 14; // Valor

    // CARTA_M 2
    c_m[2].n = 2; // IDENTIFICADOR DA CARTA
    c_m[2].t = 2; // Tipo 1-ATQ 2-DEF
    c_m[2].v = 5; // Valor

    // CARTA_M 3
    c_m[3].n = 3;  // IDENTIFICADOR DA CARTA
    c_m[3].t = 1;  // Tipo 1-ATQ 2-DEF
    c_m[3].v = 13; // Valor

    // CARTA_M 4
    c_m[4].n = 4; // IDENTIFICADOR DA CARTA
    c_m[4].t = 2; // Tipo 1-ATQ 2-DEF
    c_m[4].v = 8; // Valor

    // CARTA_M 5
    c_m[5].n = 5;  // IDENTIFICADOR DA CARTA
    c_m[5].t = 1;  // Tipo 1-ATQ 2-DEF
    c_m[5].v = 12; // Valor

    // CARTA_M 6
    c_m[6].n = 6; // IDENTIFICADOR DA CARTA
    c_m[6].t = 2; // Tipo 1-ATQ 2-DEF
    c_m[6].v = 8; // Valor

    // CARTA_M 7
    c_m[7].n = 7;  // IDENTIFICADOR DA CARTA
    c_m[7].t = 2;  // Tipo 1-ATQ 2-DEF
    c_m[7].v = 15; // Valor

    // CARTA_M 8
    c_m[8].n = 8; // IDENTIFICADOR DA CARTA
    c_m[8].t = 1; // Tipo 1-ATQ 2-DEF
    c_m[8].v = 9; // Valor

    // CARTA_M 9
    c_m[9].n = 9;  // IDENTIFICADOR DA CARTA
    c_m[9].t = 1;  // Tipo 1-ATQ 2-DEF
    c_m[9].v = 10; // Valor

    // CARTA_M 10
    c_m[10].n = 10; // IDENTIFICADOR DA CARTA
    c_m[10].t = 2;  // Tipo 1-ATQ 2-DEF
    c_m[10].v = 10; // Valor

    // CARTA_M 11
    c_m[11].n = 11; // IDENTIFICADOR DA CARTA
    c_m[11].t = 1;  // Tipo 1-ATQ 2-DEF
    c_m[11].v = 9;  // Valor

    // CARTA_M 12
    c_m[12].n = 12; // IDENTIFICADOR DA CARTA
    c_m[12].t = 1;  // Tipo 1-ATQ 2-DEF
    c_m[12].v = 10; // Valor

    // CARTA_M 13
    c_m[13].n = 13; // IDENTIFICADOR DA CARTA
    c_m[13].t = 2;  // Tipo 1-ATQ 2-DEF
    c_m[13].v = 8;  // Valor

    // CARTA_M 14
    c_m[14].n = 14; // IDENTIFICADOR DA CARTA
    c_m[14].t = 2;  // Tipo 1-ATQ 2-DEF
    c_m[14].v = 8;  // Valor

    // CARTA_M 15
    c_m[15].n = 15; // IDENTIFICADOR DA CARTA
    c_m[15].t = 2;  // Tipo 1-ATQ 2-DEF
    c_m[15].v = 10; // Valor

    // CARTA_M 16
    c_m[16].n = 16; // IDENTIFICADOR DA CARTA
    c_m[16].t = 1;  // Tipo 1-ATQ 2-DEF
    c_m[16].v = 10; // Valor

    // CARTA_M 17
    c_m[17].n = 17; // IDENTIFICADOR DA CARTA
    c_m[17].t = 2;  // Tipo 1-ATQ 2-DEF
    c_m[17].v = 8;  // Valor

    // CARTA_M 18
    c_m[18].n = 18; // IDENTIFICADOR DA CARTA
    c_m[18].t = 1;  // Tipo 1-ATQ 2-DEF
    c_m[18].v = 9;  // Valor

    // CARTA_M 19
    c_m[19].n = 19; // IDENTIFICADOR DA CARTA
    c_m[19].t = 1;  // Tipo 1-ATQ 2-DEF
    c_m[19].v = 10; // Valor

    // CARTA_M 20
    c_m[20].n = 20; // IDENTIFICADOR DA CARTA
    c_m[20].t = 2;  // Tipo 1-ATQ 2-DEF
    c_m[20].v = 12; // Valor

    // CARTA_M 21
    c_m[21].n = 21; // IDENTIFICADOR DA CARTA
    c_m[21].t = 2;  // Tipo 1-ATQ 2-DEF
    c_m[21].v = 12; // Valor

    // CARTA_M 22
    c_m[22].n = 22; // IDENTIFICADOR DA CARTA
    c_m[22].t = 1;  // Tipo 1-ATQ 2-DEF
    c_m[22].v = 12; // Valor

    // CARTA_M 23
    c_m[23].n = 23; // IDENTIFICADOR DA CARTA
    c_m[23].t = 2;  // Tipo 1-ATQ 2-DEF
    c_m[23].v = 10; // Valor

    // CARTA_M 24
    c_m[24].n = 24; // IDENTIFICADOR DA CARTA
    c_m[24].t = 2;  // Tipo 1-ATQ 2-DEF
    c_m[24].v = 10; // Valor
}
void cria_monstro(monstro *m)
{

    // MONSTRO 1
    int vida1 = 20;                   // VIDA DO PRIMEIRO MONSTRO
    strcpy(m[0].nome, "Homem Gosma"); // NOME DO MONSTRO 1
    m[0].h = vida1;

    // MONSTRO 2
    int vida2 = 30;                    // VIDA DO SEGUNDO MONSTRO
    strcpy(m[1].nome, "Gaviao Feroz"); // NOME DO MOSNTRO 2
    m[1].h = vida2;

    // MONSTRO 3
    int vida3 = 40;                        // VIDA DO TERCEIRO MONSTRO
    strcpy(m[2].nome, "Gigante de Pedra"); // NOME DO MOSNTRO 3
    m[2].h = vida3;

    // MONSTRO 4
    int vida4 = 50;                             // VIDA DO QUARTO MONSTRO
    strcpy(m[3].nome, "Cobra de Duas Cabecas"); // NOME DO MOSNTRO 4
    m[3].h = vida4;

    // MONSTRO 5 (BOSS FINAL)
    int vida5 = 60;                            // VIDA DO QUINTO MONSTRO
    strcpy(m[4].nome, "Mob Dick(Boss Final)"); // NOME DO MOSNTRO 5
    m[4].h = vida5;
}

void sequencia_monstro(carta_monstro *c_m, tp_fila *seqmons1, tp_fila *seqmons2, tp_fila *seqmons3, tp_fila *seqmons4, tp_fila *seqmons5)
{

    inicializa_fila(seqmons1); // incializa 1 sequencia de acoes do monstro
    insere_fila(seqmons1, c_m[0].n);
    insere_fila(seqmons1, c_m[1].n);
    insere_fila(seqmons1, c_m[2].n);
    insere_fila(seqmons1, c_m[3].n);
    insere_fila(seqmons1, c_m[4].n);
    inicializa_fila(seqmons2); // incializa 2 sequencia de acoes do monstro
    insere_fila(seqmons2, c_m[5].n);
    insere_fila(seqmons2, c_m[6].n);
    insere_fila(seqmons2, c_m[7].n);
    insere_fila(seqmons2, c_m[8].n);
    insere_fila(seqmons2, c_m[9].n);
    inicializa_fila(seqmons3); // incializa 3 sequencia de acoes do monstro
    insere_fila(seqmons3, c_m[10].n);
    insere_fila(seqmons3, c_m[11].n);
    insere_fila(seqmons3, c_m[12].n);
    insere_fila(seqmons3, c_m[13].n);
    insere_fila(seqmons3, c_m[14].n);
    inicializa_fila(seqmons4); // incializa 4 sequencia de acoes do monstro
    insere_fila(seqmons4, c_m[15].n);
    insere_fila(seqmons4, c_m[16].n);
    insere_fila(seqmons4, c_m[17].n);
    insere_fila(seqmons4, c_m[18].n);
    insere_fila(seqmons4, c_m[19].n);
    inicializa_fila(seqmons5); // incializa 5 sequencia de acoes do monstro
    insere_fila(seqmons5, c_m[20].n);
    insere_fila(seqmons5, c_m[21].n);
    insere_fila(seqmons5, c_m[22].n);
    insere_fila(seqmons5, c_m[23].n);
    insere_fila(seqmons5, c_m[24].n);
}
void mostra_monstro(monstro *m, tp_fila seqmons1, tp_fila seqmons2, tp_fila seqmons3, tp_fila seqmons4, tp_fila seqmons5, carta_monstro *c_m)
{

    printf("Monstros:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("----------------------------------------------------------\n");
        printf("Nome: %s\n", m[i].nome);
        printf("Vida: %d Hp\n", m[i].h);

        if (i == 0)
        {
            print_fila(&seqmons1, c_m);
            printf("\n");
        }
        if (i == 1)
        {
            print_fila(&seqmons2, c_m);
            printf("\n");
        }
        if (i == 2)
        {
            print_fila(&seqmons3, c_m);
            printf("\n");
        }
        if (i == 3)
        {
            print_fila(&seqmons4, c_m);
            printf("\n");
        }
        if (i == 4)
        {
            print_fila(&seqmons5, c_m);
            printf("\n");
        }
    }
    printf("----------------------------------------------------------\n");
}

void print_carta_monstro(carta_monstro c_m)
{

    printf("%d ", c_m.v);
    if (c_m.t == 1)
    {
        printf("Ataque  ");
    }
    if (c_m.t == 2)
    {
        printf("Defesa  ");
    }
}

void print_fila(tp_fila *f, carta_monstro *c_m)
{

    printf("Acoes: ");
    tp_fila fila_aux; // Criando uma fila auxiliar
    inicializa_fila(&fila_aux);

    while (!fila_vazia(f))
    {
        int e;
        remove_fila(f, &e);            // retira o elemento da frente da fila
        carta_monstro card_m = c_m[e]; // cria uma variavel carta_monstro e faz ela receber c[o elemento retirado]
        print_carta_monstro(card_m);   // chama a funcao de printar as cartas, serao printadas ate acabar a pilha pelo while
        insere_fila(&fila_aux, e);     // manda o elemento pra fila auxiliar
    }
    while (!fila_vazia(&fila_aux))
    {

        int e;
        remove_fila(&fila_aux, &e); // retira da fila auxuliar
        insere_fila(f, e);          // manda para a original preservando a ordem
    }
}

int usar_prox_acao(tp_fila *f, carta_monstro *c_m)
{

    int e;

    remove_fila(f, &e);            // retira o elemento da frente da fila
    carta_monstro card_m = c_m[e]; // cria uma variavel carta_monstro e faz ela receber c[o elemento retirado]
    print_carta_monstro(card_m);   // chama a funcao de printar as cartas, serao printadas ate acabar a pilha pelo while
    printf("\n");

    return e;
}

void acao_player_no_monstro(monstro *m, resultadoJogada rj, jogador *j, int mns)
{

    int dano = rj.dano_total;
    int defesa = rj.defesa_total;

    if (m[mns].esc != 0)
    { // Se o monstro tiver escudo
        if (m[mns].esc >= dano)
        {
            m[mns].esc = m[mns].esc - dano;
            m[mns].esc = 0;
        }
        else
        {
            dano -= m[mns].esc;
            m[mns].esc = 0;
            m[mns].h -= dano; // Reduz a vida restante
        }
    }
    else
    {
        m[mns].h = m[mns].h - dano;
    }
    j->esc = defesa;
}

void acao_monstro_no_player(jogador *j, carta_monstro *c_m, monstro *m, int valor_acao_mons, int mns)
{

    int e;
    int valor;

    e = valor_acao_mons;
    valor = c_m[e].v;

    if (c_m[e].t == 1)
    {                    // É um ataque
        if (j->esc != 0) // O player tem escudo
        {
            if (j->esc >= valor)
            {
                j->esc = j->esc - valor;
                j->esc = 0;
            }
            else
            {
                // O escudo não é suficiente para cobrir todo o dano
                valor -= j->esc;
                j->esc = 0;
                j->h -= valor; // Reduz a vida restante
            }
        }
        else
        {
            j->h -= valor; // Não há escudo, então reduz a vida diretamente
        }
    }
    else
    {                                    // É uma defesa
        m[mns].esc = m[mns].esc + valor; // Adiciona a defesa no escudo do monstro
    }
}

int verifica_monstro_vivo(monstro *m)
{
    if (m[0].h <= 0)
    {
        return 1;
    }
    return 0;
}

int verifica_player_vivo(jogador *j)
{

    if (j->h <= 0)
    {
        return 1;
    }
    return 0;
}
