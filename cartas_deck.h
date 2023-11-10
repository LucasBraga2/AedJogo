#include "fila.h"
#include "pilha.h"
#include "listase.h"
#include <locale.h>
#include <stdbool.h>

typedef struct
{
    int dano_total;
    int defesa_total;
} resultadoJogada;
void cria_cartas(carta *c)
{
    setlocale(LC_ALL, "Portuguese");
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
    c[20].n = 20;                                                                                                                                                                                                                // IDENTIFICADOR DA CARTA
    strcpy(c[20].nome, "Piada");                                                                                                                                                                                                 // NOME
    strcpy(c[20].habilidade, "Voce conta uma piada pro monstro, ele achou tao engracado que te mostrou uma carta que estava escondida no chao (+1 carta). Porem, ele te deu um tapa de tao engracada que foi a piada. (-1HP.)"); // HABILIDADE
    c[20].t = 3;                                                                                                                                                                                                                 // TIPO
    c[20].v = 5;                                                                                                                                                                                                                 // VALOR
    c[20].c = 1;                                                                                                                                                                                                                 // CUSTO

    // CARTA 21 ESPECIAL
    c[21].n = 21;                                                                                                                        // IDENTIFICADOR DA CARTA
    strcpy(c[21].nome, "Esparadrapo");                                                                                                   // NOME
    strcpy(c[21].habilidade, "Voce achou um esparadrapo. Recupere 8HP! Ops... Parece que ele grudou em uma de suas cartas (-1 carta)."); // HABILIDADE
    c[21].t = 3;                                                                                                                         // TIPO
    c[21].v = 5;                                                                                                                         // VALOR
    c[21].c = 2;                                                                                                                         // CUSTO

    // CARTA 22 ESPECIAL
    c[22].n = 22;                                                                                                                                                                        // IDENTIFICADOR DA CARTA
    strcpy(c[22].nome, "Sopro da Abstracao");                                                                                                                                            // NOME
    strcpy(c[22].habilidade, "Voce pede ajuda a um experiente mestre e ele lhe concede 8HP! Opa, na verdade era so um mendigo. Ele te deu algo estranho pra comer (-2HP(+6 no toal!)."); // HABILIDADE
    c[22].t = 3;                                                                                                                                                                         // TIPO
    c[22].v = 5;                                                                                                                                                                         // VALOR
    c[22].c = 3;                                                                                                                                                                         // CUSTO

    // CARTA 23 ESPECIAL
    c[23].n = 23;                                                                                                                                            // IDENTIFICADOR DA CARTA
    strcpy(c[23].nome, "Renato Paiva");                                                                                                                      // NOME
    strcpy(c[23].habilidade, " O monstro se distrai da partida e sai correndo atras da outra monstruosidade que saiu dessa carta, va para a proxima fase!"); // HABILIDADE
    c[23].t = 3;                                                                                                                                             // TIPO
    c[23].v = 5;                                                                                                                                             // VALOR
    c[23].c = 4;                                                                                                                                             // CUSTO

    // CARTA 24 ESPECIAL
    c[24].n = 24;                                                                            // IDENTIFICADOR DA CARTA
    strcpy(c[24].nome, "SUS");                                                               // NOME
    strcpy(c[24].habilidade, "Cura 2HP, mas como o servico e lento, so na proxima rodada."); // HABILIDADE
    c[24].t = 3;                                                                             // TIPO
    c[24].v = 5;                                                                             // VALOR
    c[24].c = 3;                                                                             // CUSTO
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
    // printf("-----------------------------------\n");
}

void cria_deck(tp_pilha *p_deck, tp_pilha *p_descarte)
{
    inicializa_pilha(p_deck);
    inicializa_pilha(p_descarte);
}

void embaralhar_deck(tp_pilha *p_deck, carta *c)
{
    int a;
    srand(time(NULL)); // inicializa o gerador de numeros aleatório

    for (int i = 0; i < 10; i++)
    {
        a = rand() % 25; // Gera valores de 0 a 24
        // printf("%d\n", a); // Exibe os valores gerado
        push(p_deck, c[a].n); // inserindo na pilha de cava
    }
}

void print_pilha(tp_pilha *p_deck, carta *c)
{
    printf("Deck de cartas:\n");
    printf("-----------------------------------\n");
    tp_pilha pilha_aux; // Criando uma pilha auxiliar
    inicializa_pilha(&pilha_aux);

    while (!pilha_vazia(p_deck))
    {
        int e;
        pop(p_deck, &e);   // retira o elemento de cima do deck
        carta card = c[e]; // cria uma variavel card e faz ela receber c[o elemento retirado]
        print_carta(card); // chama a funcao de printar as cartas, serao printadas ate acabar a pilha pelo while
        printf("-----------------------------------\n");
        push(&pilha_aux, e); // manda o elemento pra pilha auxiliar
    }
    while (!pilha_vazia(&pilha_aux))
    {
        int e;
        pop(&pilha_aux, &e); // retira da pilha auxuliar
        push(p_deck, e);     // manda para a original preservando a ordem
    }
}

void cava_carta(tp_listase **mao, tp_pilha *p_deck,tp_pilha *p_descarte, int n)
{

    tp_item e;
    // imprime_listase(*mao);

    if(pilha_vazia(p_deck)){
         while(!pilha_vazia(p_descarte)){
            pop(p_descarte,&e);
            push(p_deck, e);
    }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!pilha_vazia(p_deck))
        {
            pop(p_deck, &e);
        }
    
        // printf("%d\n", e);
        insere_listase_ordenado(mao, e, i);
    }

}
void print_mao(tp_listase *mao, carta *c)
{

    tp_listase *atu;
    atu = mao;
    printf("Mao do jogador:\n");
    printf("--------------------------------------------\n");
    while (atu != NULL)
    {
        tp_item e;
        e = atu->info;
        carta card = c[e];
        print_carta(card);
        printf("Posicao: %d\n", atu->identificador);
        printf("-----------------------------------\n");
        atu = atu->prox;
    }
}

resultadoJogada usa_carta(tp_listase *mao, tp_pilha *p_descarte, carta *c, jogador *j)
{
    resultadoJogada resultado = {0, 0};
    bool jogar_outra_carta;

    do
    {
        int p;
        bool jogada_valida;

        do
        {
            jogada_valida = true;
            print_mao(mao, c);
            printf("Qual carta deseja usar? (posicao)\n");
            printf("Energia disponivel %d/5\n", j->e);
            scanf("%d", &p);
            int numerador = remove_listase(&mao, p);

            if (numerador == -1)
            {
                printf("Não ha essa carta! Informe a carta novamente. (posicao)\n");
                jogada_valida = false;
            }
            else
            {
                int valor = c[numerador].v;
                int tipo = c[numerador].t;
                int eng = c[numerador].c;
                char *nome_carta = c[numerador].nome;
                j->e = j->e - eng;

                if (tipo == 1)
                {
                    printf("Voce usou a carta %s.\n", nome_carta);
                    printf("Voce causou %d de dano no monstro!\n", valor);
                    resultado.dano_total += valor;
                }
                else if (tipo == 2)
                {
                    printf("Voce usou a carta %s.\n", nome_carta);
                    printf("Voce esta com %d de defesa a mais!\n", valor);
                    resultado.defesa_total += valor;
                }
                else if (tipo == 3)
                {
                    printf("Voce usou a carta %s.\n", nome_carta);
                    printf("Voce usou uma carta especial!\n");
                }
                push(p_descarte, numerador);
            }
        } while (!jogada_valida);

        printf("Deseja jogar outra carta? (1 para sim, 0 para nao)\n");
        int escolha;
        scanf("%d", &escolha);
        jogar_outra_carta = (escolha == 1);

    } while (jogar_outra_carta);

    return resultado;
}

void descartar_mao(tp_listase **mao, tp_pilha *p_descarte)
{

    tp_item e;

    for (int i = 1; i <= 5; i++)
    {
        e = remove_listase(mao, i);
        if (e != -1)
        {
            push(p_descarte, e);
        }
    }
}
