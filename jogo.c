#include "stru.h"
#include <string.h>

void cria_jogador(jogador *j){
    printf("\nInsira o nome do jogador:\n");
    scanf("%s", &j->nome);
    j->h = 20;
    j->e = 5;
}

void cria_deck(tp_pilha *p_deck){

    inicializa_pilha (p_deck);

    
}

void mostrar_cartas(){
    int t;
    char t2 = 'N';

while(t2 == 'N' || t2 =='n'){
    printf("Digite 1 para Ataques\n");
    printf("Digite 2 para Defesas\n");
    printf("Digite 3 para Especias\n");
    printf("\n");
    scanf("%d", &t);

    if(t == 1){
        printf("Carta 1 - Chute\n");
        printf("Valor - 5\n");
        printf("Custo - 1\n");
    }

    else if(t == 2){
        printf("Carta 1 - Chute\n");
        printf("Valor - 5\n");
        printf("Custo - 1\n");

    }

     else if(t == 3){
        printf("Carta 1 - Chute\n");
        printf("Valor - 5\n");
        printf("Custo - 1\n");

    }

    else{
        printf("Opcao invalida\n");
        continue;
    }

    printf("Deseja sair: (S/N)\n");
    scanf(" %c", &t2);

        if(t2== 'S' || t2 == 's'){
            break;
        }
}
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
    char escolha;
    
    void cria_cartas();

    printf("Deseja visualizar as cartas disponiveis no jogo:\n");
    printf("S/N\n");
    scanf("%c",&escolha);
    
    if(escolha == 'S' || escolha == 's'){
        mostrar_cartas();
    }
    
    cria_deck(&p_deck);
    cria_jogador(&j);
    //cria_monstro(&m1, 50, monstro1, seqmons);
    printf("Jogador :%s \nVida: %d \nEnergia: %d", j.nome, j.h, j.e );

}
