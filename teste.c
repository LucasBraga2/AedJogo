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
printa_caminho(lista);


}