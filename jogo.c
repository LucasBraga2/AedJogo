#include "stru.h"


void cria_jogador(jogador *j){

    printf("\nInsira o nome do jogador:\n");
    scanf("%s", &j->nome);
    j->h = 20;
    j->e = 5;

    printf("#####################################\n");
    printf("Nome: %s \nVida: %d Hp \nEnergia: %d/5 \n", j->nome, j->h, j->e);
    printf("#####################################\n");

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
        printf("#####################################\n");//CARTA 1
        printf("Nome: Chute\n");
        printf("Tipo: Ataque\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 2
        printf("Nome: Soco\n");
        printf("Tipo: Ataque\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 3
        printf("Nome: Facada\n");
        printf("Tipo: Ataque\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 4
        printf("Nome: Espadada\n");
        printf("Tipo: Ataque\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 5
        printf("Nome: Facadas Duplas\n");
        printf("Tipo: Ataque\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 6
        printf("Nome: Martelo de Espinhos\n");
        printf("Tipo: Ataque\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 7
        printf("Nome: Lanca-chamas\n");
        printf("Tipo: Ataque\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 8
        printf("Nome: Bombas Explosivas\n");
        printf("Tipo: Ataque\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 9
        printf("Nome: Chuva de Asteroidess\n");
        printf("Tipo: Ataque\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 10
        printf("Nome: Raios Infinitos\n");
        printf("Tipo: Ataque\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");
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

void cria_monstro(){

monstro m1;
tp_fila seqmons1;
int v1 = 20;

    m1.nome[20] = "Homem Gosma";
    m1.h = v1;
    inicializa_fila(&seqmons1);
    insere_fila(&seqmons1, 10);
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
    monstro m;
    tp_fila seqmons;
    char escolha;
    
    //cria_cartas();

    printf("Deseja visualizar as cartas disponiveis no jogo:\n");
    printf("S/N\n");
    scanf(" %c",&escolha);
    
    if(escolha == 'S' || escolha == 's'){
        mostrar_cartas();
    }
    
    cria_deck(&p_deck);
    cria_jogador(&j);
    cria_monstro();

}
