#include"listaSE.h"

int main(){

tp_listase *lista;

lista=inicializa_listase();

insere_listase_no_fim(&lista, 2, 1);
insere_listase_no_fim(&lista, 2, 1);
insere_listase_no_fim(&lista, 2, 1);
insere_listase_no_fim(&lista, 2, 1);

int i = num_de_nos(&lista);
printf("%d", i);




}