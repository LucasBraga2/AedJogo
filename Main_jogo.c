#include "frontend.h"
#include <stdbool.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // system("cls");
    // system("color 2F");

    jogador j;           // Jogador Principal
    tp_pilha p_deck;     // Deck de Cartas do jogo, pilha de cartas disponiveis no total
    tp_pilha p_descarte; // Pilha de descarte
    tp_listase *mao;     // Mao do jogador
    tp_listase *caminho;
    tp_listase *opcoes_cartas;
    mao = inicializa_listase();
    opcoes_cartas = inicializa_listase();
    carta cartas[25];           // ARRAY PARA BOTAR AS CARTAS ATAQUE, DEFESA, ESPECIAL
    carta_monstro cartas_m[25]; // ARRAY PARA BOTAR AS CARTAS Do MONSTRO
    monstro monstros[5];        // ARRAY PARA OS MONSTROS
    tp_fila seqmons[5];         // SEQUENCIAS DE ACOES DOS MONSTROS
    bool venceu = false;
    char menu;
    int opcao;
    char opcao2;
    int opcao3;
    bool fim = false;
    int cnt = 0;
    int vidaRes = 0;

    cria_cartas(cartas);                  // Funcao que cria as cartas do jogo
    cria_carta_monstro(cartas_m);         // Funcao que cria as cartas do mosntro                                    // Funcao de Cricao das Cartas
    cria_monstro(monstros);               // Funcao para Criar os Monstros
    sequencia_monstro(cartas_m, seqmons); // Funcao que cria e vai inserir os elementos na sequencia
    cria_deck(&p_deck, &p_descarte);      // Funcao que Cria o deck de cartas
    embaralhar_deck(&p_deck, cartas);     // Funcao que embaralha o deck inicial
    FILE *arq = fopen("resumo_jogo.txt", "w+");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    // print_carta(cartas[14]); // Funcao para printar uma carta especifica
    // print_fila(&seqmons1, cartas_m);//Funcao que printa fila
    // mostrar_cartas(cartas); // Funcao para visualizacao de todas cartas disponiveis no jogo
    // mostra_monstro(monstros, seqmons1, seqmons2, seqmons3, seqmons4, seqmons5, cartas_m); // Funcao para visualizacao dos Monstros do jogo
    // print_pilha(&p_deck, cartas); // Funcao para printar pilha

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

    printf("                                                               \n");
    printf("                                 _____________________________ \n");
    printf("                                /___________________________/ |\n");
    printf("                                |                           | |\n");
    printf("                                |    *            __        | |\n");
    printf("                                |    |  ==   ==     |   ___ | |\n");
    printf("                                |    | |  | |  |  ==| |/    | |\n");
    printf("                                |  | | |  |  ==| |  | |     | |\n");
    printf("                                |  |_/  ==   __/  ==  |     | |\n");
    printf("                                |___________________________|/ \n");
    printf("                                                               \n");
    printf("                                    _______________________    \n");
    printf("                                   /_____________________/ |   \n");
    printf("                                   |                     | |   \n");
    printf("                                   |   __   __       __  | |   \n");
    printf("                                   |  |       |  * |/    | |   \n");
    printf("                                   |   ==  |==|  | |     | |   \n");
    printf("                                   |   __| |__|  | |     | |   \n");
    printf("                                   |_____________________|/    \n");

    printf("\n\n\n\nDigite 'J' para jogar ou 'S' para sair: \n");
    scanf(" %c", &menu);
    printf("\n\n");

    if (menu == 's' || menu == 'S')
    {
        printf("Saindo...\n");
        return 0;
    }

    cria_jogador(&j);  // Funcao para criar o jogador
    print_jogador(&j); // Funcao para printar o jogador
    cria_caminho(&caminho);
    tp_listase *atu;
    atu = caminho;
    printf("\n================================");
    printf("\nCaminho:\n");
    printa_caminho(caminho);
    printf("================================\n\n");
    while (fim == false)
    {
        if(cnt>5){
            printf("Voce venceu o jogo!!!!!!\n");
            fim=true;
        }
        if ((cnt == 1 && vidaRes == 0) || (cnt == 4 && vidaRes == 0))
        {
            printa_caminho(caminho);
            printf("Voce deseja ir para proximo combate(c) ou o descanso(d)\n");
            scanf(" %c", &opcao2);
            if (opcao2 == 'c')
            {
                atu = atu->prox;
                venceu = false;
            }
            else
            {
                atu = atu->desvio;
                venceu = false;
            }
        }
        else if (cnt != 0)
        {
            atu = atu->prox;
            venceu = false;
        }
        int mns = atu->f.monstro;
        char tipo = atu->f.tipo_c;
        // printf("%d", mns);
        // printf(" %c", tipo);

        if (tipo != 'd')
        { // Se for combate
            cnt++;
            vidaRes = 0;
            printf("Combate %d:\n", cnt);
            while (venceu == false)
            {

                verifica_energia(&j);                // Enche a energia do player apos uma rodada completa
                player_e_monstro(&j, monstros, mns); // Printa o player e o mosntro

                printf("Acao do monstro da rodada:\n");
                int valor_acao_mons = usar_prox_acao(&seqmons[mns], cartas_m); // Acao do monstro na rodada
                printf("Para iniciar a rodada, digite '1':\n");
                scanf("%d", &opcao);
                if (opcao == 1)
                {
                    int alt = altura_pilha(&p_deck);
                    if (alt >= 5){
                        cava_carta(&mao, &p_deck, cartas, &p_descarte, 5);
                    }
                    else{
                        printf("Entrou\n");
                        cava_carta(&mao, &p_deck, cartas, &p_descarte, alt);
                    }
                    resultadoJogada rj = usa_carta(mao, &p_descarte, cartas, &j, arq); // Resultado da jogada de cartas(Atq, Def)
                    escudo_player(&j, rj);
                    escudo_monstro(monstros, mns, valor_acao_mons, cartas_m);
                    acao_player_no_monstro(monstros, rj, mns); // Acoes do player no monstro
                    if (verifica_monstro_vivo(monstros, mns) == 1)
                    { // Se o player matou o monstro
                        player_ganha(&j);
                        printf("Voce pode escolher uma dessa 3 cartas para seu deck de cartas:\n");
                        gerar_cartas_novas(&opcoes_cartas);
                        print_mao(opcoes_cartas, cartas);
                        printf("Digite a posicao da carta desejada:\n");
                        scanf("%d", &opcao3);
                        int numerador = remove_listase(&opcoes_cartas, opcao3, &j, cartas);
                        push(&p_deck, numerador);
                        destroi_listase(opcoes_cartas);
                        venceu = true;
                    }
                    else
                    {
                        acao_monstro_no_player(&j, cartas_m, valor_acao_mons); // Acao do monstro no player
                    }
                    if (verifica_player_vivo(&j) == 1)
                    { // Se o monstro matou o player
                        player_morre(&j);
                        fim = true;
                        break;
                    }
                    descartar_mao(&mao, &p_descarte, &j, cartas); // Descarte da mao para a pilha de descarte
                }
            }
        }
        else
        { // Se for descanso
            printf("Sua vida foi recuperada\n");
            recupera_vida(&j);
            cnt++;
            vidaRes = 1;
        }
        // fim=true;
    }
    fprintf(arq, "Voce chegou ate a rodada: %d\n", cnt);
    printf("Deseja visualizar um resumo do seu jogo?(S/N)\n");
    scanf(" %c", &opcao2);
    if (opcao2 == 'S' || opcao2 == 's')
    {
        printf("Resumo do jogo:\n");
        ler_arquivo(arq);
    }
    fclose(arq);
    printf("Pressione Enter para fechar o programa...\n");

    system("pause"); // Pausa até que o usuário pressione Enter

    return 0;
}
