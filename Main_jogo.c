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
    int rodada = 0;//Contador de rodadas
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
    atu = caminho;//atu esta no comeco do caminho
    printf("\n================================");
    printf("\nCaminho:\n");
    printa_caminho(caminho);
    printf("================================\n\n");
    while (fim == false)
    {
        if (rodada == 5)//Ira entrar aqui ao vencer o jogo
        {
            printf("Voce venceu o jogo!!!!!!\n");
            break;
        }
        if ((rodada == 1 && vidaRes == 0) || (rodada == 3 && vidaRes == 0))
        {
            printa_caminho(caminho);
            printf("Voce deseja ir para proximo combate(c) ou o descanso(d)\n");
            scanf(" %c", &opcao2);
            if (opcao2 == 'c')//Ir para o combate
            {
                atu = atu->prox;
                venceu = false;
            }
            else//Ir para o descanso
            {
                atu = atu->desvio;
                venceu = false;
            }
        }
        else if (rodada != 0)//Andar normalmante
        {
            atu = atu->prox;
            venceu = false;
        }
        int mns = atu->f.monstro;//O monstro do caminho de 0 a 4
        char tipo = atu->f.tipo_c;//O tipo se for c(combate) ou d(descanso)
        // printf("%d", mns);
        // printf(" %c", tipo);

        if (tipo != 'd')
        { // Se for combate
            rodada++;//Soma 1 a rodada
            vidaRes = 0;
            printf("Combate %d:\n", rodada);
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
                    int alt = altura_pilha(&p_deck); //A quantidade de cartas no deck
                    if (alt >= 5)//Se tiver 5 ou mais cartas no deck
                    {
                        cava_carta(&mao, &p_deck, &p_descarte, 5); // Cava 5 cartas 
                    }
                    else
                    {
                        // printf("Entrou\n");
                        // printf("Altura: %d\n", alt);
                        cava_carta(&mao, &p_deck, &p_descarte, alt);//Aqui ira cavar a quantidade que resta no deck, se for 0 ira reestocar o deck
                    }
                    resultadoJogada rj = usa_carta(mao, &p_descarte, cartas, &j, arq); // Resultado da jogada de cartas(Atq, Def)
                    escudo_player(&j, rj);//Ativando escudo no player caso haja defesa
                    escudo_monstro(monstros, mns, valor_acao_mons, cartas_m);//Ativando escudo do monstro caso haja
                    if(j.esc>0 || monstros[mns].esc>0){
                        player_e_monstro(&j, monstros, mns);
                    }
                    
                    acao_player_no_monstro(monstros, rj, mns); // Acoes do player no monstro
                    if (verifica_monstro_vivo(monstros, mns) == 1)
                    { // Se o player matou o monstro
                        player_ganha(&j);//printando tela se player mata monstro
                        descartar_mao(&mao, &p_descarte); // Descarte da mao para a pilha de descarte
                        if (tipo != 'b')
                        {
                            verifica_energia(&j);//Completando energia do player
                            printf("Voce pode escolher uma dessa 3 cartas para seu deck de cartas:\n");
                            gerar_cartas_novas(&opcoes_cartas);//Gerando 3 cartas para o player escolher para seu deck
                            print_mao(opcoes_cartas, cartas);//printando as 3 cartas
                            printf("Digite a posicao da carta desejada:\n");
                            scanf("%d", &opcao3);
                            int numerador = remove_listase(&opcoes_cartas, opcao3, &j, cartas);//Removendo uma para o deck
                            // printf("Carta retirada nas opcoes :%d\n", numerador);
                            push(&p_deck, numerador);//Pondo a carta no deck
                            destroi_listase(&opcoes_cartas);//Reiniciando as cartas restantes
                        }
                        venceu = true;//Saindo do loop mais interno
                    }
                    else
                    {
                        acao_monstro_no_player(&j, cartas_m, valor_acao_mons); // Acao do monstro no player
                    }
                    if (verifica_player_vivo(&j) == 1)
                    { // Se o monstro matou o player
                        player_morre(&j);//Printando morte do player
                        fim = true;//Saindo do loop mais interno
                        break;//Saindo do loop externo
                    }
                    descartar_mao(&mao, &p_descarte); // Descarte da mao para a pilha de descarte
                }
            }
        }
        else
        { // Se for descanso
            printf("Sua vida foi recuperada\n");
            recupera_vida(&j);//Completando energia do player
            rodada++;//Somando 1 a rodada
            vidaRes = 1;//Indicando que a vida foi resetada
        }
        // fim=true;
    }
    fprintf(arq, "Voce chegou ate a rodada: %d\n", rodada);//Pondo no arquivo que rodada o player chegou
    printf("Deseja visualizar um resumo do seu jogo?(S/N)\n");
    scanf(" %c", &opcao2);
    if (opcao2 == 'S' || opcao2 == 's')
    {
        printf("Resumo do jogo:\n");
        ler_arquivo(arq);//Lendo arquivo
    }
    fclose(arq);
    printf("Pressione Enter para fechar o programa...\n");

    system("pause"); // Pausa até que o usuário pressione Enter

    return 0;
}
