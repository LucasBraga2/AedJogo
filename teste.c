#include"listaSE.h"
#include "pilha.h"
#include "fila.h"
int main(){

tp_listase *lista;
carta c;
monstro m;
jogador j;

lista=inicializa_listase();

cria_caminho(&lista);
printf("monstro tipo %d, lugar no tabuleiro: %d\n", lista->desvio->prox->f.monstro, lista->desvio->prox->f.tipo_c);



}