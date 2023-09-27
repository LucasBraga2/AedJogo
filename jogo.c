#include "fila.h"
#include "pilha.h"
#include <time.h>
#include <stdlib.h>

void cria_jogador(jogador *j)
{

    printf("\nInsira o nome do jogador:\n");
    scanf(" %[^\n]s", &j->nome);
    j->h = 20;
    j->e = 5;

    printf("#####################################\n");
    printf("Nome: %s \nVida: %d Hp \nEnergia: %d/5 \n", j->nome, j->h, j->e);
    printf("#####################################\n");
}

void cria_cartas(carta *c)
{

    // CARTA 0 ATAQUE
    c[0].n = 0;                 // IDENTIFICADOR DA CARTA
    strcpy(c[0].nome, "Chute"); // NOME
    c[0].t = 1;                 // TIPO
    c[0].v = 5;                 // VALOR
    c[0].c = 1;                 // CUSTO

    // CARTA 1 ATAQUE
    c[1].n = 1;                // IDENTIFICADOR DA CARTA
    strcpy(c[1].nome, "Soco"); // NOME
    c[1].t = 1;                // TIPO
    c[1].v = 6;                // VALOR
    c[1].c = 1;                // CUSTO

    // CARTA 2 ATAQUE
    c[2].n = 2;                  // IDENTIFICADOR DA CARTA
    strcpy(c[2].nome, "Facada"); // NOME
    c[2].t = 1;                  // TIPO
    c[2].v = 9;                  // VALOR
    c[2].c = 2;                  // CUSTO

    // CARTA 3 ATAQUE
    c[3].n = 3;                    // IDENTIFICADOR DA CARTA
    strcpy(c[3].nome, "Espadada"); // NOME
    c[3].t = 1;                    // TIPO
    c[3].v = 10;                   // VALOR
    c[3].c = 2;                    // CUSTO

    // CARTA 4 ATAQUE
    c[4].n = 4;                          // IDENTIFICADOR DA CARTA
    strcpy(c[4].nome, "Facadas Duplas"); // NOME
    c[4].t = 1;                          // TIPO
    c[4].v = 14;                         // VALOR
    c[4].c = 3;                          // CUSTO

    // CARTA 5 ATAQUE
    c[5].n = 5;                               // IDENTIFICADOR DA CARTA
    strcpy(c[5].nome, "Martelo de Espinhos"); // NOME
    c[5].t = 1;                               // TIPO
    c[5].v = 15;                              // VALOR
    c[5].c = 3;                               // CUSTO

    // CARTA 6 ATAQUE
    c[6].n = 6;                        // IDENTIFICADOR DA CARTA
    strcpy(c[6].nome, "Lanca chamas"); // NOME
    c[6].t = 1;                        // TIPO
    c[6].v = 18;                       // VALOR
    c[6].c = 4;                        // CUSTO

    // CARTA 7 ATAQUE
    c[7].n = 7;                             // IDENTIFICADOR DA CARTA
    strcpy(c[7].nome, "Bombas Explosivas"); // NOME
    c[7].t = 1;                             // TIPO
    c[7].v = 21;                            // VALOR
    c[7].c = 4;                             // CUSTO

    // CARTA 8 ATAQUE
    c[8].n = 8;                               // IDENTIFICADOR DA CARTA
    strcpy(c[8].nome, "Chuva de Asteroides"); // NOME
    c[8].t = 1;                               // TIPO
    c[8].v = 26;                              // VALOR
    c[8].c = 5;                               // CUSTO

    // CARTA 9 ATAQUE
    c[9].n = 9;                           // IDENTIFICADOR DA CARTA
    strcpy(c[9].nome, "Raios Infinitos"); // NOME
    c[9].t = 1;                           // TIPO
    c[9].v = 30;                          // VALOR
    c[9].c = 6;                           // CUSTO

    // CARTA 10 DEFESA
    c[10].n = 10;                 // IDENTIFICADOR DA CARTA
    strcpy(c[10].nome, "Escudo"); // NOME
    c[10].t = 2;                  // TIPO
    c[10].v = 4;                  // VALOR
    c[10].c = 1;                  // CUSTO

    // CARTA 11 DEFESA
    c[11].n = 11;                            // IDENTIFICADOR DA CARTA
    strcpy(c[11].nome, "Capacete Blindado"); // NOME
    c[11].t = 2;                             // TIPO
    c[11].v = 5;                             // VALOR
    c[11].c = 1;                             // CUSTO

    // CARTA 12 DEFESA
    c[12].n = 12;                           // IDENTIFICADOR DA CARTA
    strcpy(c[12].nome, "Armadura Dourada"); // NOME
    c[12].t = 2;                            // TIPO
    c[12].v = 9;                            // VALOR
    c[12].c = 2;                            // CUSTO

    // CARTA 13 DEFESA
    c[13].n = 13;                             // IDENTIFICADOR DA CARTA
    strcpy(c[13].nome, "Barreira de Pedras"); // NOME
    c[13].t = 2;                              // TIPO
    c[13].v = 11;                             // VALOR
    c[13].c = 2;                              // CUSTO

    // CARTA 14 DEFESA
    c[14].n = 14;                          // IDENTIFICADOR DA CARTA
    strcpy(c[14].nome, "Parade de Vento"); // NOME
    c[14].t = 2;                           // TIPO
    c[14].v = 15;                          // VALOR
    c[14].c = 3;                           // CUSTO

    // CARTA 15 DEFESA
    c[15].n = 15;                            // IDENTIFICADOR DA CARTA
    strcpy(c[15].nome, "Muro Impenetravel"); // NOME
    c[15].t = 2;                             // TIPO
    c[15].v = 17;                            // VALOR
    c[15].c = 3;                             // CUSTO

    // CARTA 16 DEFESA
    c[16].n = 16;                           // IDENTIFICADOR DA CARTA
    strcpy(c[16].nome, "Colete balistico"); // NOME
    c[16].t = 2;                            // TIPO
    c[16].v = 21;                           // VALOR
    c[16].c = 4;                            // CUSTO

    // CARTA 17 DEFESA
    c[17].n = 17;                    // IDENTIFICADOR DA CARTA
    strcpy(c[17].nome, "Almofadas"); // NOME
    c[17].t = 2;                     // TIPO
    c[17].v = 22;                    // VALOR
    c[17].c = 4;                     // CUSTO

    // CARTA 18 DEFESA
    c[18].n = 18;                               // IDENTIFICADOR DA CARTA
    strcpy(c[18].nome, "Camisa de Laranjinha"); // NOME
    c[18].t = 2;                                // TIPO
    c[18].v = 28;                               // VALOR
    c[18].c = 5;                                // CUSTO

    // CARTA 19 DEFESA
    c[19].n = 19;                                   // IDENTIFICADOR DA CARTA
    strcpy(c[19].nome, "Carro blindado de Soussa"); // NOME
    c[19].t = 2;                                    // TIPO
    c[19].v = 30;                                   // VALOR
    c[19].c = 5;                                    // CUSTO

    // CARTA 20 ESPECIAL
    c[20].n = 20;                        // IDENTIFICADOR DA CARTA
    strcpy(c[20].nome, "Piada");         // NOME
    strcpy(c[20].habilidade, "Inserir"); // HABILIDADE
    c[20].t = 3;                         // TIPO
    c[20].v = 5;                         // VALOR
    c[20].c = 1;                         // CUSTO

    // CARTA 21 ESPECIAL
    c[21].n = 21;                        // IDENTIFICADOR DA CARTA
    strcpy(c[21].nome, "Esparadrapo");   // NOME
    strcpy(c[21].habilidade, "Inserir"); // HABILIDADE
    c[21].t = 3;                         // TIPO
    c[21].v = 5;                         // VALOR
    c[21].c = 2;                         // CUSTO

    // CARTA 22 ESPECIAL
    c[22].n = 22;                             // IDENTIFICADOR DA CARTA
    strcpy(c[22].nome, "Sopro da Abstracao"); // NOME
    strcpy(c[22].habilidade, "Inserir");      // HABILIDADE
    c[22].t = 3;                              // TIPO
    c[22].v = 5;                              // VALOR
    c[22].c = 3;                              // CUSTO

    // CARTA 23 ESPECIAL
    c[23].n = 23;                        // IDENTIFICADOR DA CARTA
    strcpy(c[23].nome, "Renato Paiva");  // NOME
    strcpy(c[23].habilidade, "Inserir"); // HABILIDADE
    c[23].t = 3;                         // TIPO
    c[23].v = 5;                         // VALOR
    c[23].c = 4;                         // CUSTO

    // CARTA 24 ESPECIAL
    c[24].n = 24;                        // IDENTIFICADOR DA CARTA
    strcpy(c[24].nome, "SUS");           // NOME
    strcpy(c[24].habilidade, "Inserir"); // HABILIDADE
    c[24].t = 3;                         // TIPO
    c[24].v = 5;                         // VALOR
    c[24].c = 3;                         // CUSTO
}

void cria_deck(tp_pilha *p_deck)
{
    inicializa_pilha(p_deck);
}

void embaralhar_deck(tp_pilha *p_deck, carta *c)
{
    int a;
    srand( time (NULL)); // inicializa o gerador de numeros aleatório

        for (int i=0; i < 10; i++){
        a = rand() % 25; // Gera valores de 0 a 24
        push(p_deck, c[a].n);//inserindo na pilha de cava
        }

}

void retira_carta()
{
}

void mostrar_cartas(carta *c)
{
    int j;
    char t2 = 'N';

    while (t2 == 'N' || t2 == 'n')
    {
        printf("Digite 1 para Ataques\n");
        printf("Digite 2 para Defesas\n");
        printf("Digite 3 para Especias\n");
        printf("\n");
        scanf("%d", &j);

        if (j == 1)
        {

            printf("Cartas de Ataque:\n");
            for (int i = 0; i <= 9; i++)
            {
                printf("-----------------------------------\n");
                printf("Nome: %s\n", c[i].nome);
                printf("Tipo: Ataque\n");
                printf("Valor: %d\n", c[i].v);
                printf("Custo: %d energia\n", c[i].c);
            }
            printf("-----------------------------------\n");
        }

        else if (j == 2)
        {

            printf("Cartas de Desefa:\n");
            for (int i = 10; i <= 19; i++)
            {
                printf("-----------------------------------\n");
                printf("Nome: %s\n", c[i].nome);
                printf("Tipo: Defesa\n");
                printf("Valor: %d\n", c[i].v);
                printf("Custo: %d energia\n", c[i].c);
            }
            printf("-----------------------------------\n");
        }

        else if (j == 3)
        {

            printf("Cartas Especias:\n");
            for (int i = 20; i <= 24; i++)
            {
                printf("-----------------------------------\n");
                printf("Nome: %s\n", c[i].nome);
                printf("Tipo: Especial\n");
                printf("Habilidade: %s\n", c[i].habilidade);
                printf("Custo: %d energia\n", c[i].c);
            }
            printf("-----------------------------------\n");
        }

        else
        {
            printf("Opcao invalida\n");
            continue;
        }

        printf("Deseja sair: (S/N)\n");
        scanf(" %c", &t2);

        if (t2 == 'S' || t2 == 's')
        {
            break;
        }
    }
}

void cria_monstro(monstro *m)
{

    // MONSTRO 1
    tp_fila seqmons1; // FILA DE POSSIVEIS ATAQUES E DEFESAS
    int vida1 = 20;   // VIDA DO PRIMEIRO MONSTRO
    // DANOS E DEFESAS E SEUS VALORES
    int dano1_m1 = 5;
    int defesa1_m1 = 5;
    int dano2_m1 = 5;
    int defesa2_m1 = 5;
    int dano3_m1 = 5;
    int defesa3_m1 = 5;

    strcpy(m[0].nome, "Homem Gosma"); // NOME DO MONSTRO 1
    m[0].h = vida1;
    inicializa_fila(&seqmons1);
    m[0].v = dano1_m1;
    insere_fila(&seqmons1, dano1_m1);
    m[0].v = defesa1_m1;
    insere_fila(&seqmons1, defesa1_m1);
    m[0].v = dano2_m1;
    insere_fila(&seqmons1, dano2_m1);
    m[0].v = defesa2_m1;
    insere_fila(&seqmons1, defesa2_m1);
    m[0].v = dano3_m1;
    insere_fila(&seqmons1, dano3_m1);
    m[0].v = defesa3_m1;
    insere_fila(&seqmons1, defesa3_m1);

    // MONSTRO 2
    tp_fila seqmons2; // FILA DE POSSIVEIS ATAQUES E DEFESAS
    int vida2 = 30;   // VIDA DO SEGUNDO MONSTRO
    // DANOS E DEFESAS E SEUS VALORES
    int defesa1_m2 = 4;
    int dano1_m2 = 6;
    int dano2_m2 = 5;
    int dano3_m2 = 4;
    int defesa2_m2 = 5;
    int dano4_m2 = 5;

    strcpy(m[1].nome, "Gaviao Feroz"); // NOME DO MOSNTRO 2
    m[1].h = vida2;
    inicializa_fila(&seqmons2);
    m[1].v = defesa1_m2;
    insere_fila(&seqmons2, defesa1_m2);
    m[1].v = dano1_m2;
    insere_fila(&seqmons2, dano1_m2);
    m[1].v = dano2_m2;
    insere_fila(&seqmons2, dano2_m2);
    m[1].v = dano3_m2;
    insere_fila(&seqmons2, dano3_m2);
    m[1].v = defesa2_m2;
    insere_fila(&seqmons2, defesa2_m2);
    m[1].v = dano4_m2;
    insere_fila(&seqmons2, dano4_m2);

    // MONSTRO 3
    tp_fila seqmons3; // FILA DE POSSIVEIS ATAQUES E DEFESAS
    int vida3 = 40;   // VIDA DO TERCEIRO MONSTRO
    // DANOS E DEFESAS E SEUS VALORES
    int dano1_m3 = 5;
    int defesa1_m3 = 5;
    int defesa2_m3 = 5;
    int dano2_m3 = 8;
    int defesa3_m3 = 7;
    int dano3_m3 = 6;

    strcpy(m[2].nome, "Gigante de Pedra"); // NOME DO MOSNTRO 3
    m[2].h = vida3;
    inicializa_fila(&seqmons3);
    m[2].v = dano1_m3;
    insere_fila(&seqmons3, dano1_m3);
    m[2].v = defesa1_m3;
    insere_fila(&seqmons3, defesa1_m3);
    m[2].v = defesa2_m3;
    insere_fila(&seqmons3, defesa2_m3);
    m[2].v = dano2_m3;
    insere_fila(&seqmons3, dano2_m3);
    m[2].v = defesa3_m3;
    insere_fila(&seqmons3, defesa3_m3);
    m[2].v = dano3_m3;
    insere_fila(&seqmons3, dano3_m3);

    // MONSTRO 4
    tp_fila seqmons4; // FILA DE POSSIVEIS ATAQUES E DEFESAS
    int vida4 = 50;   // VIDA DO QUARTO MONSTRO
    // DANOS E DEFESAS E SEUS VALORES
    int defesa1_m4 = 5;
    int dano1_m4 = 8;
    int dano2_m4 = 5;
    int defesa2_m4 = 7;
    int dano3_m4 = 5;
    int dano4_m4 = 5;

    strcpy(m[3].nome, "Cobra de Duas Cabecas"); // NOME DO MOSNTRO 4
    m[3].h = vida4;
    inicializa_fila(&seqmons4);
    m[3].v = defesa1_m4;
    insere_fila(&seqmons4, defesa1_m4);
    m[3].v = dano1_m4;
    insere_fila(&seqmons4, dano1_m4);
    m[3].v = dano2_m4;
    insere_fila(&seqmons4, dano2_m4);
    m[3].v = defesa2_m4;
    insere_fila(&seqmons4, defesa2_m4);
    m[3].v = dano3_m4;
    insere_fila(&seqmons4, dano3_m4);
    m[3].v = dano4_m4;
    insere_fila(&seqmons4, dano4_m4);

    // MONSTRO 5 (BOSS FINAL)
    tp_fila seqmons5; // FILA DE POSSIVEIS ATAQUES E DEFESAS
    int vida5 = 60;   // VIDA DO QUINTO MONSTRO
    // DANOS E DEFESAS E SEUS VALORES
    int dano1_m5 = 7;
    int dano2_m5 = 7;
    int defesa1_m5 = 5;
    int defesa2_m5 = 5;
    int dano3_m5 = 7;
    int dano4_m5 = 7;

    strcpy(m[4].nome, "Mob Dick(Boss Final)"); // NOME DO MOSNTRO 5
    m[4].h = vida5;
    inicializa_fila(&seqmons5);
    m[4].v = dano1_m5;
    insere_fila(&seqmons5, dano1_m5);
    m[4].v = dano2_m5;
    insere_fila(&seqmons5, dano2_m5);
    m[4].v = defesa1_m5;
    insere_fila(&seqmons5, defesa1_m5);
    m[4].v = defesa2_m5;
    insere_fila(&seqmons5, defesa2_m5);
    m[4].v = dano3_m5;
    insere_fila(&seqmons5, dano3_m5);
    m[4].v = dano4_m5;
    insere_fila(&seqmons5, dano4_m5);
}

int mostra_monstro(monstro *m)
{

    char e;

    printf("Mosntros:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("-----------------------------------\n");
        printf("Nome: %s\n", m[i].nome);
        printf("Vida: %d Hp\n", m[i].h);
    }
    printf("-----------------------------------\n");

    printf("Deseja comecar o jogo? (Digite S/s)\n");
    scanf(" %c", &e);

    if (e == 'S' || 's')
    {
        return 0;
    }
}

void print_carta(carta c)
{
    printf("Nome: %s\n", c.nome);
    if (c.t == 1)
    {
        printf("Tipo: Ataque\n");
    }
    if (c.t == 2)
    {
        printf("Tipo: Defesa\n");
    }
    if (c.t == 3)
    {
        printf("Tipo: Especial\n");
    }
    printf("Valor: %d\n", c.v);
    printf("Custo: %d\n", c.c);
    printf("-----------------------------------\n");
}

void print_pilha(tp_pilha *p_deck, carta *c)
{
    printf("Deck de cartas:\n");
    printf("-----------------------------------\n");
    tp_pilha pilha_temp;
    inicializa_pilha(&pilha_temp);

    while (!pilha_vazia(p_deck))
    {
        int e;
        pop(p_deck, &e);
        carta card = c[e];
        print_carta(card);
        push(&pilha_temp, e);
    }
    while (!pilha_vazia(&pilha_temp))
    {
        int e;
        pop(&pilha_temp, &e);
        push(p_deck, e);
    }
}

void toma_dano()
{
}

void ataca()
{
}

void defende()
{
}

void cura()
{
}

void defende_monstro()
{
}

int main()
{
    jogador j;           // Jogador Principal
    tp_pilha p_deck;     // Deck de Cartas do jogo, pilha de cartas disponiveis no total
    carta cartas[25];    // ARRAY PARA BOTAR AS CARTAS ATAQUE, DEFESA, ESPECIAL
    monstro monstros[5]; // ARRAY PARA OS MONSTROS
    char escolha;

    cria_cartas(cartas);    // Funcao de Cricao das Cartas
    cria_monstro(monstros); // Funcao para Criar os Monstros
    // print_carta(&cartas[14]); // Funcao para printar uma carta especifica
    cria_deck(&p_deck); // Funcao que Cria o deck de cartas
    embaralhar_deck(&p_deck, cartas);//Funcao que embaralha o deck inicial

    printf("Deseja visualizar as cartas disponiveis no jogo:\n");
    printf("S/N\n");
    scanf(" %c", &escolha);

    if (escolha == 'S' || escolha == 's')
    {
        mostrar_cartas(cartas); // Funcao para visualizacao de todas cartas disponiveis no jogo
    }

    printf("Deseja visualizar os monstros disponiveis no jogo:\n");
    printf("S/N\n");
    scanf(" %c", &escolha);

    if (escolha == 'S' || escolha == 's')
    {
        mostra_monstro(monstros); // Funcao para visualizacao dos Monstros do jogo
    }

    printf("Deseja visualizar o deck de 10 cartas inicial(Embaralhado):\n");
    printf("S/N\n");
    scanf(" %c", &escolha);

    if (escolha == 'S' || escolha == 's')
    {
        print_pilha(&p_deck, cartas); // Funcao para printar pilha
    }

    cria_jogador(&j); // Funcao para criar o jogador

    printf("Pressione Enter para fechar o programa...\n");

    system("pause"); // Pausa até que o usuário pressione Enter

    return 0;
}
