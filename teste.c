#include"listaSE.h"

int main(){

tp_listase *lista;

lista=inicializa_listase();

cria_caminho(&lista);
printf("%d, %d\n", lista->desvio->prox->f.monstro, lista->desvio->prox->f.tipo_c);



}