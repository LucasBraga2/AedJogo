#include "fila.h"
#include "pilha.h"
#include "cartas_deck.h"
#include "monstro.h"
#include "player.h"

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
    system("cls");
    system("color 1F");
    jogador j;           // Jogador Principal
    tp_pilha p_deck;     // Deck de Cartas do jogo, pilha de cartas disponiveis no total
    carta cartas[25];    // ARRAY PARA BOTAR AS CARTAS ATAQUE, DEFESA, ESPECIAL
    carta_monstro cartas_m[25];
    monstro monstros[5]; // ARRAY PARA OS MONSTROS
    char escolha, menu;
    tp_fila seqmons1, seqmons2, seqmons3, seqmons4, seqmons5;

    cria_cartas(cartas);                                                           // Funcao de Cricao das Cartas
    cria_monstro(monstros); // Funcao para Criar os Monstros
    sequencia_monstro(cartas_m, &seqmons1, &seqmons2, &seqmons3, &seqmons4, &seqmons5);//Funcao que cria e inseri os elementos na sequencia
    // print_carta(&cartas[14]); // Funcao para printar uma carta especifica
    cria_deck(&p_deck);               // Funcao que Cria o deck de cartas
    embaralhar_deck(&p_deck, cartas); // Funcao que embaralha o deck inicial

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
        mostra_monstro(monstros, seqmons1, seqmons2, seqmons3, seqmons4, seqmons5, cartas_m); // Funcao para visualizacao dos Monstros do jogo
    }

    printf("Deseja visualizar o deck de 10 cartas inicial(Embaralhado):\n");
    printf("S/N\n");
    scanf(" %c", &escolha);

    if (escolha == 'S' || escolha == 's')
    {
        print_pilha(&p_deck, cartas); // Funcao para printar pilha
    }

    print_fila1(&seqmons1, cartas_m);

    printf("Pressione Enter para iniciar o jogo...\n");

    system("pause"); // Pausa até que o usuário pressione Enter

    printf("\n\n");
    printf("       ______________________________________________________________________________________________ \n");
    printf("      /                                                                                            / |\n");
    printf("     /############################################################################################/# |\n");
    printf("    /____________________________________________________________________________________________/ # |\n");
    printf("    |                                                                                            | # |\n");
    printf("    |    ====                                                   ====                             | # |\n");
    printf("    |   |                                        ||            |                                 | # |\n");
    printf("    |   |        ===           ===    ===    ==     ===        |        ===   *   | ===   ===    | # |\n");
    printf("    |    ====   |   |  |   |  |      |         |   |            ====   |   |      |/     |   |   | # |\n");
    printf("    |        |  |   |  |   |   ===    ===    ===    ===             |  |===   |   |      |===    | # |\n");
    printf("    |        |  |   |  |   |      |      |  |  |       |            |  |      |   |      |       | # |\n");
    printf("    |    ====    ===    ===    ===    ===    ===    ===         ====   |      |   |       ===    | #/ \n");
    printf("    |                                                                  |                         | /  \n");
    printf("    |____________________________________________________________________________________________|/   \n");

    printf("\n\n\n\n");

    printf("                                 ___________________________ \n");
    printf("                                |                           |\n");
    printf("                                |    *            __        |\n");
    printf("                                |    |  ==   ==     |   ___ |\n");
    printf("                                |    | |  | |  |  ==| |/    |\n");
    printf("                                |  | | |  |  ==| |  | |     |\n");
    printf("                                |  |_/  ==   __/  ==  |     |\n");
    printf("                                |___________________________|\n");
    printf("                                    _____________________ \n");
    printf("                                   |                     |\n");
    printf("                                   |   __   __       __  |\n");
    printf("                                   |  |       |  * |/    |\n");
    printf("                                   |   ==  |==|  | |     |\n");
    printf("                                   |   __| |__|  | |     |\n");
    printf("                                   |_____________________|\n");

    printf("\n\n\n\nDigite 'J' para jogar ou 'S' para sair: \n");
    scanf(" %c", &menu);
    printf("\n\n");

    if (menu == 's' || menu == 'S')
    {
        printf("Saindo...\n");
        return 0;
    }

    cria_jogador(&j); // Funcao para criar o jogador

    printf("Pressione Enter para fechar o programa...\n");

    system("pause"); // Pausa até que o usuário pressione Enter

    return 0;
}
