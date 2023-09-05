#include "stru.h"
#include <string.h>

void criamonstro(monstro *m, vida v,char nome, tp_fila s){
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
    char nome[20];
    vida v;
    v = 30;
    tp_fila seq;
    inicializa_fila(&seq);
    strcpy(nome, "carlos");

}