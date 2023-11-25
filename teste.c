#include"listaSE.h"
#include "pilha.h"
#include "fila.h"
int main(){

tp_listase *lista;
tp_listase *atu;


lista=inicializa_listase();

cria_caminho(&lista);
printa_caminho(lista);

 atu= lista;
 atu = atu->desvio;
 atu=atu->prox;
 atu = atu->desvio;
 atu=atu->prox;


printf("%d %c", atu->f.monstro, atu->f.tipo_c);


}