#include "fila.h"
#include "pilha.h"
// #include "cartas_deck.h"
#include "monstro.h"
#include "player.h"
#include "frontend.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    system("color 1F");
    
    jogador j;       // Jogador Principal
    tp_pilha p_deck; // Deck de Cartas do jogo, pilha de cartas disponiveis no total
    tp_pilha p_descarte;//Pilha de descarte
    tp_listase *mao; // Mao do jogador
    tp_listase *caminho;
    mao = inicializa_listase();
    caminho = inicializa_listase();
    carta cartas[25];                                         // ARRAY PARA BOTAR AS CARTAS ATAQUE, DEFESA, ESPECIAL
    carta_monstro cartas_m[25];                               // ARRAY PARA BOTAR AS CARTAS Do MONSTRO
    monstro monstros[5];                                      // ARRAY PARA OS MONSTROS
    tp_fila seqmons1, seqmons2, seqmons3, seqmons4, seqmons5; // SEQUENCIAS DE ACOES DOS MONSTROS
    char menu;

    cria_cartas(cartas);                                                                // Funcao que cria as cartas do jogo
    cria_carta_monstro(cartas_m);                                                       // Funcao que cria as cartas do mosntro                                    // Funcao de Cricao das Cartas
    cria_monstro(monstros);                                                             // Funcao para Criar os Monstros
    sequencia_monstro(cartas_m, &seqmons1, &seqmons2, &seqmons3, &seqmons4, &seqmons5); // Funcao que cria e vai inserir os elementos na sequencia
    cria_deck(&p_deck, &p_descarte);                                                                 // Funcao que Cria o deck de cartas
    embaralhar_deck(&p_deck, cartas);                                                  // Funcao que embaralha o deck inicial
    
    // print_carta(cartas[14]); // Funcao para printar uma carta especifica
    // print_fila(&seqmons1, cartas_m);//Funcao que printa fila
    // mostrar_cartas(cartas); // Funcao para visualizacao de todas cartas disponiveis no jogo
    // mostra_monstro(monstros, seqmons1, seqmons2, seqmons3, seqmons4, seqmons5, cartas_m); // Funcao para visualizacao dos Monstros do jogo
    // print_pilha(&p_deck, cartas); // Funcao para printar pilha
    
    system("clear");

    /*printf("\n\n");
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
    }*/

    cria_jogador(&j);  // Funcao para criar o jogador
    print_jogador(&j); // Funcao para printar o jogador
    imprime_listase(caminho);
    
    cava_carta(&mao, &p_deck, 5);//O numero sao quantos cartas serao cavadas (Digite 1 num a menos que o desejado)
    verifica_energia(&j);
    usa_carta(mao, cartas);
    //descartar_mao(&mao, &p_descarte);
    //print_pilha(&p_descarte, cartas);

    printf("Pressione Enter para fechar o programa...\n");

    system("pause"); // Pausa até que o usuário pressione Enter

    return 0;
}
