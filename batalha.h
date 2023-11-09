#include <stdio.h>


monstro m;
jogador j;

void confronto(jogador *j, monstro *m){

    //printar caminho

    printf("Primeiro combate:\n");

    player_e_monstro(j, m);

    usar_prox_acao()

}


/*int ataque_monstro(monstro m, jogador j, carta_monstro cm)
{

}
int luta_monstro(carta c, monstro m, jogador j)
{
    while (m.h != NULL)
    {
        if (c.t == 1)
        {
            printf("O jogador %[^\n]s atacou o monstro com a carta de ataque!\n", j.nome);
            printf("VIDA DO MONSTRO: %d\n", m.h);
           
                m.h = m.h - c.v;
            
            
                printf("VIDA DO MONSTRO (DEPOIS DO ATAQUE): %d\n", m.h);
        }
        else if (c.t == 2)
        {
            printf("Carta de defesa acioanda.\n");
            printf("VIDA DO JOGADOR + DEFESA: %d + %d\n", j.h, c.v);
        }
    }
}*/
