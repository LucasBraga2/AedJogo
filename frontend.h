#include <stdio.h>
#include "monstro.h"

void player_ganha(jogador *j)
{
    printf("\n");
    printf("           __                  \n");
    printf("       +  |__|  +              \n");
    printf("        \\  ||  /              \n");
    printf("         \\|--|/               \n");
    printf("          |  |                 \n");
    printf("          |__|                 \n");
    printf("          |  |                 \n");
    printf("         _|  |_                \n\n");
    printf("      Player: %s             \n", j->nome);
    printf("   Vida: %d/20   Energia: %d/5      \n\n", j->h, j->e);
    printf("   VOCE MATOU O MONSTRO!      \n\n");
}

void player_morre(jogador *j)
{
    printf("\n");
    printf("                               \n");
    printf("                               \n");
    printf("         _    _                \n");
    printf("        | |--| |               \n");
    printf("        | |  | |               \n");
    printf("          |__|                 \n");
    printf("          |  |       __        \n");
    printf("         _|  |_     |__|       \n\n");
    printf("      Player: %s              \n", j->nome);
    printf("       Vida: 0/20         \n\n");
    printf("      VOCE MORREU!            \n\n");
}


void player_e_monstro(jogador *j, monstro *m, int mns)
{

    printf("\n");
    printf("        __                             ________       \n");
    printf("       |__|                             |____|     \n");
    printf("      _ || _                              ||        \n");
    printf("     | |--| |                          |-|--|-|     \n");
    printf("     | |  | |                          | |  | |     \n");
    printf("       |__|                            __|__|__     \n");
    printf("       |  |                           /  |  |  |    \n");
    printf("       |_ |_                         _| _| _| _|    \n\n");
    printf("    Player: %s                     Monstro: %s     \n", j->nome, m[mns].nome);
    printf(" Vida: %d/20   Energia: %d/5         Vida do Monstro: %d/20\n\n", j->h, j->e, m[mns].h);
    printf("         Escudo: %d                            \n\n", j->esc);
}

/*void player_e_monstro2(jogador *j, monstro *m, int mns)
{

    printf("\n");
    printf("        __                              ______                      \n");
    printf("       |__|                      __    /      \\    __              \n");
    printf("      _ || _                    /  \\  / %d   %d  \\  /  \\         \n", 0, 0);
    printf("     | |--| |                  +    \\|    |     |/    +            \n");
    printf("     | |  | |                        |    _     |                   \n");
    printf("       |__|                           \\  |_|   /                   \n");
    printf("       |  |                            \\______/                    \n");
    printf("       |_ |_                            _| _|                     \n\n");
    printf("    Player: %s                          Monstro: %s     \n", j->nome, m[mns].nome);
    printf(" Vida: %d/20   Energia: %d/5               Vida do Monstro: %d/20\n\n", j->h, j->e, m[mns].h);
    printf("         Escudo: %d                             \n\n", j->esc);
}


void player_e_monstro3(jogador *j, monstro *m, int mns)
{

    printf("\n");
    printf("        __                              +++__+++        \n");
    printf("       |__|                            +++/  \\+++     \n");
    printf("      _ || _                            ++\\__/++  \n");
    printf("     | |--| |                              ||         \n");
    printf("     | |  | |                          +--/  \\--+    \n");
    printf("       |__|                              /____\\      \n");
    printf("       |  |                                 |         \n");
    printf("       |_ |_                               _|       \n\n");
    printf("    Player: %s                          Monstro: %s     \n", j->nome, m[mns].nome);
    printf(" Vida: %d/20   Energia: %d/5               Vida do Monstro: %d/20\n\n", j->h, j->e, m[mns].h);
    printf("         Escudo: %d                             \n\n", j->esc);
}

void player_e_monstro4(jogador *j, monstro *m, int mns)
{

    printf("\n");
    printf("        __                           _       _                           \n");
    printf("       |__|                         |_|     |_|                          \n");
    printf("      _ || _                         ||     ||                           \n");
    printf("     | |--| |                         \\\\   //                          \n");
    printf("     | |  | |                          \\\\ //                 _         \n");
    printf("       |__|                          \\   \\\\     /          /   \\     \n");
    printf("       |  |                           \\---\\\\---/           |_/  |     \n");
    printf("       |_ |_                               \\\\__________________/     \n\n");
    printf("    Player: %s                          Monstro: %s     \n", j->nome, m[mns].nome);
    printf(" Vida: %d/20   Energia: %d/5               Vida do Monstro: %d/20\n\n", j->h, j->e, m[mns].h);
    printf("         Escudo: %d                             \n\n", j->esc);
}


void player_e_monstro5(jogador *j, monstro *m, int mns)
{

    printf("\n");
    printf("        __                            _______________             \n");
    printf("       |__|                   \\|/    /     ___       \\    \\|/  \n");
    printf("      _ || _                   |    /     /   \\       \\    |    \n");
    printf("     | |--| |                  |___|     | 0   |       |___|      \n");
    printf("     | |  | |                      |     |     |       |          \n");  //poderia ser sem esses braços
    printf("       |__|                         \\     \\___/       /         \n");  //e pensei no nome ser o olho q tudo ve
    printf("       |  |                          \\_______________/           \n");
    printf("       |_ |_                                                    \n\n");
    printf("    Player: %s                          Monstro: %s     \n", j->nome, m[mns].nome);
    printf(" Vida: %d/20   Energia: %d/5               Vida do Monstro: %d/20\n\n", j->h, j->e, m[mns].h);
    printf("         Escudo: %d                             \n\n", j->esc);
}

*/























/*void monstro_ataca_player()
{
    printf("\n");
    printf("        __                              ________     \n");
    printf("       |__|            _____             |____|     \n");
    printf("      _ || _       <|-|/////|              ||        \n");
    printf("     | |--| |      <|-|/////|           |-|--|-|     \n");
    printf("     | |  | |      <|-|/////|           | |  | |     \n");
    printf("       |__|        <|-|_____|           __|__|__     \n");
    printf("       |  |                           /  |  |  |    \n");
    printf("       |_ |_                         _| _| _| _|    \n\n");
    printf("    Player: Eren                  Monstro: Homem Gosma     \n");
    printf(" Vida: 20   Energia: 5            Vida do Monstro: 40     \n\n");
}*/

/*void player_se_defende()
{
    printf("\n");
    printf("        __         ___                  ________      \n");
    printf("       |__|      ||///||                 |____|     \n");
    printf("      _ || _     ||///||                   ||        \n");
    printf("     | |--| |  |-||///||                |-|--|-|     \n");
    printf("     | |  | |--| ||///||                | |  | |     \n");
    printf("       |__|    |-||///||                __|__|__     \n");
    printf("       |  |      ||///||               /  |  |  |    \n");
    printf("       |_ |_     ||___||              _| _| _| _|    \n\n");
    printf("    Player: Eren                   Monstro: Homem Gosma     \n");
    printf(" Vida: 20   Energia: 5             Vida do Monstro: 40     \n\n");
}*/

/*void mosntro_se_defende()
{
    printf("\n");
    printf("        __                    ___       ________     \n");
    printf("       |__|                 ||///||      |____|      \n");
    printf("      _ || _                ||///||        ||        \n");
    printf("     | |--| |               ||///||-|   |-|--|-|     \n");
    printf("     | |  | |               ||///|| |---| |  | |     \n");
    printf("       |__|                 ||///||-|   __|__|__     \n");
    printf("       |  |                 ||///||    /  |  |  |    \n");
    printf("       |_ |_                ||___||   _| _| _| _|    \n\n");
    printf("    Player: Eren                  Monstro: Homem Gosma     \n");
    printf(" Vida: 20   Energia: 5            Vida do Monstro: 40     \n\n");
}*/

/*void player_ataca_monstro(){

    printf("\n");
    printf("        __                             ________       \n");
    printf("       |__|           _____             |____|     \n");
    printf("      _ || _         |/////|-|>           ||        \n");
    printf("     | |--| |        |/////|-|>        |-|--|-|     \n");
    printf("     | |  | |        |/////|-|>        | |  | |     \n");
    printf("       |__|          |_____|-|>        __|__|__     \n");
    printf("       |  |                           /  |  |  |    \n");
    printf("       |_ |_                         _| _| _| _|    \n\n");
    printf("    Player: Eren                  Monstro: Homem Gosma     \n");
    printf(" Vida: 20   Energia: 5            Vida do Monstro: 40     \n\n");
}*/
