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
    void cria_cartas();
    tp_pilha p_deck;
    cria_deck(&p_deck);
    jogador j;
    cria_jogador(&j);
    printf("Jogador :%s \nVida: %d \nEnergia: %d", j.nome, j.h, j.e );
    
    

}
