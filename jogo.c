#include "stru.h"


void cria_jogador(jogador *j){

    printf("\nInsira o nome do jogador:\n");
    scanf(" %[^\n]s", &j->nome);
    j->h = 20;
    j->e = 5;

    printf("#####################################\n");
    printf("Nome: %s \nVida: %d Hp \nEnergia: %d/5 \n", j->nome, j->h, j->e);
    printf("#####################################\n");

}

void cria_cartas(){


}

void cria_deck(tp_pilha *p_deck){

    inicializa_pilha (p_deck);

    
}

void mostrar_cartas(){
    int t;//TIPOS DE CARTAS
    char t2 = 'N';

carta c1;//CARTA 1
c1.t = 1;//TIPO
c1.v = 5;//VALOR
c1.c = 1;//CUSTO

carta c2;//CARTA 2
c2.t = 1;//TIPO
c2.v = 5;//VALOR
c2.c = 1;//CUSTO

carta c3;//CARTA 3
c3.t = 1;//TIPO
c3.v = 5;//VALOR
c3.c = 1;//CUSTO

carta c4;//CARTA 4
c4.t = 1;//TIPO
c4.v = 5;//VALOR
c4.c = 1;//CUSTO

carta c5;//CARTA 5
c5.t = 1;//TIPO
c5.v = 5;//VALOR
c5.c = 1;//CUSTO

carta c6;//CARTA 6
c6.t = 1;//TIPO
c6.v = 5;//VALOR
c6.c = 1;//CUSTO

carta c7;//CARTA 7
c7.t = 1;//TIPO
c7.v = 5;//VALOR
c7.c = 1;//CUSTO

carta c8;//CARTA 8
c8.t = 1;//TIPO
c8.v = 5;//VALOR
c8.c = 1;//CUSTO

carta c9;//CARTA 9
c9.t = 1;//TIPO
c9.v = 5;//VALOR
c9.c = 1;//CUSTO

carta c10;//CARTA 10
c10.t = 1;//TIPO
c10.v = 5;//VALOR
c10.c = 1;//CUSTO


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
        printf("Valor: %d\n", c1.v);
        printf("Custo: %d energia\n", c1.c);
        printf("#####################################\n");//CARTA 2
        printf("Nome: Soco\n");
        printf("Tipo: Ataque\n");
        printf("Valor:%d\n", c2.v);
        printf("Custo: %d energia\n", c2.c);
        printf("#####################################\n");//CARTA 3
        printf("Nome: Facada\n");
        printf("Tipo: Ataque\n");
        printf("Valor: %d\n", c3.v);
        printf("Custo: %d energia\n", c3.c);
        printf("#####################################\n");//CARTA 4
        printf("Nome: Espadada\n");
        printf("Tipo: Ataque\n");
        printf("Valor: %d\n", c4.v);
        printf("Custo: %d energia\n", c4.c);
        printf("#####################################\n");//CARTA 5
        printf("Nome: Facadas Duplas\n");
        printf("Tipo: Ataque\n");
        printf("Valor: %d\n", c5.v);
        printf("Custo: %d energia\n", c5.c);
        printf("#####################################\n");//CARTA 6
        printf("Nome: Martelo de Espinhos\n");
        printf("Tipo: Ataque\n");
        printf("Valor: %d\n", c6.v);
        printf("Custo: %d energia\n", c6.c);
        printf("#####################################\n");//CARTA 7
        printf("Nome: Lanca-chamas\n");
        printf("Tipo: Ataque\n");
        printf("Valor: %d\n", c7.v);
        printf("Custo: %d energia\n", c7.c);
        printf("#####################################\n");//CARTA 8
        printf("Nome: Bombas Explosivas\n");
        printf("Tipo: Ataque\n");
        printf("Valor: %d\n", c8.v);
        printf("Custo: %d energia\n", c8.c);
        printf("#####################################\n");//CARTA 9
        printf("Nome: Chuva de Asteroidess\n");
        printf("Tipo: Ataque\n");
        printf("Valor: %d\n", c9.v);
        printf("Custo: %d energia\n", c9.c);
        printf("#####################################\n");//CARTA 10
        printf("Nome: Raios Infinitos\n");
        printf("Tipo: Ataque\n");
        printf("Valor: %d\n", c10.v);
        printf("Custo: %d energia\n", c10.c);
        printf("#####################################\n");
    }
    
    
  

    else if(t == 2){
        printf("#####################################\n");//CARTA 1
        printf("Nome: Chute\n");
        printf("Tipo: Defesa\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 2
        printf("Nome: Soco\n");
        printf("Tipo: Defesa\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 3
        printf("Nome: Facada\n");
        printf("Tipo: Defesa\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 4
        printf("Nome: Espadada\n");
        printf("Tipo: Defesa\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 5
        printf("Nome: Facadas Duplas\n");
        printf("Tipo: Defesa\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 6
        printf("Nome: Martelo de Espinhos\n");
        printf("Tipo: Defesa\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 7
        printf("Nome: Lanca-chamas\n");
        printf("Tipo: Defesa\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 8
        printf("Nome: Bombas Explosivas\n");
        printf("Tipo: Defesa\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 9
        printf("Nome: Chuva de Asteroidess\n");
        printf("Tipo: Defesa\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");//CARTA 10
        printf("Nome: Raios Infinitos\n");
        printf("Tipo: Defesa\n");
        printf("Valor: 5\n");
        printf("Custo: 1 energia\n");
        printf("#####################################\n");

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

monstro t1[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};//ATAQUE E DEFESA SEUS POSSIVEIS VALORES
monstro t2[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};//ATAQUE E DEFESA SEUS POSSIVEIS VALORES

monstro m1;//PRIMEIRO MONSTRO
tp_fila seqmons1;//FILA DE POSSIVEIS ATAQUES E DEFESAS
int v1 = 20;//VIDA DO PRIMEIRO MONSTRO

    m1.nome[20] = "Homem Gosma";
    m1.h = v1;
    inicializa_fila(&seqmons1);
    insere_fila(&seqmons1, t1);
    insere_fila(&seqmons1, t2);
    insere_fila(&seqmons1, t1);
    insere_fila(&seqmons1, t2);
    insere_fila(&seqmons1, t1);
    insere_fila(&seqmons1, t2);

monstro m2;//SEGUNDO MONSTRO
tp_fila seqmons2;//FILA DE POSSIVEIS ATAQUES E DEFESAS
int v2 = 30;//VIDA DO SEGUNDO MONSTRO

    m2.nome[20] = "Gaviao Feroz";
    m2.h = v2;
    inicializa_fila(&seqmons2);
    insere_fila(&seqmons2, t1);
    insere_fila(&seqmons2, t2);
    insere_fila(&seqmons2, t1);
    insere_fila(&seqmons2, t2);
    insere_fila(&seqmons2, t1);
    insere_fila(&seqmons2, t2);
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
    jogador j;//Jogador Principal
    tp_pilha p_deck;//Deck de Cartas do jogo
    char escolha;
    
    cria_cartas();

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
