#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>
#include "stru.h"
#define MAX 25

typedef struct{
  char nome [30];
  tipo t;
  char habilidade[50];
  valor v;
  custo c;
  numero n;
}carta;

typedef numero tp_item;

typedef struct
{
    int topo;
    tp_item item[MAX];
} tp_pilha;

typedef struct
{
    vida h;
    energia e;
    char nome[30];
    tp_pilha deck;
} jogador;
void inicializa_pilha(tp_pilha *p)
{
    p->topo = -1;
}
int pilha_vazia(tp_pilha *p)
{
    if (p->topo == -1)
    {
        return 1;
    }
    return 0;
}
int pilha_cheia(tp_pilha *p)
{
    if (p->topo == MAX - 1)
    {
        return 1;
    }
    return 0;
}
int push(tp_pilha *p, tp_item e)
{
    if (pilha_cheia(p) == 1)
    {
        return 0;
    }
    p->topo++;
    p->item[p->topo] = e;
    return 1;
}
int pop(tp_pilha *p, tp_item *e)
{
    if (pilha_vazia(p))
    {
        return 0;
    }
    *e = p->item[p->topo];
    p->topo--;
    return 1;
}
int top(tp_pilha *p, tp_item *e)
{
    if (pilha_vazia(p))
    {
        return 0;
    }
    *e = p->item[p->topo];
    return 1;
}
int altura_pilha(tp_pilha *p)
{
    return p->topo + 1;
}



#endif
