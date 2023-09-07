#include "stru.h"
#include <string.h>

void cria_jogador(jogador *j){
    printf("\ninsira o nome do jogador\n");
    scanf("%s", &j->nome);
    j->h = 20;
    j->e = 5;
}

void cria_deck(tp_pilha *p_deck){

    inicializa_pilha (p_deck);

    
}

void cria_monstro(monstro *m, vida v,char nome, tp_fila s){
    m->h = v;
    m->seq = s;
}  

void toma_dano(){

}

void ataca(){

}

void defende(){

}

void cura(){

}

void defende_monstro(){

}



int main(){
    jogador j;
    tp_pilha p_deck;
    monstro m1;
    tp_fila seqmons;
    
    void cria_cartas();
    cria_deck(&p_deck);
    cria_jogador(&j);
    cria_monstro(&m1, 50, monstro1, seqmons);
    printf("Jogador :%s \nVida: %d \nEnergia: %d", j.nome, j.h, j.e );

}
