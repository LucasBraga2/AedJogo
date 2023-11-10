#include "frontend.h"
#include <stdbool.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    system("color 1F");

    jogador j;           // Jogador Principal
    tp_pilha p_deck;     // Deck de Cartas do jogo, pilha de cartas disponiveis no total
    tp_pilha p_descarte; // Pilha de descarte
    tp_listase *mao;     // Mao do jogador
    tp_listase *caminho;
    mao = inicializa_listase();
    carta cartas[25];                                         // ARRAY PARA BOTAR AS CARTAS ATAQUE, DEFESA, ESPECIAL
    carta_monstro cartas_m[25];                               // ARRAY PARA BOTAR AS CARTAS Do MONSTRO
    monstro monstros[5];                                      // ARRAY PARA OS MONSTROS
    tp_fila seqmons1, seqmons2, seqmons3, seqmons4, seqmons5; // SEQUENCIAS DE ACOES DOS MONSTROS
    bool venceu = true;
    char menu;
    int opcao;
    char opcao2;
    bool fim = false;
    int cnt = 1;

    cria_cartas(cartas);                                                                // Funcao que cria as cartas do jogo
    cria_carta_monstro(cartas_m);                                                       // Funcao que cria as cartas do mosntro                                    // Funcao de Cricao das Cartas
    cria_monstro(monstros);                                                             // Funcao para Criar os Monstros
    sequencia_monstro(cartas_m, &seqmons1, &seqmons2, &seqmons3, &seqmons4, &seqmons5); // Funcao que cria e vai inserir os elementos na sequencia
    cria_deck(&p_deck, &p_descarte);                                                    // Funcao que Cria o deck de cartas
    embaralhar_deck(&p_deck, cartas);                                                   // Funcao que embaralha o deck inicial

    // print_carta(cartas[14]); // Funcao para printar uma carta especifica
    // print_fila(&seqmons1, cartas_m);//Funcao que printa fila
    // mostrar_cartas(cartas); // Funcao para visualizacao de todas cartas disponiveis no jogo
    // mostra_monstro(monstros, seqmons1, seqmons2, seqmons3, seqmons4, seqmons5, cartas_m); // Funcao para visualizacao dos Monstros do jogo
    // print_pilha(&p_deck, cartas); // Funcao para printar pilha

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
    cria_caminho(&caminho);
    tp_listase *atu;
    atu = caminho;
    printa_caminho(caminho);
    while (fim == false)
    {

        if (cnt > 1)
        {
            printa_caminho(caminho);
            printf("Voce deseja ir para proximo combate(c) ou o descanso(d)");
            scanf("%c", &opcao2);
            if (opcao2 == 'c')
            {
                atu = atu->prox;
            }
            else
            {
                atu = atu->desvio;
            }
        }
        int mns = atu->f.monstro;
        char tipo = atu->f.tipo_c;

        if (tipo == 'c')
        {
            printf("Combate %d:\n", cnt);
            cnt++;
            while (venceu)
            {

                verifica_energia(&j);
                player_e_monstro(&j, monstros);

                printf("Acao do monstro da rodada:\n");
                int valor_acao_mons = usar_prox_acao(&seqmons1, cartas_m);
                printf("Para iniciar a rodada, digite '1':\n");
                scanf("%d", &opcao);
                if (opcao == 1)
                {
                    cava_carta(&mao, &p_deck, &p_descarte, 5); // O numero sao quantos cartas serao cavadas (Digite 1 num a menos que o desejado)
                    resultadoJogada rj = usa_carta(mao, &p_descarte, cartas, &j);
                    acao_player_no_monstro(monstros, rj, &j, mns);
                    acao_monstro_no_player(&j, cartas_m, monstros, valor_acao_mons, mns);
                    if (verifica_monstro_vivo(monstros) == 1)
                    {
                        player_ganha(&j);
                        venceu = false;
                    }
                    if (verifica_player_vivo(&j) == 1)
                    {
                        player_morre(&j);
                        venceu = false;
                    }
                    descartar_mao(&mao, &p_descarte, &j, cartas);
                }
            }
        }
        else{
            printf("Sua vida foi recuperada\n");
            recupera_vida(&j);
        }
        fim=true;
    }

    /*cava_carta(&mao, &p_deck, 5);//O numero sao quantos cartas serao cavadas (Digite 1 num a menos que o desejado)
    verifica_energia(&j);
    usa_carta(mao, &p_descarte, cartas);
    //print_mao(mao, cartas);
    descartar_mao(&mao, &p_descarte);
    print_pilha(&p_descarte, cartas);*/

    printf("Pressione Enter para fechar o programa...\n");

    system("pause"); // Pausa até que o usuário pressione Enter

    return 0;
}
