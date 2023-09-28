#include "fila.h"
#include "pilha.h"

void cria_monstro(monstro *m, tp_fila *seqmons1, tp_fila *seqmons2, tp_fila *seqmons3, tp_fila *seqmons4, tp_fila *seqmons5)
{

    // MONSTRO 1
    int vida1 = 20; // VIDA DO PRIMEIRO MONSTRO
    // DANOS E DEFESAS E SEUS VALORES
    int dano1_m1 = 5;
    int defesa1_m1 = 5;
    int dano2_m1 = 5;
    int defesa2_m1 = 5;
    int dano3_m1 = 5;
    int defesa3_m1 = 5;

    strcpy(m[0].nome, "Homem Gosma"); // NOME DO MONSTRO 1
    m[0].h = vida1;
    inicializa_fila(seqmons1);
    m[0].v = dano1_m1;
    insere_fila(seqmons1, dano1_m1);
    m[0].v = defesa1_m1;
    insere_fila(seqmons1, defesa1_m1);
    m[0].v = dano2_m1;
    insere_fila(seqmons1, dano2_m1);
    m[0].v = defesa2_m1;
    insere_fila(seqmons1, defesa2_m1);
    m[0].v = dano3_m1;
    insere_fila(seqmons1, dano3_m1);
    m[0].v = defesa3_m1;
    insere_fila(seqmons1, defesa3_m1);

    // MONSTRO 2
    int vida2 = 30; // VIDA DO SEGUNDO MONSTRO
    // DANOS E DEFESAS E SEUS VALORES
    int defesa1_m2 = 4;
    int dano1_m2 = 6;
    int dano2_m2 = 5;
    int dano3_m2 = 4;
    int defesa2_m2 = 5;
    int dano4_m2 = 5;

    strcpy(m[1].nome, "Gaviao Feroz"); // NOME DO MOSNTRO 2
    m[1].h = vida2;
    inicializa_fila(seqmons2);
    m[1].v = defesa1_m2;
    insere_fila(seqmons2, defesa1_m2);
    m[1].v = dano1_m2;
    insere_fila(seqmons2, dano1_m2);
    m[1].v = dano2_m2;
    insere_fila(seqmons2, dano2_m2);
    m[1].v = dano3_m2;
    insere_fila(seqmons2, dano3_m2);
    m[1].v = defesa2_m2;
    insere_fila(seqmons2, defesa2_m2);
    m[1].v = dano4_m2;
    insere_fila(seqmons2, dano4_m2);

    // MONSTRO 3
    int vida3 = 40; // VIDA DO TERCEIRO MONSTRO
    // DANOS E DEFESAS E SEUS VALORES
    int dano1_m3 = 5;
    int defesa1_m3 = 5;
    int defesa2_m3 = 5;
    int dano2_m3 = 8;
    int defesa3_m3 = 7;
    int dano3_m3 = 6;

    strcpy(m[2].nome, "Gigante de Pedra"); // NOME DO MOSNTRO 3
    m[2].h = vida3;
    inicializa_fila(seqmons3);
    m[2].v = dano1_m3;
    insere_fila(seqmons3, dano1_m3);
    m[2].v = defesa1_m3;
    insere_fila(seqmons3, defesa1_m3);
    m[2].v = defesa2_m3;
    insere_fila(seqmons3, defesa2_m3);
    m[2].v = dano2_m3;
    insere_fila(seqmons3, dano2_m3);
    m[2].v = defesa3_m3;
    insere_fila(seqmons3, defesa3_m3);
    m[2].v = dano3_m3;
    insere_fila(seqmons3, dano3_m3);

    // MONSTRO 4
    int vida4 = 50; // VIDA DO QUARTO MONSTRO
    // DANOS E DEFESAS E SEUS VALORES
    int defesa1_m4 = 5;
    int dano1_m4 = 8;
    int dano2_m4 = 5;
    int defesa2_m4 = 7;
    int dano3_m4 = 5;
    int dano4_m4 = 5;

    strcpy(m[3].nome, "Cobra de Duas Cabecas"); // NOME DO MOSNTRO 4
    m[3].h = vida4;
    inicializa_fila(seqmons4);
    m[3].v = defesa1_m4;
    insere_fila(seqmons4, defesa1_m4);
    m[3].v = dano1_m4;
    insere_fila(seqmons4, dano1_m4);
    m[3].v = dano2_m4;
    insere_fila(seqmons4, dano2_m4);
    m[3].v = defesa2_m4;
    insere_fila(seqmons4, defesa2_m4);
    m[3].v = dano3_m4;
    insere_fila(seqmons4, dano3_m4);
    m[3].v = dano4_m4;
    insere_fila(seqmons4, dano4_m4);

    // MONSTRO 5 (BOSS FINAL)
    int vida5 = 60; // VIDA DO QUINTO MONSTRO
    // DANOS E DEFESAS E SEUS VALORES
    int dano1_m5 = 7;
    int dano2_m5 = 7;
    int defesa1_m5 = 5;
    int defesa2_m5 = 5;
    int dano3_m5 = 7;
    int dano4_m5 = 7;

    strcpy(m[4].nome, "Mob Dick(Boss Final)"); // NOME DO MOSNTRO 5
    m[4].h = vida5;
    inicializa_fila(seqmons5);
    m[4].v = dano1_m5;
    insere_fila(seqmons5, dano1_m5);
    m[4].v = dano2_m5;
    insere_fila(seqmons5, dano2_m5);
    m[4].v = defesa1_m5;
    insere_fila(seqmons5, defesa1_m5);
    m[4].v = defesa2_m5;
    insere_fila(seqmons5, defesa2_m5);
    m[4].v = dano3_m5;
    insere_fila(seqmons5, dano3_m5);
    m[4].v = dano4_m5;
    insere_fila(seqmons5, dano4_m5);
}

void mostra_monstro(monstro *m)
{

    printf("Mosntros:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("-----------------------------------\n");
        printf("Nome: %s\n", m[i].nome);
        printf("Vida: %d Hp\n", m[i].h);
    }
    printf("-----------------------------------\n");
}

void print_fila(monstro m, tp_fila seqmons1, tp_fila seqmons2, tp_fila seqmons3, tp_fila seqmons4, tp_fila seqmons5){

    int e;
    tp_fila f_aux;

    for(int i = 0; i <= 4; i++){
        if(i == 0){
            while(!fila_vazia(&seqmons1)){
            remove_fila(&seqmons1, &e);
            printf("%d      ", e);
            insere_fila(&f_aux, e);
            }

            while(!fila_vazia(&f_aux)){
            remove_fila(&f_aux, &e);
            insere_fila(&seqmons1, e);
            }
        }
        if(i == 1){
            while(!fila_vazia(&seqmons2)){
            remove_fila(&seqmons2, &e);
            printf("%d      ", e);
            insere_fila(&f_aux, e);
            }

            while(!fila_vazia(&f_aux)){
            remove_fila(&f_aux, &e);
            insere_fila(&seqmons2, e);
            }
        }
        if(i == 2){
            while(!fila_vazia(&seqmons3)){
            remove_fila(&seqmons3, &e);
            printf("%d      ", e);
            insere_fila(&f_aux, e);
            }

            while(!fila_vazia(&f_aux)){
            remove_fila(&f_aux, &e);
            insere_fila(&seqmons3, e);
            }
        }
        if(i == 3){
            while(!fila_vazia(&seqmons4)){
            remove_fila(&seqmons4, &e);
            printf("%d      ", e);
            insere_fila(&f_aux, e);
            }

            while(!fila_vazia(&f_aux)){
            remove_fila(&f_aux, &e);
            insere_fila(&seqmons4, e);
            }
        }
        if(i == 4){
            while(!fila_vazia(&seqmons5)){
            remove_fila(&seqmons5, &e);
            printf("%d      ", e);
            insere_fila(&f_aux, e);
            }

            while(!fila_vazia(&f_aux)){
            remove_fila(&f_aux, &e);
            insere_fila(&seqmons5, e);
            }
        }
    }

}