#include "stru.h"

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
    strcpy(c[0].nome, "Chute"); // NOME
    c[1].t = 1;                 // TIPO
    c[0].v = 5;                 // VALOR
    c[0].c = 1;                 // CUSTO

    // CARTA 1 ATAQUE
    strcpy(c[1].nome, "Soco"); // NOME
    c[1].t = 1;                // TIPO
    c[1].v = 5;                // VALOR
    c[1].c = 1;                // CUSTO

    // CARTA 2 ATAQUE
    strcpy(c[2].nome, "Facada"); // NOME
    c[1].t = 1;                  // TIPO
    c[2].v = 5;                  // VALOR
    c[2].c = 1;                  // CUSTO

    // CARTA 3 ATAQUE
    strcpy(c[3].nome, "Espadada"); // NOME
    c[1].t = 1;                    // TIPO
    c[3].v = 5;                    // VALOR
    c[3].c = 1;                    // CUSTO

    // CARTA 4 ATAQUE
    strcpy(c[4].nome, "Facadas Duplas"); // NOME
    c[1].t = 1;                          // TIPO
    c[4].v = 5;                          // VALOR
    c[4].c = 1;                          // CUSTO

    // CARTA 5 ATAQUE
    strcpy(c[5].nome, "Martelo de Espinhos"); // NOME
    c[1].t = 1;                               // TIPO
    c[5].v = 5;                               // VALOR
    c[5].c = 1;                               // CUSTO

    // CARTA 6 ATAQUE
    strcpy(c[6].nome, "Lanca chamas"); // NOME
    c[1].t = 1;                        // TIPO
    c[6].v = 5;                        // VALOR
    c[6].c = 1;                        // CUSTO

    // CARTA 7 ATAQUE
    strcpy(c[7].nome, "Bombas Explosivas"); // NOME
    c[1].t = 1;                             // TIPO
    c[7].v = 5;                             // VALOR
    c[7].c = 1;                             // CUSTO

    // CARTA 8 ATAQUE
    strcpy(c[8].nome, "Chuva de Asteroides"); // NOME
    c[1].t = 1;                               // TIPO
    c[8].v = 5;                               // VALOR
    c[8].c = 1;                               // CUSTO

    // CARTA 9 ATAQUE
    strcpy(c[9].nome, "Raios Infinitos"); // NOME
    c[1].t = 1;                           // TIPO
    c[9].v = 5;                           // VALOR
    c[9].c = 1;                           // CUSTO

    // CARTA 10 DEFESA
    strcpy(c[10].nome, "Escudo"); // NOME
    c[2].t = 2;                   // TIPO
    c[10].v = 5;                  // VALOR
    c[10].c = 1;                  // CUSTO

    // CARTA 11 DEFESA
    strcpy(c[11].nome, "Armadura Dourada"); // NOME
    c[2].t = 2;                             // TIPO
    c[11].v = 5;                            // VALOR
    c[11].c = 1;                            // CUSTO

    // CARTA 12 DEFESA
    strcpy(c[12].nome, "Barreira de Pedras"); // NOME
    c[2].t = 2;                               // TIPO
    c[12].v = 5;                              // VALOR
    c[12].c = 1;                              // CUSTO

    // CARTA 13 DEFESA
    strcpy(c[13].nome, "Parede de Vento"); // NOME
    c[2].t = 2;                            // TIPO
    c[13].v = 5;                           // VALOR
    c[13].c = 1;                           // CUSTO

    // CARTA 14 DEFESA
    strcpy(c[14].nome, "Muro Impenetravel "); // NOME
    c[2].t = 2;                               // TIPO
    c[14].v = 5;                              // VALOR
    c[14].c = 1;                              // CUSTO

    // CARTA 15 DEFESA
    strcpy(c[15].nome, "Capacete Blindado"); // NOME
    c[2].t = 2;                              // TIPO
    c[15].v = 5;                             // VALOR
    c[15].c = 1;                             // CUSTO

    // CARTA 16 DEFESA
    strcpy(c[16].nome, "Colete balistico"); // NOME
    c[2].t = 2;                             // TIPO
    c[16].v = 5;                            // VALOR
    c[16].c = 1;                            // CUSTO

    // CARTA 17 DEFESA
    strcpy(c[17].nome, "Camisa de Laranjinha"); // NOME
    c[2].t = 2;                                 // TIPO
    c[17].v = 5;                                // VALOR
    c[17].c = 1;                                // CUSTO

    // CARTA 18 DEFESA
    strcpy(c[18].nome, "Carro blindado de Soussa"); // NOME
    c[2].t = 2;                                     // TIPO
    c[18].v = 5;                                    // VALOR
    c[18].c = 1;                                    // CUSTO

    // CARTA 19 DEFESA
    strcpy(c[19].nome, "Almofadas"); // NOME
    c[2].t = 2;                      // TIPO
    c[19].v = 5;                     // VALOR
    c[19].c = 1;                     // CUSTO

    // CARTA 20 ESPECIAL
    strcpy(c[20].nome, "Piada"); // NOME
    c[3].t = 3;                  // TIPO
    c[20].v = 5;                 // VALOR
    c[20].c = 1;                 // CUSTO

    // CARTA 21 ESPECIAL
    strcpy(c[21].nome, "Esparadrapo"); // NOME
    c[3].t = 3;                        // TIPO
    c[21].v = 5;                       // VALOR
    c[21].c = 1;                       // CUSTO

    // CARTA 22 ESPECIAL
    strcpy(c[22].nome, "Sopro da Abstracao"); // NOME
    c[3].t = 3;                               // TIPO
    c[22].v = 5;                              // VALOR
    c[22].c = 1;                              // CUSTO

    // CARTA 23 ESPECIAL
    strcpy(c[23].nome, "Renato Paiva"); // NOME
    c[3].t = 3;                         // TIPO
    c[23].v = 5;                        // VALOR
    c[23].c = 1;                        // CUSTO

    // CARTA 24 ESPECIAL
    strcpy(c[24].nome, "SUS"); // NOME
    c[3].t = 3;                // TIPO
    c[24].v = 5;               // VALOR
    c[24].c = 1;               // CUSTO
}

void cria_deck(tp_pilha *p_deck, carta *c)
{

    tp_item c[0];

    inicializa_fila(p_deck);

    // push(p_deck, c[0]);
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

        if (c[j].t == 1)
        {

            printf("Cartas de Ataque:\n");
            for (int i = 0; i <= 9; i++)
            {
                printf("#####################################\n");
                printf("Nome: %s\n", c[i].nome);
                printf("Tipo: Ataque\n");
                printf("Valor: %d\n", c[i].v);
                printf("Custo: %d energia\n", c[i].c);
            }
            printf("#####################################\n");
        }

        else if (c[j].t == 2)
        {

            printf("Cartas de Desefa:\n");
            for (int i = 10; i <= 19; i++)
            {
                printf("#####################################\n");
                printf("Nome: %s\n", c[i].nome);
                printf("Tipo: Defesa\n");
                printf("Valor: %d\n", c[i].v);
                printf("Custo: %d energia\n", c[i].c);
            }
            printf("#####################################\n");
        }

        else if (c[j].t == 3)
        {

            printf("Cartas Especias:\n");
            for (int i = 20; i <= 24; i++)
            {
                printf("#####################################\n");
                printf("Nome: %s\n", c[i].nome);
                printf("Tipo: Especial\n");
                printf("Valor: %d\n", c[i].v);
                printf("Custo: %d energia\n", c[i].c);
            }
            printf("#####################################\n");
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
    int v1 = 20;      // VIDA DO PRIMEIRO MONSTRO

    strcpy(m[0].nome, "Homem Gosma"); // NOME DO MOSNTRO 1
    m[0].h = v1;
    inicializa_fila(&seqmons1);
    insere_fila(&seqmons1, 5);
    insere_fila(&seqmons1, 5);
    insere_fila(&seqmons1, 3);
    insere_fila(&seqmons1, 5);
    insere_fila(&seqmons1, 5);
    insere_fila(&seqmons1, 5);

    // MONSTRO 2
    tp_fila seqmons2; // FILA DE POSSIVEIS ATAQUES E DEFESAS
    int v2 = 30;      // VIDA DO SEGUNDO MONSTRO

    strcpy(m[1].nome, "Gaviao Feroz"); // NOME DO MOSNTRO 2
    m[1].h = v2;
    inicializa_fila(&seqmons2);
    insere_fila(&seqmons2, 5);
    insere_fila(&seqmons2, 5);
    insere_fila(&seqmons2, 5);
    insere_fila(&seqmons2, 5);
    insere_fila(&seqmons2, 5);
    insere_fila(&seqmons2, 5);

    // MONSTRO 3
    tp_fila seqmons3; // FILA DE POSSIVEIS ATAQUES E DEFESAS
    int v3 = 40;      // VIDA DO TERCEIRO MONSTRO

    strcpy(m[2].nome, "Gigante de Pedra"); // NOME DO MOSNTRO 3
    m[2].h = v3;
    inicializa_fila(&seqmons3);
    insere_fila(&seqmons3, 5);
    insere_fila(&seqmons3, 5);
    insere_fila(&seqmons3, 5);
    insere_fila(&seqmons3, 5);
    insere_fila(&seqmons3, 5);
    insere_fila(&seqmons3, 5);

    // MONSTRO 4
    tp_fila seqmons4; // FILA DE POSSIVEIS ATAQUES E DEFESAS
    int v4 = 50;      // VIDA DO QUARTO MONSTRO

    strcpy(m[3].nome, "Cobra de Duas Cabecas"); // NOME DO MOSNTRO 4
    m[3].h = v4;
    inicializa_fila(&seqmons4);
    insere_fila(&seqmons4, 5);
    insere_fila(&seqmons4, 5);
    insere_fila(&seqmons4, 5);
    insere_fila(&seqmons4, 5);
    insere_fila(&seqmons4, 5);
    insere_fila(&seqmons4, 5);

    // MONSTRO 5 (BOSS FINAL)
    tp_fila seqmons5; // FILA DE POSSIVEIS ATAQUES E DEFESAS
    int v5 = 60;      // VIDA DO QUINTO MONSTRO

    strcpy(m[4].nome, "Mob Dick"); // NOME DO MOSNTRO 5
    m[4].h = v5;
    inicializa_fila(&seqmons5);
    insere_fila(&seqmons5, 5);
    insere_fila(&seqmons5, 5);
    insere_fila(&seqmons5, 5);
    insere_fila(&seqmons5, 5);
    insere_fila(&seqmons5, 5);
    insere_fila(&seqmons5, 5);
}

int mostra_monstro(monstro *m)
{

    int e;

    printf("Mosntros:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("#####################################\n");
        printf("Nome: %s\n", m[i].nome);
        printf("Vida: %d Hp\n", m[i].h);
    }
    printf("#####################################\n");

    printf("Deseja comecar o jogo? (Digite S/s)\n");
    scanf(" %d", &e);

    if (e == 'S' || 's')
    {
        return 0;
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
    tp_pilha p_deck;     // Deck de Cartas do jogo
    carta cartas[25];    // ARRAY PARA BOTAR AS CARTAS ATAQUE, DEFESA, ESPECIAL
    monstro monstros[5]; // ARRAY PARA OS MONSTROS
    char escolha;

    cria_cartas(cartas);        // Funcao de Cricao das Cartas
    cria_monstro(monstros);     // Funcao para Criar os Monstros
    cria_deck(&p_deck, cartas); // Funcao que Cria o deck de cartas

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
        mostra_monstro(monstros); // Funco para visualizacao dos Monstros do jogo
    }

    if (mostra_monstro(monstros) == 0)
    {
        cria_jogador(&j);
    }

    cria_jogador(&j); // Funcao para criar o jogador
}
